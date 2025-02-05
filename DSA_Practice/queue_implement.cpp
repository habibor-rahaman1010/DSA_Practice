#include <bits/stdc++.h>
using namespace std;

class Queue{
public:
    int *arr;
    int qSize;
    int qFront;
    int qRear;
    int capacity;

    Queue(int length){
        arr = new int[length];
        qSize = 0;
        qFront = 0;
        qRear = -1;
        capacity = length;
    }

    ~Queue(){
        delete[] arr;
    }

    void enqueue(int item){
        if(qSize == capacity){
             cout << "Queue is full!" << endl;
             return;
        }
        qRear = (qRear + 1) % capacity;
        arr[qRear] = item;
        qSize++;
    }

    void dequeue(){
        if(qSize == 0){
            cout << "Queue is empty!" << endl;
            return;
        }
        qFront = (qFront + 1) % capacity;
        qSize--;
    }

    int getFront() {
        if (qSize == 0) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[qFront];
    }

    bool isEmpty() {
        if(qSize == 0){
            return true;
        }
        else{
            return false;
        }
    }

    int getSize() {
        return qSize;
    }
};


int main(){
    Queue que(10);

    que.enqueue(12);
    que.enqueue(22);
    que.enqueue(15);
    que.enqueue(18);
    que.enqueue(20);
    que.enqueue(14);

    while (!que.isEmpty()) {
        cout << que.getFront() << " ";
        que.dequeue();
    }
    cout << endl;

return 0;
}
