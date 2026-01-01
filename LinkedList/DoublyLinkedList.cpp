#include <iostream>

using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next; 

    Node(){
        this->prev=NULL;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }

    ~Node(){

    }
};
void insertAtHead(Node* &head, Node* &tail, int data){
    Node* nodeHead = new Node(data);

    // for empty LL
    if(head==NULL){
        head=nodeHead;
        tail=nodeHead;
    }
    // For non-empty LL
    else{
        nodeHead->next=head;
        head->prev=nodeHead;
        head=nodeHead;
    }
}
void insertAtTail(Node* &head, Node* &tail, int data){
 Node* nodeTail = new Node(data);

    // for empty LL
    if(head==NULL){
        head=nodeTail;
        tail=nodeTail;
    }
    // for non-empty LL
    else{
        tail->next=nodeTail;
        nodeTail->prev=tail;
        tail=nodeTail;
    }
}
int countNodes(Node* &head){
    Node* temp = head;
    int len=0;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
void insertAtAnyPos(Node* &head, Node* &tail, int data, int pos){
    Node* newNode = new Node(data);
    if (head==NULL){
        head=newNode;
        tail=newNode;
    }
    else{
        int len = countNodes(head);
        // inserting at the begining 
        if(pos==1){
            insertAtHead(head,tail,data);
        }
        // inserting at the end
        else if(pos>len){
            insertAtTail(head,tail,data);
        }
        // inserting at middle 
        else{
            Node* prevNode = NULL;
            Node* currNode = head;
            while(pos!=1){
                pos--;
                prevNode=currNode;
                currNode=currNode->next;
            }
            prevNode->next=newNode;
            newNode->prev=prevNode;
            newNode->next=currNode;
            currNode->prev=newNode;
        }
    }
}
void printNodes(Node* &head){  
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << "<=>";
        temp=temp->next;
    }
    cout << endl;
}
void deleteNode(Node* &head, Node* &tail, int pos){
    // for empty LL
    if(head==NULL){
        cout << "It's an empty LL, no nodes to be deleted"<<endl;
    }
    // for node size 1
    if(head==tail){
        Node* temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
    }
    int len = countNodes(head);
    // detlete from head
    if(pos==1){ 
        Node* temp = head;
        head = head->next;
        temp->next=NULL;
        head->prev=NULL;
        delete temp;
    }
    // delete from tail
    else if(pos==len){
        Node* prevNode = tail->prev;
        prevNode->next=NULL;
        tail->prev=NULL;
        delete tail;
        tail=prevNode;
    }
    // delete from in between
    else{
        Node* prevNode=NULL;
        Node* currNode=head;

        while(pos!=1){
            pos--;
            prevNode=currNode;
            currNode=currNode->next;
        }
        Node* nextNode= currNode->next;
        prevNode->next=nextNode;
        nextNode->prev=prevNode;
        currNode->next=NULL;
        currNode->prev=NULL;
        delete currNode;
    }

}
int main(){

    Node* head=NULL;
    Node* tail=NULL;
    insertAtHead(head,tail,40);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,10);
    insertAtTail(head,tail,50);
    insertAtTail(head,tail,60);

    printNodes(head);

    int position;
    cout << "Enter the position to insert the new node : ";
    cin >> position;

    insertAtAnyPos(head, tail, 15, position);

    printNodes(head);
    cout << "Enter the position to delete the node : ";
    cin >> position;
    deleteNode(head,tail,position);
    printNodes(head);
    return 0;
}