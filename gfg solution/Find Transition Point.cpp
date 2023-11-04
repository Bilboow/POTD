//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
        int r=n-1,l=0;
        int ans=-1;
        
        while(l<=r){
            
            int mid=(l+r)/2;
            
            if(arr[mid]==1){
              ans= mid;
              r=mid-1;
            }
            else if(arr[mid]<1){
              l=mid+1;
            }
            else{
              r=mid+1;
            }  
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.transitionPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends