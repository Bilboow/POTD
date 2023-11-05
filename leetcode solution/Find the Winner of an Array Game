class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int mx=arr[0];//finding max element in array
        for(int i=1;i<arr.size();i++){
            mx=max(mx,arr[i]);
        }
        int winner=arr[0];
        int win_cnt=0;
        for(int i=1;i<arr.size();i++){
            int opp=arr[i];
            if(winner>opp){
                win_cnt++;
            }
            else{
                //changing winner
                winner=opp;
                win_cnt=1;
            }
            if(win_cnt==k || winner==mx){
                return winner;
            }
        }
        return -1;
    }
};
