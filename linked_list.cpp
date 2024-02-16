#include <bits/stdc++.h>
using namespace std;


class Node {
    public:
    int data;
    Node* next;

    Node(int val) {
        data=val;
        next = NULL;
    }
};

void push_back(Node* &head, int val) {
    Node* node = new Node(val);

    if(head==NULL) {
        head =  node;
        return;
    }

    Node* temp = head; 

    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = node;
}

void insert(Node* &head, int val) {
    Node* node = new Node(val);
    node->next = head;
    head=node;
}

bool search(Node* head, int key) {
    Node* temp = head;

    while(temp!=NULL) {
        if(temp->data==key) {
            return true;
        }
        temp= temp->next;
    }
    return false;
}

void display(Node* head) {
    Node* temp=head;

    while(temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;

    push_back(head,1);
    push_back(head,2);
    push_back(head,3);
    insert(head,4);

    display(head);

    cout << search(head, 5) << endl;

    return 0;
} 