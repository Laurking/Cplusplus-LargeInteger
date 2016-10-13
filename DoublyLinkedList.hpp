//
//  DoublyLinkedList.hpp
//  Project4
//
//  Created by W. Laurent Sanou on 5/26/16.
//  Copyright © 2016 W. Laurent Sanou. All rights reserved.
//


#include <iostream>
using namespace std;

#ifndef DoublyLinkedList_hpp

#define DoublyLinkedList_hpp

#include <stdio.h>


template <class Type>
struct nodeType
{
    Type info;
    nodeType <Type> *next;
    nodeType <Type> *back;
};

template <class Type>
class DoublyLinkedList
{
    friend ostream& operator << (ostream& out, const DoublyLinkedList<Type> & other);
    friend istream& operator >> (istream& in, DoublyLinkedList<Type> &other);
    
public:
    //Constructor
    DoublyLinkedList();
    
    //Destructor
    ~DoublyLinkedList();
    
    //Copy constructor
    DoublyLinkedList(const DoublyLinkedList<Type>& other);
    
    //Assignment operator
    DoublyLinkedList operator= (const DoublyLinkedList<Type> & other);
    
    //Doubly Linked initializer
    void initializeList();
    
    //Method to check doubly linked list is empty
    bool isEmpty() ;
    
    //Get the lengh of doubly linked list
    int getLength();
    
    //Sets the size of doubly linked list
    void setLength(int n);
    
    //
    void insertItemFront(const Type&insertItem);
    void insertItemBack(const Type& insertItem);
    bool isNextNull();
    void setIteratorFirst();
    void setIteratorLast();
    void setIteratorNext();
    void setIteratorBack();
    bool didIteratorFinish();
    Type getIteratorInfo();
    void printForward();
    void printForwardCallRec();
    void printForwardRec(nodeType<Type> *p);
    void printBackward();
    void printBackwardCallRec();
    void printBackwardRec(nodeType<Type> *p);
    void deleteLast();
    void deleteFirst();
    int getNumOfItem(Type item);
    void replace_item(Type olditem, Type newitem);
    void call_replace_itemR(Type olditem, Type newitem);
    void replace_itemR(Type olditem, Type newitem, nodeType<Type> *&current);
    
    
protected:
    int length, max;
    nodeType <Type> *first; // pointer to the first node
    nodeType <Type> *last; // pointer to the last node
    nodeType <Type> *iterator;
    
};

#endif /* DoublyLinkedList_hpp */
