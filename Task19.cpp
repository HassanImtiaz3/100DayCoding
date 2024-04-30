#include <iostream>
#include <stack>
#include <stdexcept>
#include<unordered_map>
using namespace std;

// Hashmap and its functions.

int main() {
    
   unordered_map<string,int> hashMap;
   
   
   hashMap["apple"] = 3;
   hashMap["mango"] = 2;
   hashMap["banana"] = 4;

   // access and modify the element in hash table.
   
   cout<< hashMap["mango"] << " \n" ;
   
   hashMap["mango"] = 12;
   
   cout<< hashMap["mango"] << " \n" ;

   // check if key exist in a hash table
   
   if(hashMap.find("mangso") != hashMap.end())
   {
       cout<< "mango is in hash table \n";
   }
   else
   {
        cout<< "mango is not in hash table \n";
   }
   
   
   // iterate over key value pair in hash table
   
   for (const auto& pair : hashMap)
   {
       cout<< pair.first << " " << pair.second << endl;
   }
   
   
   // remove element from hash table
   
    hashMap.erase("mango");
    
    // Check the size of the HashMap
    cout << "Size of HashMap: " << hashMap.size() << std::endl;

  
    return 0;
}
