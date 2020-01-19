#include "cL_Queue.h"

CL_Queue::CL_Queue()
{
    n=0;
    max=5;
}

CL_Queue::CL_Queue(int max_size)
{
    n=0;
    max=max_size;
}

CL_Queue::~CL_Queue(){}

int CL_Queue::size()
{
    return n;
}

bool CL_Queue::isEmpty()
{
    return n==0;
}

bool CL_Queue::isFull()
{
    return n==max;
}

int CL_Queue::front()
{
    if(isEmpty())
    {
    	cout<<"Oops! Queue is Empty."<<endl; 
        return 0; 
    }
    else
    {
        return cLQueue.head();
    }
}

int CL_Queue::rear()
{
    if(isEmpty())
    {
        cout<<"Oops! Queue is Full"<<endl;
        return 0;
    }
    else
    {
        return cLQueue.tail();
    }
}

void CL_Queue::enqueue(int ele)
{
    if(!isFull())
    {
        cLQueue.addToTail(ele);
        n++; 
    }
    else
    {
        cout<<"Queue overflow"<<endl;
    }    
}

void CL_Queue::dequeue()
{
    if(isEmpty())
    {
        cout<<"Oops! Queue is Empty."<<endl;
    }
    else
    {
        cLQueue.removeFromHead();
        n--;
    }
}
