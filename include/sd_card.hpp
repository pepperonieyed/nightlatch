#ifndef NIGHTLATCH_INC_SD_CARD
#define NIGHTLATCH_INC_SD_CARD

#include <SPI.h>
#include <SD.h>
#include <FS.h>

constexpr uint8_t SD_CS = 10;
constexpr uint8_t SPI_MOSI = 11;
constexpr uint8_t SPI_SCK = 12;
constexpr uint8_t SPI_MISO = 13;

bool sdcard_init();

#endif
