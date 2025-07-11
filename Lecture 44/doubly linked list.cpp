#include <iostream>

using namespace std;

class Node{
  public:
  int data;
  Node* prev;
  Node* next;
 
  //Constructor
  Node(int d){
      this->data=d;
      this->prev=NULL;
      this->next=NULL;
  }
};

//Traversing of the Linked List
void print(Node* head){
    Node* temp=head;
   
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//Length of the Linked List
int getLength(Node* head){
    Node* temp=head;
    int length=0;
   
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
}

void insertAtHead(Node* &head,Node* &tail,int d){
    
    //Empty List
    if(head==NULL){
        Node* temp=new Node(d);
        head=temp;
    }

    else{
        //New node create
        Node* temp=new Node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;    
    }
    
}

void insertAtTail(Node* &head,Node* &tail,int d){
    
    if(tail==NULL){
        Node* temp=new Node(d);
        tail=temp;
    }
    else{
        //New node create
        Node* temp=new Node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;    
    }
    
}

void insertAtPosition(Node* &head,Node* &tail,int position, int d){
   
    //Insert at the start position
    if(position==1){
        insertAtHead(head,tail,d);
        return;
    }
    Node* temp=head;
    int count=1;
   
    while(count< position-1){
        temp=temp->next;
        count++;
    }
   
    //Insert at last position
    if(temp->next==NULL){
        insertAtTail(head,tail,d);
        return;
    }
   
    //Creating a node for d
    Node* nodeToInsert=new Node(d);
    
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;
   
}

int main() {

    // Node* node1=new Node(10);

    Node* head=NULL;
    Node* tail=NULL;
   
    print(head);
    // cout<<getLength(head)<<endl;

    insertAtHead(head,tail,11);
    print(head);
    
    insertAtHead(head,tail,9);
    print(head);

    insertAtHead(head,tail,8);
    print(head);

    insertAtTail(head,tail,12);
    print(head);

    insertAtPosition(head,tail,2,100);
    print(head);

    insertAtPosition(head,tail,1,101);
    print(head);

    insertAtPosition(head,tail,7,102);
    print(head);
   
    return 0;
}