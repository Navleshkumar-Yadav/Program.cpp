#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(){
        // cout<<"I am inside the default constructor: ";
        this->next = NULL;
    }
    Node(int data){
         
        this->data = data;
        this->next = NULL;
    }
    
};



void printLL(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp= temp->next;
        
    }
    cout<<endl;
}


int getlength(Node* head){
   
    Node* temp = head;
      int count =0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
int main(){
    // creation of Node statically
    Node a;
    
    
    // creation of Node dynamically;
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    first->next = second;
    second->next = third;
    
    Node* head = first;
    cout<<"Printing the linked list: ";
    printLL(head);
    cout<<"Printing the length of linked list: "<<getlength(head);
    
    
    
}
