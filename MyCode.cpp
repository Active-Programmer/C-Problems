using namespace std;
#include<iostream>

class Stack{

private:
    int top;
    int arr[5];
public:
    Stack()
    {
        top = -1;
        for(int i=0; i<5; i++){
            arr[i] = 0;
        }
    }

    bool isEmpty()
    {
        if(top==-1)
            return true;
        else
            return false;
    }

    bool isFull()
    {
        if(top==5)
            return true;
        else
            return false;
    }

    void push(int data)
    {
        if(top==4)
        {
            cout << "Overflow Condition! as the Stack is Full.\n";
        }
        else{
            top = top + 1;
            arr[top] = data;
        }
    }

    void pop()
    {
        if(top == -1)
        {
            cout << "Underflow Condition! as the Stack in Empty.\n";
        }
        else{

        arr[top] = 0;
        top = top - 1;
        }
    }

    int stack_length()
    {
        cout << "Stack length is " << top+1 << endl;
        return top;
    }

    void peek()
    {
        cout << "The peek value in Stack is " << arr[top] << endl;
    }

    void show()
    {
        for(int i=0; i<top+1; i++)
        {
            cout << arr[i] << endl;
        }
    }



};
int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.pop();
    st.stack_length();
    st.show();
    st.peek();
    st.pop();

    return 0;
}
