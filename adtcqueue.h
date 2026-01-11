#ifndef ADTCQUEUE_H
#define ADTCQUEUE_H
#define MAX 10


typedef struct cqueue {
    float item[MAX];
    int rear, front;
}cqueue;

bool isFull(cqueue*);
bool isEmpty(cqueue*);

void enqueue(cqueue*, float);
void dequeue(cqueue*);
void traverse(cqueue*);
#endif