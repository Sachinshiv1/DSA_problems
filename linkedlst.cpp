#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // Constructor 
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
/*
    // Destructor
    ~Node(){
        int value = this -> data;
        //memory free
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
*/
};

void InsertAtHead(Node* &head,int d){
    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;

}

void InsertAtEnd(Node* &head,int d){
    Node* temp = head;
    Node* temp2 = new Node(d);
    while(temp -> next != NULL){
        temp = temp ->next;
    }
    temp ->next = temp2;
}

void InsertAtPosition(Node* &head,int pos,int data){
    Node* temp = head;
    Node* tempnode = new Node(data);
    Node* temp2;
    int i = 1;
    if(pos==1){
        InsertAtHead(head,data);
        return;
    }
    else{
        while( i<(pos-1) && (temp -> next!=NULL)){
            temp = temp -> next;
            temp2 = temp ->next;
            i++;
        }
        temp -> next = tempnode;
        tempnode -> next = temp2;
    }

}
void PrintLL(Node* &head){
    Node* temp = head;  // creating a temp Node

    while(temp != NULL){
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void DeleteAtHead(Node* &head){
    Node* temp = head;
    head = temp -> next;
    // memory free start node
    delete temp;
}

void DeleteAtEnd(Node* &head){
    Node* temp = head;
    Node* temp2;
    while( (temp -> next)!=NULL){
        temp2 = temp;
        temp = temp -> next;
    }
    temp2 -> next = NULL;
    delete temp;
}

void DeleteAtPosition(Node* &head,int pos){
    Node* temp = head;
    Node* temp1;
    if(pos==1){
        DeleteAtHead(head);
    }
    else{
        while(pos>0){
            temp1 = temp;
            temp = temp -> next;
            pos--;
        }
        temp1 = temp->next;
        temp -> next= NULL;
        delete temp;
    }
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;

    // cout<< node1 -> data <<endl;
    // cout<< node1 -> next <<endl;
    InsertAtHead(head,5);
    InsertAtHead(head,2);
    
    InsertAtEnd(head,30);
    InsertAtEnd(head,50);

    InsertAtPosition(head,1,22);

    PrintLL(head);

    DeleteAtHead(head);
    cout<<"Linked List Now is: "<<endl;
    PrintLL(head);

    DeleteAtEnd(head);
    cout<<"Linked List Now is: "<<endl;
    PrintLL(head);

    DeleteAtPosition(head,2);
    cout<<"Linked List Now after deletion at pos 2 is: "<<endl;
    PrintLL(head);

    return 0;
}