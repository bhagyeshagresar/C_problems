#include <stdio.h>


struct Node{
    int val;
    struct Node* next;
};


bool hasCycle(struct Node* head){

    if(head == NULL){
        return false;
    }

    Node* fast = head;
    Node* slow = head;


    while(fast != NULL && fast->next){

        fast = fast->next->next;
        slow = slow->next;

        if(fast == slow){
            return true;
        }


    }

    return false;








}




int main(){

    



}