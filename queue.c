//Implement a Queue using LinkedList



typedef struct node{
    int value;
    struct node *next;
} node;


typedef struct{
    node* head;
    node* tail;
} queue;


void init_queue(queue *q){
    q->head = NULL;
    q->tail = NULL;
}

bool enqueue(queue *q, int value){

    //create a new node
    node* newnode = malloc(sizeof(node));
    newnode->value = value;
    newnode->next = NULL;

    if(newnode == NULL){
        return false;
    }

    //if there is a tail, connect the tail to  this new node
    if(q->tail != NULL){
        q->tail->next = newnode;
    }

    q->tail = newnode;

    //if its the first element then update the head to point to the first element
    if(q->head == NULL){
        q->head = newnode;
    }

    free(newnode);

    return true;


}



int dequeue(queue *q){

    if(q->head == NULL){
        return QUEUE_EMPTY;
    }

    node* tmp = q->head;
    int value = tmp->value;
    
    //update head
    q->head = q->head->next;

    //make sure tail is not dangling
    if(q->head == NULL){
        q->tail = NULL;
    }

    //free the tmp. Do we need to do this?
    free(tmp);

    return value;


}


int main(){

    queue q1;

    init_queue(&q1);

    enqueue(&q1, 34);
    enqueue(&q2, 35);

    int t;
    while((t = dequeue(&q1)) != QUEUE_EMPTY){
        printf("t = %d\n", t);
    }




}