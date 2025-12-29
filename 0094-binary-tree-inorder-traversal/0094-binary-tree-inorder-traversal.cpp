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
    vector<int> inorderTraversal(TreeNode* root) {
        //Stack to track nodes
        stack<TreeNode*> st;

        //Dummy node for traversal
        TreeNode* node = root;

        //Vector to store result
        vector<int> inorder;

        //Infinte loop for traversal
        while(true){
            //If current node is not null
            if(node != NULL){
                //Push curr node to stack
                st.push(node);

                //Move to left child
                node = node -> left;
            } else {
                //If stack is empty break loop
                if(st.empty()) break;

                //Retrive a node from stack
                node = st.top();

                //Remove node from stack
                st.pop();

                //Add the node's value to list
                inorder.push_back(node -> val);

                //Move to right child
                node = node -> right;
            }
        }
        return inorder; 
    }
};