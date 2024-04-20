#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Linkedlist {
    Node* head;

public:
    Linkedlist() {
        head = NULL;
    }

    void insertNode(int);
    void printAll();
};

void Linkedlist::insertNode(int data) {
    Node* newNode = new Node(data);

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void Linkedlist::printAll() {
    if (head == NULL) {
        cout << "list is empty";
    }

    Node* temp = head;
    while (temp) {
        cout << temp->data << endl;

        temp = temp->next;
    }
}

int main() {


    Linkedlist list;

    list.insertNode(1);
    list.insertNode(2);
    list.insertNode(3);
    list.insertNode(4);

    list.printAll();

    return 0;
}