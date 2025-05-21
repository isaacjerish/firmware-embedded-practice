#include <stdint.h>

uint32_t swapEndian(uint32_t value) {
    uint32_t temp = 0;
    temp |= (value << 24) & (0xFF000000);
    temp |= (value << 8) & (0x00FF0000);
    temp |= (value >> 8) & (0x0000FF00);
    temp |= (value >> 24) & (0x000000FF);
    return temp;
}
