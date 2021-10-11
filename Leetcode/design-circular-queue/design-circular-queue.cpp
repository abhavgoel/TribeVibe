class MyCircularQueue {
public:
    vector<int> queue;
    int front = -1;
    int back = 0;
    int size = 0;
    int l;
    MyCircularQueue(int k) {
        l = k;
        queue.resize(k);
        fill(queue.begin(), queue.end(), INT_MAX);
    }

    bool enQueue(int value) {
        if(size == l) return false;
        if(front == -1 && back == 0){
            queue[back] = value;
            front++;
            size++;
            return true;
        }
        back = back + 1;
        queue[(back)%l] = value;
        size++;
        return true;
    }

    bool deQueue() {
        if(size == 0) return false;
        //queue[front%l] = INT_MAX;
        front++;
        size--;
        return true;
    }

    int Front() {
        if(size == 0) return -1;
        return queue[front%l];
    }

    int Rear() {
        if(size == 0) return -1;
        return queue[back%l];
    }

    bool isEmpty() {
        return (size == 0);
    }

    bool isFull() {
        return (size == l);
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