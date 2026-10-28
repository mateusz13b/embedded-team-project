# Rozpoznávanie hlasových povelov pomocou STM32 a TinyML

## 1. Cieľ projektu

Cieľom projektu je navrhnúť a realizovať zariadenie založené na mikrokontroléri STM32, ktoré bude pomocou mikrofónu rozpoznávať štyri hlasové povely a zobrazovať príslušný smer na displeji.

**Podporované hlasové povely:**

| Hlasový povel | Zobrazenie |
| --- | :---: |
| Dopredu | ↑ |
| Dozadu | ↓ |
| Vľavo | ← |
| Vpravo | → |

Zariadenie bude využívať malú neurónovú sieť (TinyML), ktorá bude spracovávať zvukový signál priamo na mikrokontroléri bez potreby internetového pripojenia.

Systém musí zároveň odmietať neznáme slová a hluk, aby nedochádzalo k nesprávnej aktivácii povelov.

## 2. Potrebný hardvér a periférie

| Komponent | Účel |
| --- | --- |
| STM32 vývojová doska | Spracovanie zvuku, vykonávanie neurónovej siete a riadenie displeja |
| MEMS mikrofón (PDM/I²S) | Zachytávanie hlasových povelov |
| OLED alebo TFT displej | Zobrazovanie rozpoznaného smeru pomocou šípky |
| USB kábel | Napájanie, programovanie a komunikácia s PC |
| ST-LINK programátor/debugger | Nahrávanie programu a ladenie, ak nie je integrovaný na doske |
| Prepojovacie vodiče | Prepojenie jednotlivých komponentov |

### Periférie mikrokontroléra

- **GPIO** – ovládanie displeja a prípadných signalizačných LED.
- **I²C alebo SPI** – komunikácia s displejom.
- **I²S / SAI / DFSDM alebo SPI** – príjem dát z digitálneho mikrofónu podľa jeho typu a možností STM32.
- **DMA** – prenos zvukových dát bez neustáleho zaťažovania procesora.
- **TIM** – časovanie a meranie reakčného času.
- **UART / USB** – diagnostika a odosielanie nameraných údajov do PC.
- **RAM a Flash** – ukladanie zvukových bufferov, príznakov a modelu neurónovej siete.

> **Poznámka:** Konkrétna konfigurácia periférií bude závisieť od zvolenej vývojovej dosky STM32 a mikrofónu.

## 3. Softvérové nástroje

| Nástroj | Využitie |
| --- | --- |
| STM32CubeIDE / STM32CubeMX | Konfigurácia mikrokontroléra a implementácia firmvéru |
| Python | Príprava datasetu a spracovanie zvukových nahrávok |
| NumPy / Librosa | Predspracovanie zvuku a extrakcia MFCC alebo spektrogramov |
| TensorFlow / Keras | Trénovanie neurónovej siete |
| STM32Cube.AI / STM32Cube AI Studio | Optimalizácia a nasadenie modelu na STM32 |
| CMSIS-DSP | Výpočty potrebné pri spracovaní zvuku na STM32 |
| Git / GitHub | Správa zdrojového kódu a dokumentácie |

## 4. Postup realizácie

### Krok 1 – Výber hardvéru

- [ ] Vybrať vhodnú vývojovú dosku STM32 s dostatočnou RAM, Flash a výpočtovým výkonom.
- [ ] Vybrať kompatibilný mikrofón a displej.
- [ ] Navrhnúť zapojenie komponentov.
- [ ] Overiť komunikáciu medzi STM32, mikrofónom a displejom.

### Krok 2 – Vytvorenie datasetu

- [ ] Nahrať štyri hlasové povely od viacerých osôb.
- [ ] Zabezpečiť rôzne hlasy, výslovnosť a rýchlosť reči.
- [ ] Doplniť nahrávky neznámych slov a okolitého hluku.
- [ ] Rozdeliť dataset na trénovaciu, validačnú a testovaciu množinu, ideálne bez prekrývania osôb medzi množinami.
- [ ] Pripraviť označené zvukové súbory pre trénovanie modelu.

### Krok 3 – Predspracovanie zvuku

