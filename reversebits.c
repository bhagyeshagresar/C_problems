#include <stdio.h>


uint32_t reverseBits(uint32_t x){

    uint32_t result = 0;

    for(int i = 0; i < 32; i++){
        int bit = (x >> i) & 1;

        result = result | (bit << (31-i));

    }

    return result;

}

int main(){

    




    return 0;
}