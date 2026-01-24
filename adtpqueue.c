#include "adtpqueue.h"

void insert(PQUEUE *pq, float data, int choice)
{

	if (pq->rear == MAX - 1)
	{
		printf("QUEUE IS FULL\n");
		return;
	}

	if (pq->data == NULL)
	{
		pq->rear++;
		pq->data[rear] = data;
	}

	if (choice == 1)
	{
		for (int i = pq -> front + 1; i <= pq -> rear; ++i)
		{
			if(data <= pq -> data[i]) {
				int index = i;
				break;	
			}
		}
		PQUEUE *temp = pq;
		pq->data[index] = data;
		pq->rear++;
		for (int i = index + 1; i <= rear; ++i)
		{
			pq->data[i] = *(temp + i - 1);
		}
	}
	else
	{

		for (int i = front + 1; i <= rear; ++i)
		{
			if (data >= pq->data[i])
			{
				int index = i;
				break;
			}
			index = i;
		}
		PQUEUE *temp = pq;
		pq->data[index] = data;
		pq->rear++;
		for (int i = index + 1; i <= rear; ++i)
		{
			pq->data[i] = *(temp + i - 1);
		}
	}
}
void delete(PQUEUE* pq) {
	if(pq == NULL) {
		print("Queue is Empty\n");
		return;
	} 
	pq -> front++;
	printf("The Dequeued Item is = %.2f\n", pq -> data[pq -> front]);
}