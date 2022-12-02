#include <stdio.h>
#include <stdlib.h>
#define size 3
void insert_rear(int q[],int *r,int item)
{
    if((*r)==(size - 1))
    {
        printf("Queue Overflow\n");
    }
    else
    {
        (*r)++;
        q[*r] = item;
    }
}
int delete_front(int q[],int *f,int *r)
{
    //int del_item;
    if((*f)>(*r))
    {
        printf("Queue Underflow \n");
    }
    else
    {
        //del_item = q[*f];
        //(*f)++;
        return q[(*f)++];
    }
}
void display(int q[],int *f,int *r)
{
    int i;
    if((*f)>(*r))
    {
        printf("Queue Underflow \n");
    }
    else
    {
        for(i = *f;i<=*r;i++)
        {
            printf("%d \n",q[i]);
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
                 insert_rear(q,&r,item);
                 break;
        case 2 : del = delete_front(q,&f,&r);
                 printf("The deleted element is %d \n",del);
                 break;
        case 3 : display(q,&f,&r);
                 break;
        default: exit(0);   
    }
    }
}
