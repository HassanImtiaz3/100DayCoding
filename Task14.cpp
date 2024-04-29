#include <iostream>
#include <stack>
#include <stdexcept>
using namespace std;

// insert/ delete at nth position in linked list.

struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {};
};


void insertNode(Node*& head, int data, int n)
{
    Node* newNode = new Node(data);
    
    if(n==1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }
    
    Node* temp = head;
    
    for(int i=0; i< n-1 && temp !=nullptr ; i++)
    {
        temp = temp->next;
    }
    
    if(temp == nullptr)
    {
        return;
    }
    
    
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteNode(Node*& head, int n) {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    if (n == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < n - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    if (temp == nullptr || temp->next == nullptr) {
        cout << "Invalid position." << endl;
        return;
    }

    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
}




int main() {
    
    insertNode(head, 1, 1);
    insertNode(head, 2, 2);
    insertNode(head, 3, 3);
    insertNode(head, 4, 2);
    insertNode(head, 5, 1);
    
     // Print the list
    cout << "Linked List: ";
    printList(head);

    // Delete nodes at different positions
    deleteNode(head, 2);
    deleteNode(head, 3);
    deleteNode(head, 1);

    // Print the list after deletion
    cout << "Linked List after deletion: ";
    printList(head);

    return 0;
}
