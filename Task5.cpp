#include <iostream>
#include <string>
using namespace std;

// check word is pallindrome or not.

int main()
{
   string word = "pop";
   
   int size = word.length(); 
   bool flag = true; 
   
   for(int i = 0, j=size-1 ; i < size/2 ; i++, j--)
   {
       if(word[i] != word[j]) 
       {
           flag = false;
           break;
       }
   }
   
   if(flag ==  true){
       cout<< "Palindrome";
   }
   else{
       cout<< "Not Palindrome";
   }
   
   return 0;
}
