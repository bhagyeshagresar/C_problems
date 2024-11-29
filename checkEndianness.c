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

    //look at the first byte of the 4byte int
    byte = *((uint8_t*)&num);

    printf("The byte is %d\n", byte);

    return (byte == 1) ? TRUE : FALSE;

}

void mem_layout(){

    uint32_t num = 0x12345678;
    char *byte;
    int i;

    // As a special rule in C, we are allowed to use character pointers specifically to access individual bytes of any other variable.
    byte = (char*)&num;

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