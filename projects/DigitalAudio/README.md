# Digital Audio signal processing

## Table of Contents

- [Digital Audio processing](#digital-audio-processing)
  - [Table of Contents](#table-of-contents)
  - [About](#about)
  - [Content](#content)
  - [Samples](#samples)
  - [Maintainer](#maintainer)

## About

A complete audio processing project for a ZYNQ 7000 SoC based on [my tutorial](https://www.kampis-elektroecke.de/fpga/audioausgabe-ueber-i2s/).

Please check write an e-mail to [DanielKampert@kampis-elektroecke.de](DanielKampert@kampis-elektroecke.de) or check my [website](https://www.kampis-elektroecke.de/) if you have any questions.

## Content

- **docs** - Additional documentation
- **ip_repo** - The IP repository for the AXI-Stream I2S transmitter from the [second](https://www.kampis-elektroecke.de/fpga/digitale-audioverarbeitung/axi-stream-interface-fuer-den-sender/) tutorial part.
- **hls** - The Vivado HSL project for the digital filter.
- **samples** - Some audio samples as wave files.
- **nordic** - I2S master project for developing purposes.
- **projects** - Contains the different subprojects.
 - **I2S_Audioplayer** - Yes, that´s what you think. Use the AXI-Stream I2S transmitter to create a simple audio player for your ZYNQ. Complete project from the [third](https://www.kampis-elektroecke.de/fpga/digitale-audioverarbeitung/abspielen-von-wave-dateien/) tutorial part.
 - **SSM2603** - Audio player implementation for the ZYBO development board. Based on the [fourth part](https://www.kampis-elektroecke.de/fpga/digitale-audioverarbeitung/ssm2603-audio-codec-erweiterung/) of my tutorial.
 - **DigitalFilter** - Implementation of a digital audio filter for the ZYBO development board. Based on the [fifth part](https://www.kampis-elektroecke.de/fpga/digitale-audioverarbeitung/entwurf-eines-audiofilters/) of my tutorial.
 - **I2S_Transmitter** - The source code for the [I2S transmitter project](https://www.kampis-elektroecke.de/fpga/digitale-audioverarbeitung/design-des-i2s-sender/). The transmitter reads out a ROM with a preloaded sine wave and use a [CS4344 D/A converter](https://statics.cirrus.com/pubs/proDatasheet/CS4344-45-48_F2.pdf) to output a constant tone.
 - **I2S_Receiver** - 
- **Signals.xlsx** - Excel sheet to calculate the values for a sine wave C array.
- **AudioGenerator.py** - Python application to generate new samples.

## Samples

| **Sample** | **Description** |
|---|---|
| Single_Left.wav | A single sine wave with a frequency of 1 kHz, a sampling rate of 44.1 kHz, a voltage level of -6 dBFs and a duration of 1 s for the left audio channel. |
| Single_Right.wav | A single sine wave with a frequency of 1 kHz, a sampling rate of 44.1 kHz, a voltage level of -6 dBFs and a duration of 1 s for the right audio channel. |
| Dual.wav | Two independent sine waves with a frequency of 1 kHz (right) and 1.5 kHz (left), a sampling rate of 44.1 kHz, a voltage level of -6 dBFs and a duration of 1 s. |
| Mixed.wav | A 8 kHz carrier which is modulated with a 10 kHz signal to create a 2 kHz signal with a 18 kHz distortion. The signal has a duration of 3 s for the right audio channel and is sampled at a rate of 48 kHz at a voltage level of 0 dBFs. |

## Maintainer

- [Daniel Kampert](mailto:DanielKampert@kampis-elektroecke.de)
