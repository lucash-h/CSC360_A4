#ifndef FUNCTIONS_H
#define FUNCTIONS_H

struct page_table_entry *page_table;
struct node *node;


struct queue *queue;

void enqueue(struct queue q, struct node n);
struct node* dequeue(struct queue q);
int get_queue_size(struct queue q);
int isempty(struct queue q);


#endif 