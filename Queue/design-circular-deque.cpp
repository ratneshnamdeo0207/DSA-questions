//https://leetcode.com/problems/design-circular-deque/
class MyCircularDeque {

    int *arr;
    int s, f, r;
public:
    MyCircularDeque(int k) {
        s = k;
        arr = new int[s];
        f = r = -1;
    }
    
    bool insertFront(int value) {
        if(isFull())
        {
            return false;
        }
        else if(f == -1)
        {
            f = r = 0;
        }
        else if(f == 0)
        {
            f = s - 1;
        }
        else{
            f--;
        }
        arr[f] = value;
        return true;
    }

    
    bool insertLast(int value) {
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
    
    bool deleteFront() {
        if(isEmpty())
        {
            return false;
        }
        else if(f == r)
        {
            f = r = -1;
        }
        else if(f == s - 1)
        {
            f = 0;
        }
        else 
        {
            f++;
        }
        return true;
    }
    
    bool deleteLast() {
        if(isEmpty())
        {
            return false;
        }
        else if(f == r)
        {
            f = r = -1;
        }
        else if(r == 0)
        {
            r = s - 1;
        }
        else 
        {
            r--;
        }
        return true;
    }
    
    int getFront() {
        if(isEmpty())
        {
            return -1;
        }
        return arr[f];
    }
    
    int getRear() {
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
        if((f == 0 && r == s - 1) || (((r + 1) % s) == f))
        {
            return true;
        }
        return false;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */
