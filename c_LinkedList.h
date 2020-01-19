#ifndef c_LinkedList
#define c_LinkedList

#include <iostream>
using namespace std;

class Node
{
    public:
        int info;
        Node* next;

};

class circularList
{
    private:
        Node* backPtr; // single pointer for pointing node in circular linked list
    public:
        circularList(); // class constructor
        ~circularList(); // class destructor
        bool isEmpty(); // checks if the list is empty
        int head(); // element following tail
        int tail(); // element at tail
        void addToTail(int ele);
        void removeFromHead();
};


#endif
