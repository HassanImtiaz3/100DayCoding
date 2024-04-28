#include <iostream>
#include <stack>
using namespace std;

// implement queue using stack


class Queue {
private:
    stack<int> s1, s2;
public:

    void enQueue(int x)
    {
        s1.push(x);
    }
    
    
    int deQueue()
    {
        
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        if(s2.empty())
        {
            return -1;
        }
        int front = s2.top();
        s2.pop();
        return front;
    }
 
};

int main() {
    
    Queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);

    cout << "Dequeued element: " << q.deQueue() << endl;
    cout << "Dequeued element: " << q.deQueue() << endl;
    
    q.enQueue(4);

    cout << "Dequeued element: " << q.deQueue() << endl;
    cout << "Dequeued element: " << q.deQueue() << endl;

    return 0;
}
