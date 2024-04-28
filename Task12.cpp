#include <iostream>
using namespace std;

// count the pair of a sum



int main() {
    int arr[] = {1, 5, 7, -1, 5};
    int sum = 6;
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    
    for (int i = 0; i < n - 1 ; i++) {
       for(int j = i+1 ; j < n ; j++)
       {
           if(arr[i] + arr[j] == sum)
           {
               count++;
           }
       }
    }

    cout << "Number of pairs with sum " << sum << ": " << count << endl;

    return 0;
}
