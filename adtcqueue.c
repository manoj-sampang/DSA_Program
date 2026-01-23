#include <stdbool.h>
#include <stdio.h>
#include "adtcqueue.h"

bool isFull(cqueue *cq)
{
    if (cq->front == (cq->rear + 1) % MAX)
        return true;
    else
        return false;
}

bool isEmpty(cqueue *cq)
{
    if (cq->front == cq->rear)
        return true;
    else
        return false;
}

void enqueue(cqueue *cq, float data)
{
    if (isFull(cq))
    {
        printf("Circular Queue is full\n");
        return;
    }
    else
    {
        cq->rear = (cq->rear + 1) % MAX;
        cq->item[cq->rear] = data;
        printf("Enqueued in Circular Queue\n");
    }
}

void dequeue(cqueue *cq)
{
    if (isEmpty(cq))
    {
        printf("Circular Queue is Empty\n");
        return;
    }
    else
    {
        cq->front = (cq->front + 1) % MAX;
        printf("Dequeued with Value = %.2f\n", cq->item[cq->front]);
    }
}

void traverse(cqueue *cq)
{
    if (isEmpty(cq))
    {
        printf("Circular Queue is Empty\n");
        return;
    }
    else
    {
        printf("Traversing a Circular Queue\n");
        int iter = (cq->front + 1) % MAX;
        while (iter != (cq->rear + 1) % MAX)
        {
            printf("%.2f\t", cq->item[iter]);
            iter = (iter + 1) % MAX;
        }
        printf("\n");
    }
}