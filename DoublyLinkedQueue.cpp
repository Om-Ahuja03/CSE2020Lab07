// DoublyLinkedQueue.cpp
#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
using namespace std;

template <typename T>
class Queue
{
public:
  // Default constructor 
  Queue()
  {
    front = new NodeType;
    back = new NodeType;
    front->next = back;
    back->prev = front;
  }
  //Desctructor
  ~Queue()
  {
    clear();
    delete front;
    delete back;
  }
  // Makes the queue to the empty state.
  void clear()
  {
    while(!empty())
      dequeue();
  }
  // Checks if the queue is empty.
  bool empty() const
  {
    return (front->next == back);
  }
  // Inserts item at the end of the queue.
  void enqueue(const T& item)
  {
    NodeType* ptr = new NodeType(item);
    ptr->prev = back->prev;
    ptr->next = back;
    back->prev->next = ptr;
    back->prev = ptr;
  }
  // Removes the element at the start of the queue.
  void dequeue()
  {
    NodeType* ptr = front->next;
    front->next = ptr->next;
    ptr->next->prev = front;
    delete ptr;

  }
  // returns the front element
  const T& front_element() const
  {
    return front;
  }
  // Prints the elements of the queue.
  void print() const
  {
    NodeType* ptr = front->next;
    while (ptr != back)
    {
      cout << ptr->data << ", ";
      ptr = ptr->next;
    }       
    cout << endl;
  }
private:
  struct NodeType
  {
    T data;
    NodeType* next;
    NodeType* prev;

    NodeType(const T & d = T()): data(d), prev(nullptr), next(nullptr){}
  };
  NodeType* front; // points to the header node
  NodeType* back;  // points to the tail node
};
#endif