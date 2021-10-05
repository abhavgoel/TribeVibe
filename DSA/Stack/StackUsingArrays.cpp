#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Stack{
    T *data;
    int capacity;
    int nextIndex;

    public:
    
    Stack(){
        data = new T[4];
        nextIndex = 0;
        capacity = 4;
    }

    int getSize(){
        return nextIndex;
    }

    bool isEmpty(){
        return nextIndex == 0;
    }

    void push(T element){
        if(nextIndex == capacity){
            int *newData;
            newData = new T[2*capacity];
            for (int i = 0; i < capacity; i++)
            {
                newData[i] = data[i];
            }
            delete [] data;
            data = newData;
            capacity *= 2;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    T pop(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }

    T top(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return 0;
        }
        return data[nextIndex-1];
    }
};

// int main(){
//     Stack<int> s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);

//     cout<<s.top()<<endl;
//     cout<<s.pop()<<endl;
//     cout<<s.pop()<<endl;
//     cout<<s.pop()<<endl;
//     cout<<s.getSize()<<endl;
//     cout<<s.isEmpty()<<endl;
// }
