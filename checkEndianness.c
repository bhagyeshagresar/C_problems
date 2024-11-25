// C program to check for endianness

#include <stdio.h>
#include <stdint.h>

typedef enum{
    FALSE = 0,
    TRUE = 1,
}BOOL;


BOOL isSmallEndian(){
    uint32_t num = 1;
    uint8_t byte;

    byte = *((uint8_t*)&num);

    return (byte == 1) ? TRUE : FALSE;

}

void mem_layout(){

    uint32_t num = 0x12345678;
    unsigned int *byte;
    int i;

    byte = (unsigned int*)&num;

    for(int i = 0; i < sizeof(num); i++){
        printf("Byte pos: %d, content: %u \n", i, byte[i]);
    }

}



int main(){

    uint32_t x = 0x12345678;
    
    mem_layout();

    if(isSmallEndian()){
        printf("The system is small endian");
    }
    else{
        printf("The system is big endian");
    }


}