#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node *head=NULL;
void insert(int value){
    struct node *newNode = (struct node *)malloc(sizeof(struct node*));
    struct node *temp = head;
    newNode->data = value;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
    }else{
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }

}

void insertAtBeg(int value){
    struct node *newNode = (struct node *)malloc(sizeof(struct node*));
    newNode->data = value;
    newNode->next = head;
    head = newNode;

}

void print(){
    struct node *temp = head;
    while(temp){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

int main(){
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insertAtBeg(0);
    print();

    return 0;
}