#include <iostream>
#include <queue>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* createTree() {
    cout << "Enter the value of the data : ";
    int data;
    cin >> data;
    cout << data << endl;

    if (data == -1) {
        return NULL;
    } else {
        Node* root = new Node(data);

        // process the left subtree
        cout << "Left of the Node : " << root->data << endl;
        root->left = createTree();

        // process the right subtree
        cout << "Right of the Node : " << root->data << endl;
        root->right = createTree();

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
void levelTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        Node* front = q.front();
        q.pop();

        if (front != NULL) {
            cout << front->data << " ";

            if (front->left != NULL) {
                q.push(front->left);
            }

            if (front->right != NULL) {
                q.push(front->right);
            }
        } else {
            cout << endl;

            if (!q.empty()) {
                // push marker for next level
                q.push(NULL);
            }
        }
    }
}

int main() {
    Node* root = createTree();

    cout <<"Pre Order Traversal"<< endl;
    preOrderTraversal(root);
    cout <<"\nIn Order Traversal"<<endl;
    inOrderTraversal(root);
    cout <<"\nPost Order Traversal"<<endl;
    postOrderTraversal(root);
    cout << endl;

    cout << "Level Traversal :" << endl;
    levelTraversal(root);

    return 0;
}
