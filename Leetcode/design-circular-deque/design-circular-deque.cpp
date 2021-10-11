class MyCircularDeque {
public:
    deque<int>deq;
    int count;
    MyCircularDeque(int k) {
        count = k;
    }
    bool insertFront(int value){
        if(deq.size()>=count)return false;
        else deq.push_front(value);
        return true;
    }
    bool insertLast(int value) {
        if(deq.size()>=count)return false;
        else deq.push_back(value);
        return true;
    }
    bool deleteFront() {
       if(deq.size() == 0)return false;
       else deq.pop_front();
       return true; 
    }
    bool deleteLast() {
        if(deq.size() == 0)return false;
        else deq.pop_back();
        return true;
    }
    int getFront() {
        if(deq.empty())return -1;
        return deq.front();
    }
    int getRear() {
        if(deq.empty())return -1;
        return deq.back();
    }
    bool isEmpty() {
        if(deq.size() == 0)return true;
        return false;
    }
    bool isFull() {
        if(deq.size()>=count)return true;
        return false;
    }
};