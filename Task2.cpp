#include <iostream>
using namespace std;

//Task2: Find the middle of a linked list.

struct Node {
    int data;
    Node* next;
    Node(int value)
    {
        data=value;
        next=nullptr;
    }
};


void printList(Node* head)
{
    while(head!=nullptr)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}


Node* middleLinkedList(Node* head)
{
    if(head == nullptr || head->next==nullptr)
    {
        return head;
    }
    
    Node* slow = head;
    Node* fast = head->next;
    
    while(fast!=nullptr && fast->next!=nullptr)
    {
        slow=slow->next;
        fast = fast->next->next;
    }
    
    return slow;
}


int main()
{
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(4);


    cout<<"Original List: "; 
    printList(head);
    
    Node* middle = middleLinkedList(head);
    
    
    if(middle!=nullptr)
    { 
        cout<<"Middle value: " << middle->data << endl;
    }
    else
    {
        cout<<"List is empty \n";
    }

    // Free memory
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }


    return 0;
}