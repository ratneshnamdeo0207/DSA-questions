#include<iostream>
using namespace std;

class Stack{
    public:
    int top;
    int *arr;
    int size;
    Stack(int size)
    {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int d)
    {
        if(top < size-1)
        {
            arr[++top] = d;
            cout<<"insertion succeesful"<<endl;         
        }
        else{
            cout<<"Stack is full"<<endl;
        }
    }
    void pop(){
        if(top ==-1)
        {
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout<<"Popped element: "<<arr[top--]<<endl;
        }
    }
    int peek(){
        if(top == -1)
        {
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty()
    {
        if(top == -1)
        return true;
        else
        return false;
    }
};
int main()
{
    Stack st(5);
    st.push(2);
    st.push(2);
    st.push(2);
    st.push(2);
    st.push(2);
    st.push(2);
    cout<<"peek: "<<st.peek()<<endl;
    st.pop();
    cout<<"is empty:"<<st.isEmpty()<<endl;
    return 0;
}
