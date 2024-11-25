#include <stdio.h>
#include <string.h>

#define Is_Numeric_String(d) ((*d >= 48) && (*d <= 57))

int atoi(char* s){

    int sign = 1;

    if(s == NULL){
        return -1;
    }

    if(s[0] == '-'){
        sign = -1;
        s++;
    }



    int n = strlen(s);

    int result = 0;

    while(*s != '\0'){

        char c = *s - '0';

        result = (10*result) + c;
        s++;

    }

    return (sign*result);

}



int main(){

    char s[] = "-456";

    int res = atoi(s);

    printf("%d", res);


    return 0;
}