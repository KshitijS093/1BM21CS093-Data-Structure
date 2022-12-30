#include<stdio.h>
#include<stdlib.h>


struct node{
    int value;
    struct node* next;
};
typedef struct node * Node
struct node* first = NULL;

void display()
{
    struct node* temp;

    if (first == NULL)
        printf("\nLinked List is empty\n");

    else
        {
        temp = first;
        while (temp != NULL)
            {
            printf("Element = %d\n", temp->value);
            temp = temp->next;
            }
        }
}

Node insert_at_Front(Node first)
{
    int data;
    Node temp;
    temp = malloc(sizeof(struct node));
    printf("\nEnter number to" ," be inserted : ");
    scanf("%d", &data);
    temp->value = data;
    temp-> next =  NULL;
    if(first == NULL)
    {
        return temp;
    }
    temp->next = first;
    first = temp;
    return first;
}

Node insert_at_End(Node first)
{
    int data;
    Node new, last;
    temp = malloc(sizeof(struct node));

    printf("\nEnter number to be inserted : ");
    scanf("%d", &data);
    new->value = data;
    new->next = 0;
    if(first == NULL)
    {
        return new;
    }
    if(first->next == NULL)
    { first-> next = new;
        return new;
    }
    last = first;
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new;
    return first;
}



Node insert_at_any_Position(Node first)
{
    Node curr, new, prev = NULL;
    int pos, data, count = 1;
    new = malloc(sizeof(struct node));

    printf("\nEnter position and data :");
    scanf("%d %d", &pos, &data);

    curr = first;
    new->value = data;
    new->next = NULL;
    if(first == NULL && pos == 1)
    {
        return new;
    }
    while (count != pos && curr!=NULL) {
        prev = curr;
        curr = curr->next;
        count++;
    }
    if(count==pos)
    {
        prev-> next = new;
        prev->next = curr;
        return first
    }
    if(curr == NULl)
    {
        printf("Position Not Found \n");
        return first;
    }
    if(first!=NULL && pos == 1)
    {
        first = insert_at_Front(first,data);
        return first;
    }
}

int main()
{
    while(1){
    int choice;
        printf("1. Insert At First Position");
        printf("\n2. Insert At Last Position");
        printf("\n3. Insert At Any Position");
        printf("\n4. Display Elements");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: insert_at_Front();
                break;

        case 2: insert_at_End();
                break;

        case 3: insert_at_any_Position();
                break;

        case 4: display();
                break;

        default:exit(0);
        }
    }
    return 0;
}