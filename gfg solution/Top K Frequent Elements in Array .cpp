//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        priority_queue<pair<int,int>>p;
        for(auto j:mp){
            p.push({j.second,j.first});
        }
        vector<int>result;
        while(!p.empty() && k--){
            result.push_back(p.top().second);
            p.pop();
        }
        return result;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
