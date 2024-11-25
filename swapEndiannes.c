//C program to swap endianness
#include <stdio.h>
#include <stdint.h>


uint32_t flipEndianness(uint32_t x){

    uint32_t result = 0;
    //12345678
    
    
    //56781234
    //78563412

    x = ((x & 0xFFFF0000) >> 16) | ((x & 0x0000FFFF) << 16);
    x = ((x & 0xFF00FF00) >> 8) | ((x & 0x00FF00FF) << 8);

    return x;
}


int main(){

    uint32_t big_endian = 0x12345678;
    uint32_t little_endian = 0x78563412;

    uint32_t big_to_little_endian = flipEndianness(big_endian);
    uint32_t little_to_big_endian = flipEndianness(little_endian);

    printf("Big Endian %x to Little Endian %x", big_endian, big_to_little_endian);
    printf("Little Endian %x to big endian %x", little_endian, little_to_big_endian);


}