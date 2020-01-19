#include "c_LinkedList.h"
#include <iostream>
using namespace std;

circularList::circularList()
{
    backPtr=NULL;
}

circularList::~circularList(){}

bool circularList::isEmpty()
{
    return backPtr==NULL;
}

int circularList::head()
{
    if(!isEmpty())
    {
        return backPtr->next->info;
    }
    else
    {
    	cout << "The List is Empty"<< endl;
        return 0;
	}
	
}

int circularList::tail()
{
    if(!isEmpty())
    {
        return backPtr->info;
    }
	 else
    {
    	std::cout << "The List is Empty"<< std:: endl;
        return 0;
	}    
}

void circularList::addToTail(int ele)
{
    Node* newNode=new Node;
    newNode->info=ele;
    if(isEmpty())
    {
        newNode->next=newNode;
        backPtr=newNode;
    }
    else
    {
        newNode->next=backPtr->next;
        backPtr->next=newNode;
        backPtr=newNode;
    }
}

void circularList::removeFromHead()
{
    Node* nodeToDelete=new Node;
    nodeToDelete=backPtr->next;
    if(isEmpty())
    {
        cout<<"No node to remove"<<endl;
    }
    else
    {
        if(nodeToDelete==backPtr)  // if queue has only one node
        {
            backPtr=NULL;
        }
        else
        {
            backPtr->next=nodeToDelete->next;
        }
        cout<<nodeToDelete->info<<endl;
        delete nodeToDelete;
    }
}

