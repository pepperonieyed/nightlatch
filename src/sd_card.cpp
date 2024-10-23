#include <sd_card.hpp>

bool sdcard_init()
{
    pinMode(SD_CS, OUTPUT);
    digitalWrite(SD_CS, HIGH);
    SPI.begin(SPI_SCK, SPI_MISO, SPI_MOSI);

    if (!SD.begin(SD_CS, SPI, 1000000))
        // Error initialising SD Card
        return false;

    uint8_t card_type = SD.cardType();
    if (card_type == CARD_NONE)
    {
        // No card inserted
        return false;
    }

    // Successfully setup card
    return true;
}
