#include <iostream>

using namespace std;

// creation of the Node
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};
// This function will return the root node.
Node* createTree(){
    cout << "Enter the value of the data"<<endl;

    int data;
    cin >> data;

    if(data==-1){
        return NULL;
    }
    else{
        // Create Node
        Node* root = new Node(data);
        // Create left tree
        cout << "Left of the node : "<<root->data<<endl;
        root->left = createTree();
        // Create right tree
        cout << "Right of the node : "<<root->data<<endl;
        root->right=createTree();

        return root;
    }

}

int main(){
    Node* root=createTree();
    return 0;
}

// 10 20 40 -1 -1 -1 30 50 -1 -1 60 -1 -1