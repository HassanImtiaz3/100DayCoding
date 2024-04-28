#include <iostream>
using namespace std;


// Factorial of a number using recursive and iterative method.

int factorial(int num)
{
    if(num < 0)
    {
        return -1; 
    }
    if(num == 0)
    {
        return 1; 
    }
    else
    {
        return num * factorial(num - 1); // Recursive call
    }
}

int main()
{
    int num = 6;
    int fac = factorial(num);
    cout << "Factorial of " << num << " is: " << fac << endl;
    
    int temp=num;
    int res = num;
    
    
    if(num!=0)
    {
         for(int i = 0 ; i < num-1 ; i++)
    {
        temp = temp - 1;
        res= res * temp;
    }
    cout<< res;
    }
    else{
        cout<< 1;
    }
   
    
    
    
    
    
    
    return 0;
}
