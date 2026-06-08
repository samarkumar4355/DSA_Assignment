#include<iostream>
using namespace std;

class Node{
public:

    int data;
        Node* next; // this stores the address to the next node

        Node(int x){ // constructor
        
        data = x; // we will store to the value to the data
        next = NULL;  // we will intialise next always with Null value
        }

};

class List{
    Node* head;
    Node* tail;

public:
     
    List(){
        head = tail = NULL;
    }

    void insert_front(int x){
       Node* newNode = new Node(x);
       if(head == NULL){
        head = tail = newNode;
       }else{
        newNode->next = head;
        head = newNode;
       }
    }

    void print(){
     Node* temp = head;

     while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
     }

    };

 

};
int main(){
    List ll;
    ll.insert_front(1);
    ll.insert_front(2);
    ll.insert_front(2);
    ll.insert_front(3);

    ll.print();


}