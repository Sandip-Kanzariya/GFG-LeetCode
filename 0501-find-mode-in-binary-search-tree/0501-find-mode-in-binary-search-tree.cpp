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

    map <int, int> mp;

    void traverse(TreeNode* root){

        if(root == NULL) return;

        traverse(root -> left);
        mp[root -> val]++;
        traverse(root -> right);
    }

    vector<int> findMode(TreeNode* root) {
        
        vector <int> ans;

        traverse(root);

        int mx = INT_MIN;

        for(auto k : mp){   
            mx = max(k.second, mx);
        }      

        for(auto k : mp){
            if(k.second == mx){
                ans.push_back(k.first);
            }
        }

        return ans;
    }
};