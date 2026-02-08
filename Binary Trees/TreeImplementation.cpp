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
void preOrderTraversal(Node* root){
    // Base case if Node is Null then return
    if(root==NULL){
        return;
    }
    else{
    // N(printing the current node data)
        cout << root->data<<" ";
    // L(go for the left Node)
        preOrderTraversal(root->left);
    // R(go for the right Node)
        preOrderTraversal(root->right);
    }
}
void inOrderTraversal(Node* root){
    // Base case if Node is Null then return
    if(root==NULL){
        return;
    }
    else{
    // L(go for the left Node)
    inOrderTraversal(root->left);
    // N(Printing the current Node data)
    cout << root->data<<" ";
    // R(go for the right Node)
    inOrderTraversal(root->right);
    }
}
void postOrderTraversal(Node* root){
    // Base case if Node is Null then return
    if(root==NULL){
        return;
    }
    else{
    // L(go for the left Node)
    postOrderTraversal(root->left);
    // R(go for the right Node)
    postOrderTraversal(root->right);
    // N(printing gthe current current node data)
    cout << root->data<<" ";
    }
    
}
int main(){
    Node* root=createTree();
    cout << endl;
    preOrderTraversal(root);
    cout << endl;
    inOrderTraversal(root);
    cout << endl;
    postOrderTraversal(root);
    cout << endl;
    return 0;
}

// 10 20 40 -1 -1 -1 30 50 -1 -1 60 -1 -1