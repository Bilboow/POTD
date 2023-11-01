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
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int> cnt;
        dfs(root,cnt);
        int mx=0;

        for(auto& [key,val]:cnt){
            mx=max(mx,val);
        }
        vector<int> ans;
        for(auto& [key,val]:cnt){
            if(val==mx){
                ans.push_back(key);
            }
        }
        return ans;
    }
    void dfs(TreeNode* node ,unordered_map<int,int> &cnt){
        if(node==nullptr){
            return;
        }
        cnt[node->val]++;
        dfs(node->left,cnt);
        dfs(node->right,cnt);
    }
};