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

    Node *newNode = new Node();
    newNode->Data = element;

    if(Head == NULL) {
        newNode->Next = NULL;
        newNode->Prev = NULL;
        Head = Tail = newNode;
    }else {
            newNode->Next = Head;
            newNode->Prev = NULL;
            Head->Prev = newNode;
            Head = newNode;
       }
       size++;
    }

    void insertLast() {
        cout << "Enter the data to insert at last: ";
        int element;
        cin >> element;

        Node *newNode = new Node();
        newNode->Data = element;

        if(Head == NULL) {
            newNode->Next = NULL;
            newNode->Prev = NULL;
            Head = Tail = newNode;
        }else {
                newNode->Next = NULL;
                newNode->Prev = Tail;
                Tail->Next = newNode;
                Tail = newNode;
           }
         size++;
    }

    void insertAtPosition(int position) {
        if(position < 0 || position > size) {
            cout << "Invalid position!" << endl;
            return;
        } else if(position == 0) {
            insertFirst();
        } else  if(position == size) {
            insertLast();
        }else {
        cout << "Enter the data to insert at position " << position << ": ";
        int element;
        cin >> element;

        Node *newNode = new Node();
        newNode->Data = element;

        Node *temp = Head;
        for(int i = 0; i < position ; i++) {
            temp = temp->Next;
        }

        newNode->Next = temp->Next;
        newNode->Prev = temp;
        temp->Next->Prev = newNode;
        temp->Next = newNode;

        size++;
      }
    }

    void display() {
        if(Head == NULL) {
            cout << "List is empty!" << endl;
            return;
        }

        Node *temp = Head;
        cout << "Doubly Linked List: ";
        while(temp != NULL) {
            cout << temp->Data << " ";
            temp = temp->Next;
        }
        cout << endl;
    }


};