// Implement of Doubly Linked List in C++
#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
  int Data;
  Node* Next;
  Node* Prev;
};

 class DoublyLinkedList {
      // by default private
    Node *Head;
    Node *Tail;
    int size;

  public:
  DoublyLinkedList() {
    Head = NULL;
    Tail = NULL;
    size = 0;
  }

  void insertFirst() {
    cout << "Enter the data to insert at first: ";
    int element;
    cin >> element;

    if(Head == NULL) {
        Node *newNode = new Node();
        newNode->Data = element;
        newNode->Next = NULL;
        newNode->Prev = NULL;
        Head = Tail = newNode;
    }else {
          Node *newNode = new Node();
            newNode->Data = element;
            newNode->Next = Head;
            newNode->Prev = NULL;
            Head->Prev = newNode;
            Head = newNode;
       }
    }

    void insertLast() {
        cout << "Enter the data to insert at last: ";
        int element;
        cin >> element;

        if(Head == NULL) {
            Node *newNode = new Node();
            newNode->Data = element;
            newNode->Next = NULL;
            newNode->Prev = NULL;
            Head = Tail = newNode;
        }else {
              Node *newNode = new Node();
                newNode->Data = element;
                newNode->Next = NULL;
                newNode->Prev = Tail;
                Tail->Next = newNode;
                Tail = newNode;
           }
    }


};