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
};
//  creating tail using function
void createTail(Node* &Head, Node* &tail){
    Node* temp = Head;

    while(temp != NULL){
        temp=temp->next;
    }
    tail=temp;
}
int countNodes(Node* &head){
    Node* temp=head;
    int nodeCount = 0;
    while(temp!=NULL){
        temp=temp->next;
        nodeCount++;
    }
    return nodeCount;
}
void insertAtHead(Node *&Head,Node* &tail, int dataHead)
{

    //  for handling the case of empty node
    if (Head == NULL)
    {
        //  creation of new node
        Node* newHeadNode = new Node(dataHead);
        //  making the new node as head node.
        Head = newHeadNode;
        // also making the new node as tail node
        tail = newHeadNode;
    }
    else
    {
        //  creation of new node
        Node* newHeadNode = new Node(dataHead);
        //  Storing the address of the next node.
        newHeadNode->next = Head;
        //  making the new node as head node.
        Head = newHeadNode;
    }
}

void insertAtTail(Node* &Head, Node* &tail, int dataTail){
     //  for handling the case of empty node
    if (Head == NULL)
    {
        //  creation of new node
        Node* newTailNode = new Node(dataTail);
        //  making the new node as head & tail  node.
        Head = newTailNode;
        tail = newTailNode;
    }
    else
    {
        //  creation of new node
        Node* newTailNode = new Node(dataTail);
        //  Storing the address of the next node.
        tail->next=newTailNode;
        //  making the new node as head node.
        tail =newTailNode;
    }
}
void insertAtAnyPos(Node* &head, Node* &tail, int pos, int data){

    int nodeCounts=countNodes(head);
    if(pos<=1){
    insertAtHead(head,tail,data);
    }
    if(pos>nodeCounts){
        insertAtTail(head,tail,data);
    }
    else{
        Node* newNode = new Node(data);

        Node* prev = NULL;
        Node* curr = head;

        while(pos!=1){
            prev=curr;
            curr=curr->next;
            pos--;
        }
        prev->next=newNode;
        newNode->next=curr;
    }

}
void printNodes(Node* &head)
{
    // creating a Temp node pointer to store the Node passed as a parameter and using it
    // for other operations is always the best practices.
    // While passing the Nodes in a function as pass by reference is the best practices.
    Node* temp = head;
    int nodeCount = 0;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
        nodeCount++;
    }
    cout << endl
         << "Total number of nodes : " << nodeCount << endl;
}

int main()
{

    // Node *one = new Node(10);
    // Node *two = new Node(20);
    // Node *three = new Node(30);
    // Node *four = new Node(40);
    // Node *five = new Node(50);

    // one->next = two;
    // two->next = three;
    // three->next = four;
    // four->next = five;
    // Node* head = one;
    // Node* tail = five; 
Node* head = NULL;
Node* tail = NULL;
    insertAtHead(head,tail,200);
    insertAtHead(head,tail,10);
    insertAtHead(head,tail,20);
    insertAtTail(head,tail,50);

insertAtAnyPos(head,tail,3,40);
    cout << "Printing the nodes." << endl;
    // printNodes(head);
    printNodes(head);

    cout << endl;
    return 0;
}