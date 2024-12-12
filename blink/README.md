# Blink
Blink the Raspberry Pi Pico's onboard LED using Embedded-C.

##### To get started, clone this repo and start building the software:
```
cd <cloned repo>
mkdir build
cd build
cmake ..

make
```

##### Connect the Pico while holding the `BOOTSEL` button

##### Copy the binary to the Pico Flash EEPROM
```
cp blink.uf2 /path/to/pico
```