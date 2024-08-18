#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->next = NULL;
        
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};


// Print linkedList
void printll(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}

// count length of linked lIst

int  getLength(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
        
    }
    return count;
    
}


// insert at head of linked lIST


void insertAtHead(Node* &head , int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    
   
}


// insertAtTail


void insertAtTail(Node* &head , Node* &tail,  int data){
    // Node* newNode = new Node(data);
      Node* newNode = new Node(data);
    if(head==NULL){
     
         head = newNode;
         tail = newNode;
        
    }
    else{
        Node* newNode = new Node(data);
        tail->next = newNode;
        newNode = tail;
    }

}





int main(){
    Node* A = new Node(10);
    Node* B = new Node(20);
    Node* C = new Node(30);
    Node* D = new Node(40);
    Node* E = new Node(50);
    A->next = B;
    B->next = C;
    C->next = D;
    D->next = E;
   
    Node* head = A;
    Node* tail = E;
    cout<<"printing the linked list: ";
    printll(head);
  
    cout<<"print the length of linked list: "<<getLength(head)<<" ";
    cout<<endl;
    cout<<"Inserting the linked list At head: ";
    insertAtHead(head,80);
    
    
    printll(head);
    cout<<"inserting the linked list at tail: ";
    insertAtTail(head,tail,90);
    printll(head);

  
    
    
}




