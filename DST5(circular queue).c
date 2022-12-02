#include <stdio.h>
#include <stdlib.h>
#define Qsize 3
int count = 0;
void insert(int q[],int item,int *rear)
{
    if(count == Qsize)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        (*rear)++;
        (*rear) = (*rear) % Qsize;
        q[*rear] = item;
        count++;
    }
}
int delete(int q[],int *front,int *rear)
{
    int del_item;
    if(count==0)
    {
        printf("Queue Underflow \n");
    }
    else
    {
        del_item = q[*front];
        (*front) = (++(*front)) % Qsize;
        count--;
        return del_item;
    }
}
void display(int q[],int *front)
{
    int temp,i;
    temp = *front;
    if(count == 0)
    {
        printf("Queue Underflow \n");
    }
    else
    {
        for(i = 0;i<count;i++)
        {
            printf("%d \n",q[temp]);
            temp = (temp+1) % Qsize;
        }
    }
}   
void main()
{
    int a,item,q[3],r=-1,f=0,del;
    while(1)
    {
    printf("1.Insert \n 2.Delete \n 3.Display \n 4.Exit \n");
    scanf("%d",&a);
    switch(a)
    {
        case 1 : printf("Enter the item: \n");
                 scanf("%d",&item);
                 insert(q,item,&r);
                 break;
        case 2 : del = delete(q,&f,&r);
                 printf("The deleted element is %d \n",del);
                 break;
        case 3 : display(q,&f);
                 break;
        default: exit(0);   
    }
    }
}
