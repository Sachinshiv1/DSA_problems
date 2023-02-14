#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};


// Function to print the contents of linked starting from the given node
void PrintList(Node* n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n = n->next;
    }
}

int main(){
    Node* Head = new Node();
    Node* Second = new Node();
    Node* Third = new Node();

    Head->data = 1;
    Head->next = Second;

    Second->data = 3;
    Second->next = Third;

    Third->data = 5;
    Third->next = NULL;

    PrintList(Head);

    cout<<"\nProgram Exit";
    return 0;
}
 