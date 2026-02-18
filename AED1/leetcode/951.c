/**
 * Definition for a binary tree node.
 * struct TreeNode {
 * int val;
 * struct TreeNode *left;
 * struct TreeNode *right;
 * };
 */

int flipEquiv(struct TreeNode* root1, struct TreeNode* root2) {
    
    if (root1 == NULL && root2 == NULL) {
        return 1;
    }

    if (root1 == NULL || root2 == NULL) {
        return 0;
    }

    if (root1->val != root2->val) {
        return 0;
    }

    int semGiro = flipEquiv(root1->left, root2->left) && 
                  flipEquiv(root1->right, root2->right);
    
    int comGiro = flipEquiv(root1->left, root2->right) && 
                  flipEquiv(root1->right, root2->left);

    return semGiro || comGiro;
}