- [ ] Zjednotiť vzorkovaciu frekvenciu nahrávok (predbežne 16 kHz).
- [ ] Upraviť dĺžku zvukových vzoriek (napríklad na 1 sekundu).
- [ ] Implementovať normalizáciu a základné spracovanie zvukového signálu.
- [ ] Extrahovať príznaky pomocou MFCC alebo spektrogramu.
- [ ] Pripraviť vstupné dáta pre neurónovú sieť.

### Krok 4 – Trénovanie neurónovej siete

- [ ] Navrhnúť malú neurónovú sieť vhodnú pre STM32, napríklad jednoduchú CNN.
- [ ] Trénovať model na pripravenom datasete.
- [ ] Rozpoznávať šesť kategórií: štyri povely, neznáme slová a hluk/ticho.
- [ ] Vyhodnotiť presnosť modelu na testovacej množine.
- [ ] Optimalizovať veľkosť modelu, prípadne pomocou INT8 kvantizácie.
- [ ] Nastaviť prah spoľahlivosti na odmietanie neznámych zvukov.

### Krok 5 – Implementácia na STM32

- [ ] Nakonfigurovať mikrofón a kontinuálne získavanie zvukových dát.
- [ ] Implementovať zvukový buffer a predspracovanie signálu.
- [ ] Zabezpečiť rovnakú extrakciu príznakov ako pri trénovaní.
- [ ] Konvertovať a integrovať neurónovú sieť pomocou STM32Cube.AI alebo iného TinyML prostredia.
- [ ] Implementovať vyhodnocovanie výstupu neurónovej siete.
- [ ] Otestovať rozpoznávanie hlasových povelov priamo na STM32.

### Krok 6 – Zobrazovanie výsledkov

- [ ] Implementovať komunikáciu s displejom.
- [ ] Vytvoriť grafické symboly štyroch smerových šípok.
- [ ] Pri úspešnom rozpoznaní povelu zobraziť príslušnú šípku.
- [ ] Pri neznámom slove alebo hluku nezobrazovať nový smerový povel.
- [ ] Prípadne doplniť indikáciu stavu zariadenia (počúvanie, rozpoznanie, neznámy zvuk).

### Krok 7 – Testovanie a vyhodnotenie

- [ ] Otestovať zariadenie pomocou nahrávok, ktoré neboli použité pri trénovaní.
- [ ] Vytvoriť maticu zámen (confusion matrix).
- [ ] Vyhodnotiť presnosť rozpoznávania jednotlivých povelov.
- [ ] Zmerať počet falošných aktivácií pri neznámych slovách a hluku.
- [ ] Zmerať reakčný čas od vyslovenia povelu po zobrazenie výsledku.
- [ ] Zistiť využitie RAM a Flash pamäte.
- [ ] Overiť funkčnosť pri rôznych vzdialenostiach od mikrofónu a rôznych úrovniach okolitého hluku.

### Krok 8 – Dokumentácia a finálne overenie

- [ ] Zdokumentovať hardvérové zapojenie.
- [ ] Popísať architektúru neurónovej siete a spôsob trénovania.
- [ ] Uviesť parametre spracovania zvuku.
- [ ] Spracovať výsledky testovania do tabuliek a grafov.
- [ ] Vyhodnotiť obmedzenia systému a možnosti jeho zlepšenia.
- [ ] Pripraviť finálnu demonštráciu funkčného zariadenia.

## 5. Očakávaný výsledok

Výsledkom projektu bude samostatné zariadenie na báze STM32, ktoré dokáže v reálnom čase rozpoznávať štyri hlasové povely a vizualizovať ich pomocou smerových šípok na displeji.

Súčasťou projektu bude natrénovaný TinyML model, zdrojový kód firmvéru, dataset zvukových nahrávok a dokumentácia s vyhodnotením presnosti, reakčného času a pamäťových nárokov.

> **Dôležité:** Parametre predspracovania zvuku (vzorkovacia frekvencia, dĺžka okna, MFCC/spektrogram, normalizácia) musia byť zhodné pri trénovaní modelu aj pri jeho použití na STM32.
