#ifndef PQUEUE_H
#define PQUEUE_H
#define MAX 10

// here rear is the pointer that points to the latest entry of the queue
// and front is the pointer that points before the first deleted item
// here in Priority Queue we must have an ascending priority queue or the descending priority queue
// IN ascending Queue The first deleted item must be the lowest value
// IN descending Queue the first deleted item must be the largest value
typedef struct PQUEUE
{
	float data[MAX];
	int rear;
	int front;
} PQUEUE;
// functions for Priority Queue

void insert(PQUEUE *pq, float data, int choice);
void delete(PQUEUE *pq);

#endif
