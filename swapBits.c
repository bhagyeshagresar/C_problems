//Swap the two bits of given position

#include <stdio.h>


unsigned int swapBits(unsigned int n, unsigned int p1, unsigned int p2){

    unsigned int result = 0;
    unsigned int bit1 = (n >> p1) & 1; //
    unsigned int bit2 = (n >> p2) & 1;

    unsigned int x = bit1 ^ bit2;

    x = (x << p1) | (x << p2);

    result = n ^ x;

    return result;

}


int main(){

    int res = swapBits(28, 0, 3);


    printf("%d", res);


    return 0;
}