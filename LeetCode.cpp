#include <iostream>
using namespace std;

int main(){
    
    return 0;
}

class Node{
    public:
        int data;
        Node *next;
};

void insert(Node** head_ref,int data){
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
};