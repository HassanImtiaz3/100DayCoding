#include <iostream>
#include <stack>
#include <stdexcept>
using namespace std;

// Merge the linked list.

struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {};
};

Node* mergeLists(Node* list1, Node* list2)
{
    
    if(list1 == nullptr)
    {
        return list2;
    }
    
    if(list2 == nullptr)
    {
        return list1;
    }
    
    Node* temp = list1;
    
    while(temp->next!=nullptr)
    {
        temp = temp->next;
    }
    
    temp->next = list2;
    
    return list1;
}



void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}



int main() {
  
   // Creating two linked lists
    Node* list1 = new Node(1);
    list1->next = new Node(2);
    list1->next->next = new Node(3);

    Node* list2 = new Node(4);
    list2->next = new Node(5);
    list2->next->next = new Node(6);

    // Merging the two linked lists
    Node* mergedList = mergeLists(list1, list2);

    printList(mergedList);


    return 0;
}
