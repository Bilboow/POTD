class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int ans=0;
        for(int ant:left){
            ans=max(ans,ant);
        }
        for(int ant:right){
            ans=max(ans,n-ant);
        }
        return ans;
    }
};