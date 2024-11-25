
//C program to find the power of two


#include <stdio.h>


int isPowerOfTwoLoop(int x){

    //check if a number is negative
    if(x <= 0){
        return 0;
    }

    while(x % 2 == 0){
        x = x/2;
    }

    if(x == 1){
        return 1;
    }

    return 0;




}



//Any number which is a power of 2 has only one bit set
//Ex: 4 -> 0100 and 3 -> 0011. If you AND the two, you get a zero. that means x is a power of two
int isPowerOfTwo(int x){

    if((x > 0) && (x&(x-1)) == 0){
        return 1;
    }

    return 0;
}


int main()
{
    int x = 8;
    int y = 5;
    
    
    
    int result1 = isPowerOfTwoLoop(x);
    int result2 = isPowerOfTwoLoop(y);

    printf("x result using while loop is %d \n", result1);
    printf("y result using while loop is %d \n", result2);


    int result3 = isPowerOfTwo(x);
    int result4 = isPowerOfTwo(y);

    printf("x result using bitwise manipulation is %d \n", result3);
    printf("y result using bitwise manipulation is %d \n", result4);




    

   

    return 0;
}