//Implement a stack using linked list

#include <stdio.h>

#define STACK_LENGTH 5
#define EMPTY (-1)
#define STACK_EMPTY INT_MIN


typedef struct node{

    int value;
    struct node* next;

} node;


typedef node* stack;


bool push(stack* myStack, int value){

    node* newnode = malloc(sizeof(node));

    if(newnode == NULL){
        return false;
    }

    newnode->value = value;
    newnode->next = *myStack; //why *myStack? not just myStack
    *myStack = newnode;
    return true;

}


int pop(stack *myStack){

    if(*myStack == NULL){
        return STACK_EMPTY;
    }

    int result = *myStack->value;
    node* tmp = *myStack;
    *myStack = *myStack->next;
    free(tmp);

    return result;
}

