/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int verificarAltura(struct TreeNode* root) {
    if ( root == NULL ) {
        return 0;
    }

    int alturaEsq = verificarAltura(root->left);

    if ( alturaEsq == -1 ) {
        return -1; 
    }

    int alturaDir = verificarAltura(root->right);

    if ( alturaDir == -1 ){
        return -1; 
    }
    
    if ( abs( alturaEsq - alturaDir ) > 1 ) {
        return -1; 
    }

   if ( alturaEsq > alturaDir ) {
        return ( alturaEsq + 1 );
   } else {
        return ( alturaDir + 1 );
   }
}

bool isBalanced( struct TreeNode* root ) {
    return verificarAltura( root ) != -1;
}