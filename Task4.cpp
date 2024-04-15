#include <iostream>
using namespace std;

//find the kth last elemenr in binary tree.

struct Tree{
   
   Tree* left;
   Tree* right;
   int val;
   
   Tree(int data)
   {
       val = data;
       left=nullptr;
       right=nullptr;
   }
};


void insert(Tree* root, int data)
{
    if(data< root->val)
    {
        if(root->left== nullptr)
        {
            root->left = new Tree(data);
        }
        else
        {
            insert(root->left,data);
        }
    }
    else
    {
        if(root->right== nullptr)
        {
            root->right = new Tree(data);
        }
        else
        {
            insert(root->right,data);
        }
    }
}

void largestElement(Tree* root, int& data)
{
    if(root!=NULL)
    {
        largestElement(root->left,data);
        if(data < root->val)
        {
            data = root->val;
        }
        largestElement(root->right,data);
    }
}



int main()
{
    
    Tree* root = new Tree(1);
    insert(root,43);
    insert(root,12);
    insert(root,90);
    insert(root,52);
       
    int data=0;
    largestElement(root,data);
    
    
    cout<< data;
   
  
    return 0;
}
