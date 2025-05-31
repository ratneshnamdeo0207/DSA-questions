//https://leetcode.com/problems/design-circular-queue/

class MyCircularQueue {

    int *arr;
    int s;
    int f,r;
public:
    MyCircularQueue(int k) {
        s = k;
        arr = new int[s];
        f = r =-1;
    }
    
    bool enQueue(int value) {
        if(isFull())
        {
            return false;
        }
        else if(f == -1)
        {
            f = r = 0;
            
        }
        else if(r == s - 1 && f != 0)
        {
            r = 0;
            
        }
        else{
            r++;
        }
        
        arr[r] = value;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty())
        {
            return false;
        }
        else if(f == r)
        {
            arr[f] = -1;
            f = r = -1;
            return true;
        }
        else if(f == s - 1)
        {
            f = 0;
        }
        else{
            f++;
        }

        return true;
    }
    
    int Front() {
        if(isEmpty())
        {
            return -1;
        }
        return arr[f];
    }
    
    int Rear() {
         if(isEmpty())
        {
            return -1;
        }
        return arr[r];
    }
    
    bool isEmpty() {
        if(f == -1)
        {
            return true;
        }
        return false;
    }
    
    bool isFull() {
        if((f == 0 && r == (s-1)) || ((r + 1) % s == f))
        {
            return true;
        }
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
