/*
Program: Singly Linked List Operations

Operations Included:
- Traversal
- Insertion (Beginning, Position, End)
- Deletion (Beginning, Position, End)
*/

#include <stdio.h>
#include <stdlib.h>


// Node structure
struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;


// -------- Traversal --------

void traverse()
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    struct node *temp = head;

    printf("Linked List:\n");

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}


// -------- Insert at Beginning --------

void insert_begin(int value)
{
    struct node *newnode = malloc(sizeof(struct node));

    newnode->data = value;
    newnode->next = head;

    head = newnode;

    printf("Inserted at beginning\n");
}


// -------- Insert at End --------

void insert_end(int value)
{
    struct node *newnode = malloc(sizeof(struct node));

    newnode->data = value;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
        return;
    }

    struct node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newnode;

    printf("Inserted at end\n");
}


// -------- Insert at Position --------

void insert_pos(int value, int pos)
{
    struct node *newnode = malloc(sizeof(struct node));

    newnode->data = value;

    if (pos == 1)
    {
        newnode->next = head;
        head = newnode;
        return;
    }

    struct node *temp = head;

    for (int i = 1; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Invalid position\n");
        return;
    }

    newnode->next = temp->next;
    temp->next = newnode;

    printf("Inserted at position %d\n", pos);
}


// -------- Delete from Beginning --------

void delete_begin()
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    struct node *temp = head;

    head = head->next;

    free(temp);

    printf("Deleted from beginning\n");
}


// -------- Delete from End --------

void delete_end()
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    if (head->next == NULL)
    {
        free(head);
        head = NULL;
        return;
    }

    struct node *temp = head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    free(temp->next);

    temp->next = NULL;

    printf("Deleted from end\n");
}


// -------- Delete from Position --------

void delete_pos(int pos)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    if (pos == 1)
    {
        struct node *temp = head;

        head = head->next;

        free(temp);

        return;
    }

    struct node *temp = head;

    for (int i = 1; i < pos - 1 && temp->next != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp->next == NULL)
    {
        printf("Invalid position\n");
        return;
    }

    struct node *del = temp->next;

    temp->next = del->next;

    free(del);

    printf("Deleted from position %d\n", pos);
}



// -------- Main --------

int main()
{

    int choice, value, pos;

    while (1)
    {

        printf("\nMENU\n");

        printf("1. Traverse\n");
        printf("2. Insert Beginning\n");
        printf("3. Insert End\n");
        printf("4. Insert Position\n");
        printf("5. Delete Beginning\n");
        printf("6. Delete End\n");
        printf("7. Delete Position\n");
        printf("8. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);


        switch (choice)
        {

        case 1:
            traverse();
            break;

        case 2:
            printf("Enter value: ");
            scanf("%d", &value);
            insert_begin(value);
            break;

        case 3:
            printf("Enter value: ");
            scanf("%d", &value);
            insert_end(value);
            break;

        case 4:
            printf("Enter value and position: ");
            scanf("%d %d", &value, &pos);
            insert_pos(value, pos);
            break;

        case 5:
            delete_begin();
            break;

        case 6:
            delete_end();
            break;

        case 7:
            printf("Enter position: ");
            scanf("%d", &pos);
            delete_pos(pos);
            break;

        case 8:
            exit(0);

        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}
