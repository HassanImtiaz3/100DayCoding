#include <iostream>
#include <stack>
#include <stdexcept>
using namespace std;

// Binary Search Tree

struct Tree{
  
  int data;
  Tree* left;
  Tree* right;
  
  Tree(int val)
  {
    data = val;
    left = right = nullptr;
  }
  
};


void insertionBST(int data, Tree*& root)
{
    if(root == nullptr)
    {
        root = new Tree(data);
        return;  // Return after creating a new node
    }
    
    if(root->data > data)
    {
        if(root->left == nullptr)
        {
            root->left = new Tree(data);
        }
        else
        {
            insertionBST(data,root->left);
        }
    }
    else
    {
        if(root->right == nullptr)
        {
            root->right = new Tree(data);
        }
        else
        {
            insertionBST(data,root->right);
        }
    }
}


void inorder(Tree* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    
    Tree* root = nullptr;
    
    insertionBST(4,root);
    insertionBST(2,root);
    insertionBST(3,root);
    insertionBST(5,root);
    
    
    inorder(root);
  
    return 0;
}
