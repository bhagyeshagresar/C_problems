#include <stdio.h>
#include <string.h>
#include <stdbool.h>


char* reverseString(char * s){

    int n = strlen(s);

    char* begin = s;
    char* end = s+n-1;

    while(begin < end){


        char temp = *begin;
        *begin = *end;
        *end = temp;
        begin++;
        end--;

    }

    return s;


}


char* reverseString2(char* s){
    int n = strlen(s);

    char* begin = s;
    char* end = s+n-1;

    while(begin < end){
        char temp = *begin;
        *begin = *end;
        *end = temp;
        begin++;
        end--;

    }

    return s;

}






int main(){

    char t[] = "hello world";

    char* p = reverseString2(t);

    printf("%s", p);

    return 0;
}