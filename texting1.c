#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* createNode(struct node* head)
{
    head=(struct node*)malloc(sizeof(struct node));
    head->next=NULL;
    return head;
}
struct node* push(struct node* head,int data)
{
    struct node *ptr=createNode(ptr);
    ptr->data=data;
    ptr->next=head;
    head=ptr;
    printf("hii\n");
    return head;
}
void traversal(struct node* head)
{
    struct node *temp=head;
    while(temp->next!=NULL)
    {
        printf("expression: %d\n",temp->data);
        temp=temp->next;
    }

}
struct node* pop(struct node* head)
{
    struct node* ptr=head->next;
    free(head);
    return ptr;

}
int main()
{
 
    struct node* head;
    head=push(head,5);
    head=push(head,4);
    head=push(head,5);
    head=push(head,56);
    head=push(head,57);
    head=push(head,89);
    traversal(head);
    head=pop(head);
    head=pop(head);
    head=pop(head);
    traversal(head);
     
 return 0;
    }