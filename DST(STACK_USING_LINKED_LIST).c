#include<stdio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node *next;
};
typedef struct node *NODE;
NODE getnode()
{
    NODE temp;
    temp = (NODE)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("Memory not allocated");
        return NULL;
    }
    return temp;
}
NODE insert_beg(NODE first, int item)
{
    NODE new;
    new = getnode();
    new->value = item;
    new->next = NULL;
    if (first == NULL)
    {
        return new;
    }
    else
    {
        new->next = first;
        first = new;
        return first;
    }
}
void display(NODE first)
{
    NODE temp;
    temp = first;
    if (first == NULL)
    {
        printf("List is empty\n");
    }
    while (temp != NULL)
    {
        printf("Value stored in the node=%d\n", temp->value);
        temp = temp->next;
    }
}
NODE del_beg(NODE first)
{
    NODE temp;
    if (first == NULL)
    {
        printf("list is empty\n");
        return first;
    }
    temp = first;
    temp = temp->next;
    printf("Item deleted =%d", first->value);
    free(first);
    return temp;
}

int main()
{
    int pos, item, c;
    NODE first = NULL;
    while (1)
    {
        printf("\n1.Insert at beginning\n4.Display\n5.Delete at beginning\n6");
        printf("Enter your choice :");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("Enter the item to be inserted :");
            scanf("%d", &item);
            first = insert_beg(first, item);
            break;
        case 4:
            display(first);
            break;
        case 5:
            first = del_beg(first);
            break;
        default:
            printf("Invalid choice!!!");
            exit(0);
        }
    }
}