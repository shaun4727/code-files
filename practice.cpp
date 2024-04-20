#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node() {
        this->data = 0;
        this->next = NULL;
    }
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

    void InsertNode(int);
    void PrintList();
    Node* MidPointFind();
    void DeleteNode(int);
};

Node* Linkedlist::MidPointFind() {
    Node* slow = head, * fast = head->next;

    while (slow && fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    if (fast) {
        return slow->next;
    }
    return slow;
}

void Linkedlist::InsertNode(int data) {

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

void Linkedlist::PrintList() {
    Node* temp = head;
    if (temp == NULL) {
        cout << "list is empty";
    }
    while (temp) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

void Linkedlist::DeleteNode(int k) {
    Node* forw = head, * back = head;

    while (k--) {
        forw = forw->next;
    }

    while (forw->next) {
        forw = forw->next;
        back = back->next;
    }
    // cout << back->data;
    back->next = back->next->next;
}

int main() {
    Linkedlist list;
    list.InsertNode(1);
    list.InsertNode(2);
    list.InsertNode(3);
    list.InsertNode(4);
    list.InsertNode(5);
    list.InsertNode(6);

    // list.PrintList();

    // cout << list.MidPointFind()->data;

    list.DeleteNode(6);
    list.PrintList();
    return 0;
}