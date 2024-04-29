#include <iostream>
#include <stack>
#include <stdexcept>
using namespace std;

// link list is circular or not

struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {};
};

bool isCircular(Node* head)
{
    if(head == nullptr)
    return false;
    
    Node* slow = head;
    Node* fast = head;
    
    while( fast!=nullptr && fast->next!=nullptr)
    {
        slow=slow->next;
        fast = fast->next->next;
        
        if(slow == fast)
        {
            return true;
        }
    }
    
    return false;
    
}


int main() {
   // Create a linked list with a cycle
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = head->next; // Creating a cycle

    if (isCircular(head))
        cout << "Linked list is circular." << endl;
    else
        cout << "Linked list is not circular." << endl;

    return 0;
}
