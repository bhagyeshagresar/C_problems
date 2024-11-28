//Program to demonstrate how to map files into memory using mmap. How to map files into memory (Jacob Sorber tutorial)
//These programs won't work in Windows

#include <sys/mman.h>


int main(int argc, char **argv){

    //file descriptor
    int fd = open("./sometext.txt", O_RDWR, S_IRUSR | S_IWUSR);
    struct stat sb;

    if(fstat(fd, &sb) == -1){

        perror("could not get file size. \n");
    }

    printf("file size is %ld\n", sb.st_size);

    //read file from memory
    char* file_in_memory = mmap(NULL, sb.st_size, PROT_READ, MAP_PRIVATE, fd, 0);

    printf("Printing file, as an array of characters...\n\n");

    for(int i = 0; i < sb.st_size; i++){

        printf("%c", file_in_memory[i]);


    }
    printf("\n");


    //write to file
    char* file_in_memory = mmap(NULL, sb.st_size, PROT_READ|PROT_WRITE, MAP_SHARED, fd, 0);

    for(int i = 0; i < sb.st_size; i++){

        if((i % 2) == 0){

            file_in_memory[i] = toupper(file_in_memory[i]);


        }

    }
    printf("\n");












}