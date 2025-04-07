#include <stdio.h>


struct page_table_entry *page_table = NULL;
struct node *node = NULL;


struct node {
    int id;
    struct node *next;
    struct page_table_entry data;
    //maybe priority for LRU
};

struct queue {
    int size;
    struct node *head;
    struct node *curr;
};


struct page_table_entry {
    long page_num;
    int dirty;
    int free;
};

//do I have to deal with pointers?? mayyyyybe
void enqueue(struct queue q, struct node n){
    q.curr->next = &n;
    q.curr = &n;
}

//do I have to deal with pointers?? mayyyyybe
struct node* dequeue(struct queue q){
    struct node* temp = q.head;
    q.head = q.head->next;

    return temp;
}

//struct node* peek(struct queue); //or whatever this is?? not sure I need this shit

int get_queue_size(struct queue q) {
    return q.size;
}

int isempty(struct queue q) {
    return (q.size == 0) ? -1 : 1;
}


//lol linked list shit too?
/*
void fifo_page_replacement(struct queue q, struct node page) {
    if(q.size )
}
    */