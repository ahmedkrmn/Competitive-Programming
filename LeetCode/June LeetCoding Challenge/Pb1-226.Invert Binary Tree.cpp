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
    void swapNodesBFS(TreeNode* node) {
        queue<TreeNode*> nodes;
        if (node != nullptr) {
            nodes.push(node);
        }
        while (nodes.size()) {
            TreeNode* topNode = nodes.front();
            nodes.pop();
            // Swap here
            // swap(topNode->right, topNode->left);
            if (topNode->right != nullptr) {
                nodes.push(topNode->right);
            }
            if (topNode->left != nullptr) {
                nodes.push(topNode->left);
            }
            // Or swap here
            swap(topNode->right, topNode->left);
        }
    }
    void swapNodesDFS(TreeNode* node) {
        if (node == nullptr) {
            return;
        }
        swapNodesDFS(node->left);
        swapNodesDFS(node->right);
        // Must swap postorder
        swap(node->right, node->left);
    }

   public:
    TreeNode* invertTree(TreeNode* root) {
        // BFS swap (better for imbalanced tree)
        //swapNodesBFS(root);
        // DFS swap (better for balanced treees)
        swapNodesDFS(root);
        return root;
    }
};