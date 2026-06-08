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


    void insert_position(int x, int pos){
        if(pos<0){
            cout<<"Position Not available \n";
        }else if(pos == 0){
            insert_front(x);
            return;
        }else{
            Node* temp = head;
            for(int i=0; i<pos-1; i++){
                if(temp == NULL){
                    cout<<"Position Not Available in List \n";
                    return ;
                }
                temp = temp->next;
            }

            Node* newNode = new Node(x);
            newNode->next = temp->next;
            temp->next = newNode; 
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
    ll.insert_position(4,0);

    ll.print();


}