//
//  slist.hpp
//  Created by Julian Rincon on 2020-05-05.
//

#ifndef slist_hpp
#define slist_hpp

#include <cstdlib>
#include <iostream>


template <typename T>
class List {
    struct Node {
        T data;
        Node *next;
    };
    
    Node *head;
    unsigned count;
    
public:
    List();
    ~List();
    
    bool empty() const;    // checks if container is empty
    unsigned size() const; // returns number of elements
    void clear();          // removes all content in List
    void display() const;  // prints List content to cout

    T front() const;         // access first element
    void push_front(T item); // insert element at beginning
    void pop_front();        // delete first element

    /* ************************************** */
    T back() const;
    int range_counting(T begin, T end) const;
    /* ************************************** */
};


#include "slist.cpp"

#endif /* slist_hpp */
