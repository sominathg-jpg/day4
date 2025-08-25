#include <stdio.h>
int queue[10];
// enqueue operation
// dequeue operation
// travesal in the queue
int frontTop = 0;
int tailTop = -1;
void printQ(int frontTop, int tailTop)
{
    if (frontTop > tailTop)
    {
        printf("Queue is already empty");
    }
    else
    {
        printf("\n****************************************************************\n");
        printf("\n*************************Queue**********************************\n");
        printf("\n****************************************************************\n");
        for (int i = frontTop; i <= tailTop; i++)
        {
            printf("[%d]\t", queue[i]);
        }
        printf("\n****************************************************************\n");
    }
}
void enqueue(int ele)
{
    if (tailTop == 9)
    {
        printf("Queue is overflow!!!");
    }
    else
    {
        queue[tailTop + 1] = ele;
        tailTop++;
        printQ(frontTop, tailTop);
        printf("element is enqueued!");
    }
}
void dequeue()
{
    if (frontTop > tailTop)
    {
        printf("Queue is already empty");
    }
    else
    {
        frontTop++;
        printQ(frontTop, tailTop);
        printf("Element dequeued!!");
    }
}
int main()
{
    // implementation of the queue data structure in the c language
    do
    {
        printf("1. Enqueue opration\n");
        printf("2.dequque opration\n");
        printf("3.print Queue\n");
        printf("Enter option=\n");
        int choice, ele;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter element to enququ=\n");
            scanf("%d", &ele);
            enqueue(ele);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            printQ(frontTop, tailTop);
            break;
        default:
            printf("invalid choice\n");
            break;
        }
    } while (1);
    return 0;
}
