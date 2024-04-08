#include <iostream>
using namespace std;

//Task2: Reverse the Linked List.

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


void reverseLinkedList(Node*& head)
{
  
  Node* prev =nullptr;
  Node* next = nullptr;
  Node* current = head;
  
  while(current!=nullptr)
  {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
  }
  
  head = prev;
  
}



int main()
{
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);


    cout<<"Original List: "; 
    printList(head);
    
    reverseLinkedList(head);
    
    cout<<"Reverse List: "; 
    printList(head);

    

    // Free memory
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }


    return 0;
}