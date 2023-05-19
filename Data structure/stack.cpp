#include<iostream>
using namespace std;

struct stack{
    int top;
    int size;
    int *arr;
};

int isFull(struct stack* ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(struct stack* ptr){
      if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}


void push(struct stack* ptr, int value){
    if(isFull(ptr)){
        cout<<"Stack OverFlow , cannot push the entered value in stack"<<endl;
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}

int pop(struct stack* ptr){
    if(isEmpty(ptr)){
        cout<<"Stack UnderFlow , cannot pop from the stack"<<endl;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        cout<<val;
        cout<<" Has been poped out of stack";
        return val;
    }
}

void isDisplay(struct stack* ptr){
    for(int i = 0; i < ptr->size; i++){
        cout<<"\t";
        cout<<ptr->arr[i];
    }
}

int main(){
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 7;
    s->top = -1;
    s->arr = (int *)malloc(s->size*sizeof(int));
    cout<<"WE HAVE CREATED A STACK OF SIZE 8. \n0 represents the elements that are not pushed"<<endl;
    push(s,7);
    push(s,2);
    push(s,45);
    push(s,23);
    push(s,45);
    push(s,23);
    isDisplay(s);


    cout<<"\nPress 1 for Pushing desired integer to Stack"<<endl;
    cout<<"Press 2 for Poping a number out of Stack"<<endl;
    cout<<"Press 3 to Check whether stack is Full or not"<<endl;
    cout<<"Press 4 to Check whether stack is Empty or not"<<endl;
    cout<<"Enter a choice"<<endl;


    int choice;
    cin>>choice;

    switch (choice)
    {
    case 1:
        int ver;
        cout<<"Enter a number which has to be pushed"<<endl;
        cin>>ver;
        push(s,ver);
        cout<<"Array after pushing"<<endl;
        isDisplay(s);
        break;
    
    case 2:
        pop(s);
        break;
    case 3:
        if(isFull(s)){
            cout<<"Stack Overloaded"<<endl;
        }
        else{
            cout<<"Integers can be added"<<endl;
        }
        break;
    case 4:
         if(isEmpty(s)){
            cout<<"Stack Underloaded"<<endl;
        }
        else{
            cout<<"Stack is not empty"<<endl;
        }
        break;    
    default:
        cout<<"Wrong Choice"<<endl;
    }



    return 0;
}