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

    void insert_End(int x){
       Node* newNode = new Node(x);
       if(head == NULL){
        head = tail = newNode;
       }else{
        tail->next = newNode;
        tail = newNode;
       }
    }


    void delete_end(){
        if(head == NULL){
            cout<<"LL is empty \n";
            return;
        }else{
            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            
            temp->next = NULL;
            delete tail;   // delete se variable ke andar ka data delete hota h , na ki variable ki name 
            temp = tail;  // so we can reassign 
            
        }

    }


    void print(){
     Node* temp = head;

     while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
     }

     cout<<endl;

    };

 

};
int main(){
    List ll;
    ll.insert_End(1);
    ll.insert_End(2);
    ll.insert_End(3);
    
    ll.insert_End(4);
    ll.print();
    ll.delete_end(); 
    ll.print();


}