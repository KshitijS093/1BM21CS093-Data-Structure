#include <stdio.h>
#include <stdlib.h>
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
NODE insert_end(NODE first, int item)
{
    NODE new, last;
    new = getnode();
    new->value = item;
    new->next = NULL;
    if (first == NULL)
    {
        return new;
    }
    if (first == NULL)
    {
        first->next = new;
        return first;
    }
    last = first;
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new;
    return first;
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
        printf("\n2.Insert at the end\n4.Display\n5.Delete at beginning");
        printf("\nEnter your choice :");
        scanf("%d", &c);
        switch (c)
        {
        case 2:
            printf("Enter the item to be inserted :");
            scanf("%d", &item);
            first = insert_end(first, item);
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