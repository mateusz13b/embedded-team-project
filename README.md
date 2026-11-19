# STM32 AI Studio — Neural Network Import Test

Test branch (`AB_nn_test`) for importing, analyzing, and checking memory footprint of a neural network model in **ST Edge AI Studio** / **STM32CubeIDE** on Ubuntu.

## Environment
- **OS:** Ubuntu
- **Tools:** ST Edge AI Studio (v4.1.0), STM32CubeIDE (v2.3.0), `arm-none-eabi-gcc`
- **Target:** STM32F7 (update if using another MCU/board)

## Quick Workflow
1. **Model & Workspace:** Place the test model (e.g., `.onnx` / `.h5` / `.tflite`) in the project/model directory and open the workspace in **STM32CubeIDE** / **ST Edge AI Studio**.
2. **Link IDE:** Ensure `STM32CubeIDE` path is linked in ST Edge AI Studio (`v2.1.0+`).
3. **Analyze & Generate:** Run **Analyze** in ST Edge AI Studio to inspect RAM, Flash / weights size, and memory pools (`RAM`, `EXTERNAL_SDRAM`, `weights_array`), then generate C code (`network.c`, `network_data.c`, etc.).
4. **Build:** Compile the project in STM32CubeIDE to verify there are no linker or memory-overflow errors.

## Notes & Troubleshooting
- **Permissions (`Permission denied` on `NetworkRuntime*.a`):** If `/opt/ST/STEdgeAI` was installed as `root`, ensure read/traverse permissions are granted to the current user (`sudo chmod -R a+rX /opt/ST/STEdgeAI`).
- **Memory size:** Check `weights_array` and `RAM` usage against the target MCU's Flash/SRAM (and external SDRAM if applicable).

## Branch Info
- Branch: `AB_nn_test`
- Purpose: Experimental NN import and footprint check before merging into main development branch.
