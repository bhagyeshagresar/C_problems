#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char* removeDuplicate(char* s){

    bool exists[256] = {false};
    int n = strlen(s);
    int index = 0;

    for(int i = 0; i < n; i++){
        char c = s[i];

        if(!exists[c]){
            s[index] = c;
            index++;
            exists[c] = true;
        }
    }
    
    s[index] = '\0';
    return s;

}

char* removeDuplicate(char* s){
    bool exists[256] = {false};
    int n = strlen(s);
    int index = 0;

    for(int i = 0; i < n; i++){

        char c = s[i];
        int index = 0;

        if(!exists[c]){
            exists[c] = true;
            s[index] = c;
            index++;
        }
    }

    s[index] = '\0';
    return s;
}



int main(){

    char s[] = "geeks for geeks";

    char* p = removeDuplicate(s);

    printf("%s\n", removeDuplicate(s));
    
    return 0;
}