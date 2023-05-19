#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct node{
    int data;
    struct node *link;
};

void nodeCount(struct node *head)
{
    int count = 0;
    if(head == NULL)
    {
        cout<<"List doesn't exist.";
    }
    else
    {
        struct node *ptr = NULL;
        ptr = head;
        while(ptr != NULL)
        {
            count++;
            ptr = ptr->link;
        }
        cout<<"Number of nodes : "<<count;
    }
}

void dataDisplay(struct node *head)
{
    if(head == NULL)
    {
        cout<<"List doesn't exist";
    }
    else
    {
        struct node *ptr = NULL;
        ptr = head;
        cout<<"\nData in nodes is : ";
        while(ptr != NULL)
        {
            cout<<ptr->data<<"\t";
            ptr = ptr->link;
        }
    }
}

int main(){
struct node *head = (struct node *)malloc(sizeof(struct node));
head->data=1;
head->link=NULL;

struct node *current = (struct node *)malloc(sizeof(struct node));
current->data=2;
current->link=NULL;
head->link=current;

current = (struct node *)malloc(sizeof(struct node));
current->data=3;
current->link=NULL;
head->link->link=current;

nodeCount(head);
dataDisplay(head);
return 0;
}
