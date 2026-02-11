/**
 * Definition for a binary tree node.
 * struct TreeNode {
 * int val;
 * struct TreeNode *left;
 * struct TreeNode *right;
 * };
 */

bool saoEspelhos(struct TreeNode* t1, struct TreeNode* t2) {
    
    if (t1 == NULL && t2 == NULL) return true;
    
    if (t1 == NULL || t2 == NULL) return false;
    
    if (t1->val != t2->val) return false;

    return saoEspelhos(t1->left, t2->right) && 
           saoEspelhos(t1->right, t2->left);
}

bool isSymmetric(struct TreeNode* root) {
   
    if (root == NULL) return true;

    return saoEspelhos(root->left, root->right);
}