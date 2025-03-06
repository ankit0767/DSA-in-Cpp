#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->next=nullptr;
        cout <<"df ctor called"<<endl;
    }
    Node(int data){
        this->data=data;
        this->next=nullptr;
    
    }
};
void printLL(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
int countNode(Node* head){
    int count=0;
    Node*temp=head;
    while(temp!=nullptr){
        count++;
        temp=temp->next;
    }
    cout<<count<<endl;;

}
 void insertAtHead(Node* &head,Node*&tail, int data){
    if(head==nullptr){
    Node* temp=new Node(data);
    head=temp;
    tail=temp;
    }else{
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
    }
 }
 void insertAtTail(Node* &head,Node*&tail, int data){
    if(head==nullptr){
        Node* temp=new Node(data);
        head=temp;
        tail=temp;
    }else{
        Node*temp=new Node(data);
        tail->next=temp;
        tail=temp;



    }
    
 }
 void insertATpos(Node*&head,Node*&tail,int data,int position){
    int length=countNode(head);
    if(position<=1){
        insertAtHead(head,tail,data);
    }else if(position>=length){
        insertAtTail(head,tail,data);
    }else{
        Node* temp=new Node(data);
        Node* prev=nullptr;
        Node* curr=head;
        while(position!=1){
            prev=curr;
            curr=curr->next;
            position--;
        }
        prev->next=temp;
        temp->next=curr;

        

    }
 }
    void deleteNode(Node*&head, Node*tail,int data, int position ){
        if(head==nullptr){
            cout<<"can not delete"<<endl;
            return;
        }
        if(head==tail){
            Node*temp=head;
            delete temp;
            head=nullptr;
            tail=nullptr;
            cout<< "node is deleted";
        }
        int length=countNode(head);
        if(position==1){
            Node*temp=head;
            head=head->next;
            temp->next=nullptr;
            delete temp;
            return;
        }
        Node*prev=nullptr;
        Node*curr=head;
        while(position!=1){
            position--;
            prev=curr;
            curr=curr->next;

        }
        prev->next=curr->next;
        curr->next=nullptr;
        delete curr;


        

        
    }
 
int main(){
    Node*head=nullptr;
    Node* tail=nullptr;
    insertAtHead(head,tail,10);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,40);
    insertAtHead(head,tail,50);
    printLL(head);
    deleteNode(head,tail,2,5 );
    printLL(head);
    // countNode(head);
    // insertATpos(head,tail,100, 6);
    // printLL(head);

    // Node a;
    // Node*first=new Node(10);
    // Node*second=new Node(20);
    // Node*third=new Node(30);
    // Node*fourth=new Node(40);
    // Node*fifth=new Node(50);

    // first->next=second;
    // second->next=third;
    // third->next=fourth;
    // fourth->next=fifth;

    // Node*head= first;
    // Node*tail= fifth;
    // countNode(head);
    // printLL(head);
    // insertAtHead(head,tail, 80);
    // printLL(head);
    // insertAtTail(head,tail, 90);
    // printLL(head);


}