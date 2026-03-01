// Problem: 1022. Sum of Root To Leaf Binary Numbers
// Technique: DFS + Accumulated Binary Value
// Time Complexity: O(n)
// Space Complexity: O(h)

class Solution {
public:
        int dfs(TreeNode *node, int current){
            if(node == NULL) return 0;

            current = current * 2 + node->val;

            if(node->left == NULL && node->right == NULL) return current;

            return dfs(node->left, current) + dfs(node->right, current);
        }

        int sumRootToLeaf(TreeNode* root) {
            return dfs(root, 0);
    }
};