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

    // TC : O(n)
    // SC : O(n)
    
public:

    int ans = 0;

    // {Val Sum, Count}
    pair <int, int> solve(TreeNode* root){

        if(root == NULL) return {0, 0};

        pair <int, int> pleft = solve(root -> left);
        pair <int, int> pright = solve(root -> right);

        int sum = root -> val + pleft.first + pright.first;

        int count = 1 + pleft.second + pright.second;

        int avg = sum / count;

        if(avg == root -> val) ans++;

        return {sum, count};
    }

    int averageOfSubtree(TreeNode* root) {
        
        solve(root);

        return ans;
    }
};