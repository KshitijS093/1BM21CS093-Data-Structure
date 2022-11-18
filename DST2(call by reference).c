#include<stdio.h>
#include<stdlib.h>
#define size 3

void push(int st[],int *top)
{   int data;
	if(*top==(size - 1))
		printf("Stack Overflow \n");
	else
	{
	     printf("Enter the element you want to add\n");
         scanf("%d",&data);
		(*top)++;
		st[*top] = data;
	}
}
int pop(int st[],int *top)
{       int n;
		if(*top==-1)
			printf("Stack Underflow \n");
		else
		{
			n = st[*top];
			(*top)--;
			return n;
		}
}
void display(int st[],int*top)
{
	if(*top == -1)
		printf("Stack Underflow,so,time to display");
	else{
    for(int i=0; i <=*top;i++)
        printf("%d \n", st[i]);
	}
}
int main()
{   int n,r,a[3],top=-1,item,del_value;
    while(1)
    {
        printf("Enter the option you want to choose \n 1. To insert a element \n 2. To remove an element \n 3. To display the elements \n 4. Exit\n ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:push(a,&top);
                    break;
            case 2:del_value=pop(a,&top);
                    printf("The deleted item is %d\n",del_value);
                    break;
            case 3: display(a,&top);
                    break;
            default:exit(0);
                    break;
        }
    }
}
