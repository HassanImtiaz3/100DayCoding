#include <iostream>
using namespace std;

//Task1: Move all the zeros of any array in the end with maintaining the order.



int main(){
    

    cout<<"hello world \n";

    int arr[5] = {1, 3, 12, 0, 12};
    
    int size= sizeof(arr) / sizeof(arr[0]);
    
    cout<<"Original Array: ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    
    int nonZero=0;
    for (int i = 0; i < size ; i++)
    {
        if(arr[i]!=0)
       {
           arr[nonZero++]=arr[i];
       }
    }
    
    while(nonZero < size){
        arr[nonZero++]=0;
    }
    
    cout<<"Modified Array: ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    


    return 0;
}