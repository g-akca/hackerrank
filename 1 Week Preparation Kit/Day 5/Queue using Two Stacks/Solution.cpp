#include <cmath>
#include <cstdio>
#include <iostream>
#include <stack>
using namespace std;

class Queue {
    private:
        stack<int> input;
        stack<int> output;
    public:
        void enqueue(int n);
        int dequeue();
        void print();
};

void Queue::enqueue(int n) {
    input.push(n);
}

int Queue::dequeue() {
    if (output.empty()) {
        while (!input.empty()) {
            output.push(input.top());
            input.pop();
        }
    }
    
    int head = output.top();
    output.pop();
    return head;
}

void Queue::print() {
    if (output.empty()) {
        while (!input.empty()) {
            output.push(input.top());
            input.pop();
        }
    }
    
    cout << output.top() << endl;
}

int main() {
    int queries;
    cin >> queries;
    
    int type;
    int value;
    Queue queue;
    
    for (int i = 0; i < queries; i++) {
        cin >> type;
        if (type == 1) {
            cin >> value;
            queue.enqueue(value);
        }
        else if (type == 2) {
            queue.dequeue();
        }
        else {
            queue.print();
        }
    }
    
    return 0;
}
