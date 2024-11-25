//C program to find the only set bit in a number


#include <stdio.h>



int findOnlySetBit(int x){
    int pos = -1;
    while(x){

        
        pos++;
        x = x >> 1;

    }

    return pos;

}

int main(){

    


}