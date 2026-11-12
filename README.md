# Rozpoznávanie hlasových povelov pomocou STM32 a TinyML

## 1. Cieľ projektu

Cieľom projektu je vytvoriť embedded zariadenie, ktoré pomocou mikrofónu rozpozná štyri hlasové povely:

- **Dopredu** – ↑
- **Dozadu** – ↓
- **Vľavo** – ←
- **Vpravo** – →

Rozpoznávanie bude prebiehať priamo na mikrokontroléri STM32 pomocou malej neurónovej siete TinyML, bez potreby internetového pripojenia.

Systém musí okrem podporovaných povelov rozpoznať aj neznáme slová, hluk a ticho. V takom prípade nesmie zobraziť nesprávny smer.

## 2. Navrhovaný hardvér

| Komponent | Odporúčaný model | Účel |
|---|---|---|
| Vývojová doska | **NUCLEO-H743ZI2** | Hlavná riadiaca jednotka systému |
| Mikrokontrolér | **STM32H743ZIT6** | Spracovanie zvuku a spúšťanie neurónovej siete |
| Mikrofónová doska | **X-NUCLEO-CCA02M2** | Digitálny MEMS mikrofón s rozhraním PDM |
| Mikrofón | **MP34DT06J** | Zachytávanie hlasových povelov |
| Displej | **OLED SSD1306, 128×64, I²C, 0,96"** | Zobrazenie smerových šípok |
| Stavový LED | **Kingbright WP59EGW/CA** alebo bežný LED 5 mm | Indikácia stavu zariadenia |
| Rezistor | **330 Ω** | Obmedzenie prúdu LED |
| Prepojovacie vodiče | Dupont vodiče | Prepojenie modulov |
| Napájanie/programovanie | USB kábel | Napájanie dosky a nahrávanie programu |
| Montáž | Nepájivé kontaktné pole | Jednoduché zapojenie komponentov |

Doska NUCLEO-H743ZI2 obsahuje integrovaný programátor a debugger ST-LINK, preto nie je potrebný samostatný programátor.

### Navrhované rozhrania mikrokontroléra

- **SAI alebo DFSDM + DMA** – príjem zvuku z digitálneho mikrofónu;
- **I²C** – komunikácia s OLED displejom;
- **GPIO** – ovládanie stavového LED;
- **UART/USB** – diagnostika a odosielanie údajov do počítača;
- **Flash a RAM** – uloženie programu, zvukových bufferov a neurónovej siete;
- **Timer** – meranie času spracovania a reakčného času.

## 3. Spracovanie signálu

```text
Mikrofón
   ↓
PDM zvukový signál
   ↓
SAI/DFSDM + DMA
   ↓
PCM zvuk, 16 kHz
   ↓
MFCC alebo spektrogram
   ↓
TinyML neurónová sieť
   ↓
Rozpoznaný povel
   ↓
OLED displej a stavový LED
```

Neurónová sieť bude mať šesť výstupných kategórií: dopredu, dozadu, vľavo, vpravo, neznáme slovo a hluk alebo ticho.

## 4. Rozdelenie práce medzi troch členov

### Člen 1 (Ekaterina Sokolova) – Získavanie zvuku a periférie STM32

- nakonfigurovať STM32 v STM32CubeMX;
- nastaviť SAI alebo DFSDM;
- implementovať príjem PDM dát z mikrofónu;
- nastaviť DMA a dvojitý zvukový buffer;
- konvertovať PDM signál na PCM;
- zabezpečiť vzorkovanie s frekvenciou 16 kHz;
- testovať kvalitu zaznamenaného signálu;
- odosielať diagnostické údaje cez UART alebo USB.

### Člen 2 (Matvii Boltian) – Dataset a neurónová sieť TinyML

- nahrať hlasové povely od viacerých osôb;
- pripraviť nahrávky neznámych slov, hluku a ticha;
- rozdeliť dataset na trénovaciu, validačnú a testovaciu časť;
- implementovať MFCC alebo spektrogram;
- navrhnúť a natrénovať malú CNN sieť;
- vykonať INT8 kvantizáciu;
- konvertovať a integrovať model pomocou STM32Cube.AI;
- zmerať využitie Flash, RAM a čas inferencie priamo na STM32.

### Člen 3 (Aleksandr Bobrov) – Displej, LED a integrácia systému

- nakonfigurovať I²C rozhranie STM32;
- vytvoriť ovládač pre OLED SSD1306;
- vykresliť šípky pre štyri smery;
- pripojiť a ovládať stavový LED cez GPIO;
- vytvoriť hlavný programový cyklus;
- spojiť získavanie zvuku, neurónovú sieť a zobrazovanie;
- implementovať odmietnutie neznámych povelov;
- vykonať finálne testovanie celého zariadenia.

## 5. Softvérové nástroje

- STM32CubeIDE a STM32CubeMX;
- STM32Cube.AI alebo STM32 AI Studio;
- CMSIS-DSP a CMSIS-NN;
- Python, TensorFlow/Keras, NumPy a librosa;
- Git a GitHub.

## 6. Testovanie

Počas testovania bude potrebné overiť presnosť rozpoznania povelov, počet falošných aktivácií, správanie pri hluku a tichu, reakčný čas, využitie Flash a RAM a funkčnosť pri hlasoch osôb, ktoré neboli použité pri trénovaní.

Výsledkom projektu bude samostatné zariadenie na báze STM32, ktoré dokáže v reálnom čase rozpoznávať hlasové povely a zobrazovať príslušný smer na OLED displeji.
