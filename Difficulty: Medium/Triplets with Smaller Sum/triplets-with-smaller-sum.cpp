//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
  
    /* Two pointers 
    
    Time: O(n^2)
    Space: O(1)
    
    */
    long long countTriplets(int n, long long sum, long long arr[]) {
        
        long long ans = 0;
        
        sort(arr, arr + n);
        for(int i = 0;i < n - 2;i++){
            
            long long l = i + 1, h = n - 1;
            
            while(l < h){
                
                if((arr[i] + arr[l] + arr[h]) < sum){
                    ans = ans + (h - l); // All pairs from l to h are valid 
                    l++;
                }
                else{
                    h--;
                }
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long sum;
        cin >> n >> sum;
        long long arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.countTriplets(n, sum, arr);

        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends