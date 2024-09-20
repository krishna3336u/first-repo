#include<iostream>
using namespace std;
#include<stack>
// stack<int> s;

class node{
    public:
    int data;
    node *next;
    
    node(int d){
        this->data = d;
        this->next = NULL;
    }
};

void insertEnd(node* &tail,int d){
    node *newNode = new node(d);
    tail->next = newNode;
    tail = newNode;
}

void print(node*head){
    node *temp = head;
    while (temp != NULL){
        cout << temp->data << endl;
        temp = temp->next;
    }
}

void reverse(node*&head){

    node *prev = NULL;
    node *curr = head;
    while(curr!=NULL){
        node *forward = curr->next;
        curr->next = prev;
        prev=curr;
        curr = forward;
    }  
    head = prev;
    // print(head);
}




int main(){
    node *node1 = new node(2);
    node *head = node1;
    node *tail = node1;
    insertEnd(tail, 3);
    insertEnd(tail, 4);
    insertEnd(tail, 5);
    cout << "Original List:" << endl;
    print(head);

    reverse(head);

    cout << "Reversed List:" << endl;
    print(head);

    return 0;
}