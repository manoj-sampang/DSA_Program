#include <stdio.h>
#include <stdlib.h>
#include "adtlinkedlist.h"
void display(Node *node)
{
    int i;
    printf("Displaying data inside linked list\n");
    while (node != NULL)
    {
        i = 1;
        printf("Data[%d] = %.2f ->\n", i, node->data);
        node = node->next;
    }
}
int main()
{
    int n;

    printf("Creating a Node\n");
    printf("Enter no. of nodes to create for linked list = ");
    scanf("%d", &n);
    float a[n];
    Node *node[n];
    for (int i = 0; i < n; ++i)
    {

        printf("value[%d] = ", i + 1);
        scanf("%f", &a[i]);
        fflush(stdin);
        node[i] = createNode(a[i]);
    }
    for (int i = 0; i < n; ++i)
    {
        if (i < n - 1)
        {
            node[i]->next = node[i + 1];
        }
        else
        {
            node[i]->next = NULL;
        }
    }
    display(node[0]);
    for (int i = 0; i < n; ++i)
    {
        free(node[i]);
    }
    return 0;
}