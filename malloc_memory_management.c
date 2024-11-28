//This program deep dives into how malloc allocates memory - Jacob Sorber Tutorial ( how processes get more memory)

//brk() moves the program break above the heap
//brk() sets the end of the data segment to the value specified by addr


// sbrk() increments the program's data space by increment bytes
// sbrk(0) is used to find the current location of the break
// Writing data above program break gives segfault


//mmap creates a new mapping in the virtual space of the calling process.

#include <stdio.h>
#include <uninstd.h>

#define PAGESIZE 4096

int main(){

    void *first = sbrk(0); //return the current location of the break. Output: 0xfde000
    void *second = sbrk(4096); //moves the break by 4096 bytes and tell me where the program break used to be. Output: 0xfde000

    int *ptr = (int*)second+1;
    *ptr = 0xDEAD; // gives segfault because you are setting value after the program break


    //mmap example
    uint8_t* first = mmap(NULL, PAGESIZE, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);

    







}