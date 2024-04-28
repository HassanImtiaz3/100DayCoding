#include <iostream>
using namespace std;

// find a fibonnaci series.

int fibonacci(int n)
{
    if(n<=1)
    {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}


int main() {
   
   int input=0, first = 0, second = 1;
   
   
   cout<<"Enter the Number of Term: \n";
   cin>>input;
   
   int temp=0;
   for(int i=0 ; i < input ; i++)
   {
       if(i <= 1 )
       {
           temp=i;
       }
       else
       {
            temp = first + second;
            first = second;
            second = temp;
       }
      
       cout<<temp<<" ";
   }
   
   cout << "Fibonacci Series Recursive: \n";
    for (int i = 0; i < input; ++i) {
        cout << fibonacci(i) << " ";
    }
   
    
    return 0;
}
