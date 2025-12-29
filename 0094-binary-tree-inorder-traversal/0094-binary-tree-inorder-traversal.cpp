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
private:
    void recursiveInorder(TreeNode* root, vector<int> &arr){
        //Base case: If current tree is NULL return
        if(root == NULL) return;

        //Recursively traverse left subtree
        recursiveInorder(root -> left, arr);

        //Push current node's value to vector
        arr.push_back(root -> val);

        //Recursively traverse the right subtree
        recursiveInorder(root -> right, arr);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        //Vector to store in order traversal
        vector<int> arr;

        //Call inorder traversal function
        recursiveInorder(root, arr);
        return arr;
    }
};