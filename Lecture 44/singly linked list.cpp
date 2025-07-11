#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
   
    //Constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }    
   
    //Destructor
    ~Node(){
        int value=this->data;
        //Memory free
        if(this->next !=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for node with data"<<value<<endl;
    }
};

void insertAtHead(Node* &head,int d){
   
    //New node create
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail,int d){
   
    //New node create
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}

void insertAtPosition(Node* &head,Node* &tail,int position, int d){
   
    //Insert at the start position
    if(position==1){
        insertAtHead(head,d);
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
        insertAtTail(tail,d);
        return;
    }
   
    //Creating a node for d
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
   
}

void print(Node* &head){
    Node* temp=head;
   
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void deleteNode(int position,Node* &head){
   
    //Deleting first or start node
    if(position ==1){
        Node* temp=head;
        head=head->next;
        //Memory free start node
        temp->next=NULL;
        delete temp;
    }
    else{
        //Deleting any middle node or last node
        Node* current=head;
        Node* prev=NULL;
       
        int count=1;
        while(count<position){
            prev=current;
            current=current->next;
            count++;
        }
        prev->next=current->next;
        current->next=NULL;
        delete current;
    }
}

int main() {

    //Created a new node
    Node* node1 = new Node(10);
    // cout<< node1 ->data <<endl;
    // cout<< node1 ->next <<endl;
   
    //Head printed to node1
    Node* head=node1;
    Node* tail=node1;
    print(head);
   
    insertAtTail(tail,12);
    print(head);
   
    insertAtTail(tail,15);
    print(head);
   
    insertAtPosition(tail,head,4,22);
    print(head);
   
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
   
    deleteNode(3,head);
    print(head);
   
    //Handle last node in tail
   
    return 0;
}