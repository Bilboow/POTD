class Solution {
public:
    static int find(int nums){
        int bit=0;
        while(nums>0){
            bit++;
            nums&=(nums-1);
        }
        return bit;
    }

    static bool compare(int a,int b){
        if(find(a)==find(b)){
            return a<b;
        }
        return find(a)<find(b);
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),compare);
        return arr;
    }
};