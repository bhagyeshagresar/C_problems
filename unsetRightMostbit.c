// C code to swap using XOR
#include <stdio.h>

int unsetRightMostBit(int x){

    int pos = 0;
    while(((x >> pos) & 1) == 0){
        pos++;
        
    }

    x = x ^ (1 << pos);


    return x;

}



int main()
{
    int x = 3;

    int result = unsetRightMostBit(x);
    
    printf("Result is %d", result);
    

    return 0;
}