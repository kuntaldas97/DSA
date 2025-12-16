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
void printNodes(Node *head)
{
    Node* temp = head; // creating a Temp node pointer to store the Node passed as a parameter and using it for other operations is always the best practices.
    int nodeCount=0;
    while(temp!=NULL){
        cout << temp->data << "->";
        temp=temp->next;
        nodeCount++;
    }
    cout<<endl << "Total number of nodes : "<< nodeCount<<endl;
}

int main()
{

    Node *one = new Node(10);
    Node *two = new Node(20);
    Node *three = new Node(30);
    Node *four = new Node(40);
    Node *five = new Node(50);

    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    Node* head = one;
    cout << "Printing the nodes."<<endl;
    printNodes(head);   
    cout << endl ;
    return 0;
}