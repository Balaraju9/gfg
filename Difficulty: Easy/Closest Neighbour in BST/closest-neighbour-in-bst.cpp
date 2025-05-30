/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
    int max1=-1;
    void fun(Node* root,int k){
        if(root==NULL){
            return;
        }
        if(root->data<=k){
            max1=max(max1,root->data);
        }
        fun(root->left,k);
        fun(root->right,k);
    }
    int findMaxFork(Node* root, int k) {
        fun(root,k);
        return max1;
        
    }
};