#include<iostream>

using namespace std;

struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
};

void mirrorTree(TreeNode* node){
    if(node==nullptr) 
        return;
    
    swap(node->left, node->right);

    mirrorTree(node->left);
    mirrorTree(node->right);
}

void inorder(TreeNode* rootNode){
    if(rootNode == nullptr) return;

    inorder(rootNode->left);
    cout << rootNode->data << " ";
    inorder(rootNode->right);
}

int main(){
    TreeNode* mainNode = new TreeNode{1, nullptr, nullptr};
    mainNode->left = new TreeNode{2, nullptr, nullptr};
    mainNode->right = new TreeNode{3, nullptr, nullptr};

    mainNode->right->left = new TreeNode{4, nullptr, nullptr};
    mainNode->right->right = new TreeNode{5, nullptr, nullptr};

    inorder(mainNode);
    cout << endl;
    mirrorTree(mainNode);
    inorder(mainNode);
    cout << endl;
}