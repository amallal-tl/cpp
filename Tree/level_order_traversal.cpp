#include <iostream>
#include <queue>

using namespace std;

struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
};

queue<TreeNode*> q;

void inorder(TreeNode* rootNode){
    if(rootNode == nullptr) return;

    inorder(rootNode->left);
    cout << rootNode->data << " ";
    inorder(rootNode->right);
}

void levelOrderTraversal(TreeNode* node){
    if(node == nullptr)
        return;

      q.push(node);
      q.push(node->left);
      q.push(node->right);
      levelOrderTraversal(q.front());
      q.pop();
}

int main(){
    TreeNode* mainNode = new TreeNode{1, nullptr, nullptr};
    mainNode->left = new TreeNode{2, nullptr, nullptr};
    mainNode->right = new TreeNode{3, nullptr, nullptr};

    mainNode->right->left = new TreeNode{4, nullptr, nullptr};
    mainNode->right->right = new TreeNode{5, nullptr, nullptr};

    inorder(mainNode);
    cout << endl;
    levelOrderTraversal(mainNode);
    inorder(mainNode);
    cout << endl;
}