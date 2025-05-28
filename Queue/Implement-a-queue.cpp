//https://www.naukri.com/code360/problems/queue-using-array-or-singly-linked-list_2099908

#include <bits/stdc++.h> 
class Queue{
  
    int* arr;
    int size;
    int qfront;
    int rear;

public:
    Queue() {
        // Implement the Constructor
        size = 10000;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(qfront == rear)
        {
            return true;
        }
        return false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(rear == size)
        {
            cout<<"Queue is full!!";
        }
        else{
            arr[rear++] = data;
        }
    }

    int dequeue() {
          int ans = -1;
        // Implement the dequeue() function
        if(isEmpty())
        {
            return ans;
        }
        else{
             ans = arr[qfront];
            qfront++;
            if(qfront == rear)
            {
                qfront = 0;
                rear = 0;
            }
            
        }
       return ans; 
    }

    int front() {
        // Implement the front() function
        if(isEmpty())
        {
            return -1;
        }
        return arr[qfront];
    }
};
