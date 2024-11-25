//Implement a Ring Buffer in C

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>


#define QUEUE_EMPTY INT_MIN

typedef struct{
    int* values;
    int head, tail, num_entries, size;
} queue;


void init_queue(queue *q, int max_size){
    q->size = max_size;
    q->head = 0;
    q->tail = 0;
    q->num_entries = 0;
    q->values = malloc(sizeof(int)*q->size);

}

bool queue_empty(queue* q){

    return (q->num_entries == 0);
}

bool queue_full(queue* q){

    return (q->num_entries == q->size);
}


bool queue_destroy(queue* q){
    free(q->values);
}



bool enqueue(queue *q, int value){


    if(queue_full(q)){
        return false;
    }

    q->value[q->tail] = value;
    q->num_entries++;
    
    //handle circular case
    q->tail = (q->tail + 1) % q->size;

    return true;


}


int dequeue(queue*q){

    int result;

    if(queue_empty(q)){
        return QUEUE_EMPTY;
    }

    result = q->values[q->head];
    q->head = (q->head + 1) % q->size;
    q->num_entries--;


    return result;



}


int main(){
    queue q1;

    init_queue(&q1, 5);

    enqueue(&q1, 56);
    enqueue(&q2, 57);
    enqueue(&q3, 58);
    enqueue(&q4, 59);
    enqueue(&q5, 60);

    int t;

    while((t == dequeue(&q1)) == QUEUE_EMPTY){
        printf("t = %d\n", t);
    }



}