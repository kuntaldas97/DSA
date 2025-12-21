#include <iostream>
using namespace std;
class Node 
{
public:
    int data;
    Node *next;

    Node()
    {
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        cout << "Destructor is called, deleting : "<<this->data<<endl;
    }
};
void insertAtHead(Node* &head, Node* &tail, int data){

    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
}
int countNodes(Node* &head){
    int count=0;
    Node* temp=head;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void deleteNode(Node* &head, Node* &tail, int pos){
    if(head==NULL){
        cout << "LL is empty! no nodes to be deleted.";
    }
    int len = countNodes(head);
    if(pos==1){
        Node* temp = head;
        head = head->next;
        temp->next=NULL;
        delete temp;
    }
    else if(head==tail){
        Node* temp = head;
        delete temp;
        head=NULL;
        temp=NULL;
        return;
        }
    else if(pos>len){
        cout << "Enetered position is greater than total count of the Nodes!"<<endl;
    }
    else if(pos==len){
        Node* prev=head;

        while(prev->next != tail){
            prev=prev->next;
        }
        prev->next=NULL;
        delete tail;
        tail=prev;
    }
    else{
        Node* prev = NULL;
        Node* curr = head;

        while(pos!= 1){
            pos--;
            prev = curr;
            curr = curr->next;
        }
        prev->next=curr->next;
        curr->next = NULL;
        delete curr;
    } 
}
void printNodes(Node* &head){
    Node* temp = head;    
    while(temp!= NULL){
        cout << temp->data << "->";
        temp = temp -> next;
    }
        cout << endl;
}
int main(){

    Node* head=NULL;
    Node* tail=NULL;

    insertAtHead(head,tail,50);
    insertAtHead(head,tail,40);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,10);
    printNodes(head);
    int pos;
    cout << "Enter the position for deleting the node : ";
    cin >> pos;
    deleteNode(head,tail,pos);
    printNodes(head);
    return 0;
}