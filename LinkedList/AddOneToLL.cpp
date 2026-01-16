// Add One to a Linked List
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node() {
        this->next = NULL;
    }

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void printNodes(Node*& head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

Node* reverse(Node*& head) {
    Node* prev = NULL;
    Node* curr = head;

    while (curr != NULL) {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node* AddOne(Node*& head) {
    // Reverse the linked list first
    head = reverse(head);

    Node* temp = head;
    int carry = 1;

    while (temp->next != NULL) {
        int totalSum = temp->data + carry;
        temp->data = totalSum % 10;
        carry = totalSum / 10;
        temp = temp->next;
    }

    if (carry != 0) {
        int totalSum = temp->data + carry;
        temp->data = totalSum % 10;
        carry = totalSum / 10;

        if (carry != 0) {
            Node* newNode = new Node(carry);
            temp->next = newNode;
        }
    }

    // Reverse again to restore original order
    head = reverse(head);
    return head;
}

int main() {
    Node* one = new Node(1);
    Node* two = new Node(3);
    Node* three = new Node(8);

    one->next = two;
    two->next = three;

    printNodes(one);

    Node* head = AddOne(one);
    printNodes(head);

    return 0;
}
