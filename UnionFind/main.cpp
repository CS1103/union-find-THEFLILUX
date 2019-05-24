#include <iostream>
using namespace std;

struct Node{
    int value;
    Node* right;
    Node* left;
};

Node* create(int value){
    Node* temp = new Node();
    temp->value=value;
    temp->right=temp->left=NULL;
    return temp;
};

int main() {
    Node* root=NULL;
    int n;
    cin>>n;
    root=create(n);
    cout<<root->value;
    return 0;
}

//>
//<