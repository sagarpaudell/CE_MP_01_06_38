#ifndef cL_Queue
#define cL_Queue

#include "c_LinkedList.cpp"

class CL_Queue
{
    private:
        circularList cLQueue;  // circulary linked list of elements of queue
        int n;   // number of elements
        int max;

    public:
         CL_Queue();
         CL_Queue(int max_size);  // class constructor
        ~CL_Queue();  // class destructor
        int size();  // number of items in queue
        bool isEmpty(); // checks if the queue is empty
        bool isFull();  // checks if the queue is full
        int front(); // gives front element of queue
        int rear();  // gives rear element of queue
        void enqueue(int ele); // adds element at rear end of queue
        void dequeue();  // remove element from front end of queue and displays the element
};

#endif
