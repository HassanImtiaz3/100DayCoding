#include <iostream>
using namespace std;

//Checking Tree is BST or Not.

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


bool checkingBST( Tree* root, Tree* min = NULL, Tree* max = NULL)
{
    if(root == NULL)
    {
        return true;
    }
    
    if( min !=NULL && root->val <= min->val){
        return false;
    }
    if( max !=NULL && root->val >= max->val)
    {
        return false;
    }
   
    bool leftValid = checkingBST(root->left,min,root);
    bool rightValid = checkingBST(root->right,root,max);
    
    return leftValid and rightValid;
    
}




int main()
{
    
    Tree* root = new Tree(1);
    root->left = new Tree(2);
    root->right = new Tree(3);

    
    if(checkingBST(root,NULL,NULL))
    {
        cout<< "Valid BST"<<endl;
    }
    else
    {
        cout<< "Invalid BST"<<endl;
    }
   
  
    return 0;
}
