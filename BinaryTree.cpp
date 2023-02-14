#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

    // Constructor 
    node(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root){

    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;

    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter data to insert in left "<<endl;
    root -> left = buildTree(root->left);
    cout<<"Enter data to insert in right "<<endl;
    root -> right = buildTree(root->right);
    return root;
    
};

int main(){

    node* root = NULL;

    // creating a Tree
    root = buildTree(root);

    cout<<"HELL YEAH"<<endl;

    return 0;
}