#include<stdio.h>
#include<stdlib.h>

void display(int arr[])
{
    int i = 0;
    for(i = 0;i<11;i++)
    {
        printf("\n The %dth index elemen is %d: \t",i,arr[i]);
    }
}
void main()
{
    int n,i,p,r;
    int arr[11];
    printf("Enter the size");
    scanf("%d",&n);
    for(i=0;i<11;i++)
    {
        arr[i] = -1;
    }
    for(i=0;i<n;i++)
    {
        printf("\n Enter element: \t");
        scanf("%d",&p);
        r = p%11;
        if(r == -1)
        {
            arr[r] = p;
        }
        else
        {
            while(arr[r] != -1)
            {
                r = (r+1)%11;
            }
            arr[r] = p;
        }
    }
    display(arr);
}

