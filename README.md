# ESP32_COAP_CLIENT_ROBUST
ESP with Development of Robust CoAP

# Requirements

## ESP IDF
ESP-IDF is Espressif's official IoT Development Framework for the ESP32, ESP32-S, ESP32-C and ESP32-H series of SoCs.

- Link menuju source code https://github.com/espressif/esp-idf/tags
- Untuk pengembangan per 26 September 2024 menggunakan tag versi v5.3.1
- git clone -b v5.3.1 --recursive https://github.com/espressif/esp-idf.git esp-idf-v5.3.1
- cd esp-idf-v5.3.1/
- Run the install script to set up the build environment. The options include `install.bat` or `install.ps1` for Windows, and `install.sh` or `install.fish` for Unix shells.
- Run the export script on Windows (`export.bat`) or source it on Unix (source `export.sh`) in every shell environment before using ESP-IDF
- dokumentasi lengkap cara build, flash monitor dapat dilihat pada https://github.com/espressif/esp-idf

## Clone base code in this repository

- Git Clone https://github.com/dsp-mc-itb/ESP32_COAP_ROBUST.git
- Kita perlu menjalankan esp-idf initial script (export.bat) namun pada shell environment kita. Caranya ngakalinnya adalah membuat script.bat yang isinya adalah menjalankan export.bat di folder/lokasi tempat esp-idf-v5.3.1
- edit script.bat untuk lokasi tempat penyimpanan anda menaruh folder esp-idf-v5.3.1



