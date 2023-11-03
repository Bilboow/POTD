//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	     int mx = 0;

        for (int i = 0; i < n; i++) {
            mx = max(mx, arr[i]);
        }
        mx = mx * mx;

        vector<int> freq(mx + 1, 0);
        for (int i = 0; i < n; i++) {
            freq[arr[i] * arr[i]]++;
        }
        
        for (int i = 1; i <= mx; i++) {
            if (freq[i] == 0) {
                continue;
            }

            for (int j = 1; j <= mx; j++) {
                if (freq[j] == 0 || (i == j && freq[i] == 1)) {
                    continue;
                }
                int c = i + j;
                if (c > mx) {
                    continue;
                }
                if (freq[c] > 0) {
                    return true;
                }
            }
        }
        return false;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.checkTriplet(arr, n);
        if (ans) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}

// } Driver Code Ends