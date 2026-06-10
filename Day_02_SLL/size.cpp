#include<iostream>
using namespace std;

class Node{
public:

    int data;
        Node* next; 

        Node(int x){ 
        
        data = x; 
        next = NULL; 
        }

};

class Stack{
    Node* top;
    

public:
     
    Stack(){
        top = NULL;
    }

    void insert_front(int x){
        Node* temp = new Node(x);
        temp->next = top;
        top = temp;

    }


    void delete_front(){
        Node* temp = top;
        top = top->next;
        delete temp;
    }


    void length(){
     if(top == NULL){
        cout<<"NO element is present \n";
     }else{
        int cnt =0;
        Node* temp = top;
        while(top!=NULL){
            cnt++;
            temp = temp->next;
        }

        cout<<cnt<<endl;
     }


    }


    int peek(){
        return top->data;
    }


    void print(){
        Node* temp = top;
        if(top == NULL){
            cout<<"No element is present \n";
        }else{
            Node* temp = top;
            while(temp != NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
            }

            cout<<endl;
        }
    }







    

    

    
 

};
int main(){
   
    
 Stack s;

 s.insert_front(1);
 s.insert_front(2);
 s.insert_front(3);
 s.insert_front(4);
 s.insert_front(5);
//  s.length();
 s.print();

 s.delete_front();
//  s.length();
 s.print();




     


}