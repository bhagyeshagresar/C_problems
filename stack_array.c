//Implement a stack using arrays

//need to modify the code so that it handles multiple stacks instead of just one global stack

#include <stdio.h>

#define STACK_LENGTH 5
#define EMPTY (-1)
#define STACK_EMPTY INT_MIN

int myStack[STACK_LENGTH];
int top = EMPTY;


bool push(int value){

    if(top >= STACK_LENGTH-1){
        return false;
    }

    top++;
    myStack[top] = value;
    return true;

}


int pop(){

    if(top == EMPTY){
        return STACK_EMPTY;
    }

    int result = myStack[top];
    top--;
    return result;

}



int main(){

    push(56);
    push(78);
    push(13);


    int t;
    while((t = pop()) != STACK_EMPTY){
        printf("t = %d\n", t);
    }



}



