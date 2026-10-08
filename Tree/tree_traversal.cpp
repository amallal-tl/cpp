#include <iostream>

using namespace std;

struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
};

void postorder(TreeNode* rootNode){
    if(rootNode == nullptr) return;

    postorder(rootNode->left);
    postorder(rootNode->right);
    cout << rootNode->data << " ";
}

void inorder(TreeNode* rootNode){
    if(rootNode == nullptr) return;

    inorder(rootNode->left);
    cout << rootNode->data << " ";
    inorder(rootNode->right);
}

void preorder(TreeNode* rootNode){
    if(rootNode == nullptr)
        return;
    
    cout << rootNode->data << " ";
    preorder(rootNode->left);
    preorder(rootNode->right);
}

int treeHeight(TreeNode* rootNode){
    if(rootNode == nullptr) return 0;

    int leftHeight = treeHeight(rootNode->left) + 1;
    int rightHeight = treeHeight(rootNode->right) + 1;
    return max(leftHeight, rightHeight);
}

int countNode(TreeNode* rootNode){
    if(rootNode == nullptr){
        return 0;
    }
    return countNode(rootNode->left) + 1 + countNode(rootNode->right);
}

int main(){
    TreeNode* rootNode = new TreeNode{1, nullptr, nullptr};
    rootNode->left = new TreeNode{2, nullptr,nullptr};
    rootNode->right = new TreeNode{3, nullptr, nullptr};

    rootNode->left->left = new TreeNode{4, nullptr, nullptr};
    rootNode->left->right = new TreeNode{5, nullptr, nullptr};

    rootNode->left->right->left = new TreeNode{6, nullptr, nullptr};

    preorder(rootNode);
    cout << endl;
    inorder(rootNode);
    cout << endl;
    postorder(rootNode);
    cout << endl;

    cout << "Height = " << treeHeight(rootNode) << endl;

    cout << "Number of Nodes present = " << countNode(rootNode);
    return 0;
}