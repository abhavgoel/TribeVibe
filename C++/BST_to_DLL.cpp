#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node* left;
    node* right;
};

node* bst2dll(node* root){
    
    if(root == NULL){
        return root;
    }
    
    if(root->left != NULL){
        
        node* left = bst2dll(root->left);
        
        for(;left->right!=NULL;left = left->right){
            ;
        }
        
        left->right = root;
        
        root->left = left;
    }
    
    
    if(root->right != NULL){
        
        node* right = bst2dll(root->right);
        
        for(;right->left!=NULL;right = right->left){
            ;
        }
        
        right->left = root;
        
        root->right = right;
    }
    
    return root;
}

node* firstbst2dll(node* root){
    if(root == NULL){
        return root;
    }
    
    root = bst2dll(root);
    
    while(root->left != NULL){
        root = root->left;
    }
    
    return root;
}

node* newNode(int data){
    node* new_node = new node();
    new_node->data = data;
    new_node->left = new_node->right = NULL;
    return(new_node);
}

void printList(node* node)
{
    while(node!=NULL){
        cout<< node->data<<" ";
        node = node->right;
    }
}

int main(){
    node* root = newNode(10);
    root->left = newNode(12);
    root->right = newNode(15);
    root->left->left = newNode(25);
    root->left->right = newNode(30);
    root->right->left = newNode(36);
    
    node* head = firstbst2dll(root);
    
    printList(head);
    
    return 0;
}