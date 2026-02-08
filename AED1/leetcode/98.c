/**
 * Definition for a binary tree node.
 * struct TreeNode {
 * int val;
 * struct TreeNode *left;
 * struct TreeNode *right;
 * };
 */

bool ehValida(struct TreeNode* root, struct TreeNode* minNode, struct TreeNode* maxNode) {

    if (root == NULL) return true;

    if (minNode != NULL && root->val <= minNode->val) {
        return false;
    }

    if (maxNode != NULL && root->val >= maxNode->val) {
        return false;
    }

    return ehValida(root->left, minNode, root) && 
           ehValida(root->right, root, maxNode);
}

bool isValidBST(struct TreeNode* root) {

    return ehValida(root, NULL, NULL);
}