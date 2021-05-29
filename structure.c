#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head;

void beginsert();
void lastnsert();
void randominsert();
void begindelete();
void randomdelete();
void lastdelete();
void search();
void show();
void exit(int);


int main()
{
    int choice = 0;
    while (choice != 9)
    {
        printf("\n\n****************MAIN MENU***************\n");
        printf("\nChoose one option from the following list....:");
        printf("\n===============================================\n");
        printf("\n1.Insert in the beginning\n3.Insert at the end\n3.Insert at any random position\n4.Delete from the beginning\n5.Delete from the end\n6.Delete node after a specified location\n7.Search for an element\n8.Show\n9.Exit\n");
        printf("enter yor choice:");
        scanf("%d",&choice);
    }
    switch (choice)
    {
    case 1:
        beginsert();
        break;
    case 2:
        lastnsert();
        break;
    case 3:
        randominsert();
        break;
    case 4:
        begindelete();
        break;
    case 5:
        lastdelete();
        break;
    case 6:
        randomdelete();
        break;
    case 7:
        search();
        break;
    case 8:
        show();
        break;
    case 9:
        exit(0);
        break;
    
    default:
    printf("Please enter a valid option");
        break;
    }
    
    return 0;
}

void beginsert()
{
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));
    printf("\nEnter a value:");
    scanf("%d",&item);
    ptr->data = item;
    ptr->next = head;
    head = ptr;
    printf("\nNode inserted");
}
void lastnsert()
{
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));
    printf("\nEnter a vlalue:");
    scanf("%d",&item);
    ptr->data = item;
    if (head == NULL)
    {
        ptr -> next = NULL;
        head = ptr;
        printf("\nNode inserted");
    }
    else
    {
        temp = head;
        while (temp -> next != NULL)
        {
            temp = temp->next;
        }
        temp->next = ptr;
        ptr->next = NULL;
        printf("\nNode inserted");
        
    }
    free(temp);
    
    
}
void randominsert()
{
    struct node *ptr, *temp;
    int item,i,loc;
    ptr = (struct node *)malloc(sizeof(struct node *));
    printf("\nEnter a vlalue:");
    scanf("%d",&item);
    ptr->data = item;
    printf("Enter the location you want to insert:");
    scanf("%d",&loc);
        temp = head;
        for(i = 0; i < loc; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                printf("\ncan't insert");
                return;
            }
            
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("\nNode inserted");
        
    free(temp);

}