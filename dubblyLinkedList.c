#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* createDubblyLL(struct node* head,int data)
{
    head = (struct node *)malloc(sizeof(struct node));
    head->data=data;
    head->left=NULL;
    head->right=NULL;

}
struct node * insertATfirst(struct node *head, int data)
{   
    struct node* a=head;
    struct node *b = (struct node *)malloc(sizeof(struct node));
    a->left = b;
    b->right = a;
    b->left = NULL;
    b->data = data;
    head=b;
    return head;
}

struct node * insertAtend(struct node *head, int data)
{
    struct node* a=head;
    while (a->right != NULL)
    {
        a = a->right;
    }

    struct node *b = (struct node *)malloc(sizeof(struct node));
    a->right = b;
    b->left = a;
    b->right = NULL;
    b->data = data;
    while (b->left!=NULL)
    {
        b=b->left;
    }
    head=b;
    return head;
}

struct node* deleteAtfirst(struct node *a)
{   
    struct node *head =a;
    struct node *b = (struct node *)malloc(sizeof(struct node));
    b = head->right;
    b->left = NULL;
    return b;
}
    


struct node* deleteAtend(struct node *a)
{   
    struct node *head =a;
    struct node *b = (struct node *)malloc(sizeof(struct node));
    while (head->right != NULL)
    {
        head = head->right;
    }
    b = head->left;
    b->right = NULL;
    return b;
}

void traversal(struct node *head)
{   
    struct node* a=head;
    printf("In right side\n");
    do
    {
        printf("expression: %d\n", a->data);
        a = a->right;

    } 
     while (a->right != NULL);
    printf("expression: %d\n", a->data);
    printf("In left side\n");

    do
    {
        
        printf("expression: %d\n", a->data);
        a = a->left;
    } while (a->left != NULL);
    printf("expression: %d\n", a->data);
}
void searchInRight(struct node* head,int element)
{
    struct node* p=head;
    int i=0;
    while(p->data!=element)
    {
        p=p->right;
        i++;
    }
    printf("In right side\n");
    printf("In index %d,element %d has founded\n",i,p->data);   
}
void searchInLeft(struct node* head,int element)
{
    struct node* p=head;
    int i=0;
    while(p->right!=NULL)
    {
        p=p->right;
        
    }
    while(p->data!=element)
    {
        p=p->left;
        i++;
        
    }
    printf("In left side\n");
    printf("In index %d,element %d has founded\n",i,p->data);   
}
int main()
{
    struct node *head=createDubblyLL(head,2);
    head=insertATfirst(head,1);
    head=insertATfirst(head,0);
    head=insertAtend(head,3);
    // head=insertAtend(head,3);
    // head=insertAtend(head,4);
    // head=insertAtend(head,5);
    // head=insertAtend(head,6);
    // head=insertATfirst(head,7);
    traversal(head);
    searchInLeft(head,2);
    // searchInRight(head,6);
   

    return 0;
}