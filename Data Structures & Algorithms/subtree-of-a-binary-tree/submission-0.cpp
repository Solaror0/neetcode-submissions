/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == nullptr && subRoot == nullptr){
            return true;
        } else if((root == nullptr && subRoot!=nullptr) || (root!=nullptr && subRoot == nullptr)){
            return false;
        }
        // bool subLeft = isSameTree(root->left, subRoot);
        // bool subRight = isSameTree(root->right, subRoot);
        bool subMain = isSameTree(root, subRoot);

        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot) || subMain;
    }

    bool isSameTree(TreeNode* a, TreeNode* b){
        if(a == nullptr && b == nullptr){
            return true;
        } else if((a==nullptr && b!=nullptr) || (a!= nullptr && b==nullptr)){
            return false;
        }

        return (isSameTree(a->left,b->left) && isSameTree(a->right,b->right) && (a->val == b->val));

    }
};
