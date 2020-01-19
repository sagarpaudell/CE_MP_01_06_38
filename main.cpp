#include "cL_Queue.cpp"

int main()
{
    CL_Queue test_queue;
    test_queue.dequeue();
    test_queue.enqueue(3);
    test_queue.enqueue(6);
    test_queue.enqueue(9);
    test_queue.enqueue(12);
    test_queue.enqueue(15);
    test_queue.enqueue(18);
    cout<<"front = "<<test_queue.front()<<endl;
    cout<<"rear = "<<test_queue.rear()<<endl;
    test_queue.dequeue();
    test_queue.dequeue();
    test_queue.dequeue();
    test_queue.enqueue(30);
    cout<<"front = "<<test_queue.front()<<endl;
    cout<<"rear = "<<test_queue.rear()<<endl;
}

