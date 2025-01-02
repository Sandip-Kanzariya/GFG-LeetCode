//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    /*  Using hash map 
        
    Time : O(n)
    Space : O(n)
    
    */
    
    int countSubarrays(vector<int> &arr, int k) {
        
        map <int, int> mp;
        
        int n = arr.size();
        int ans = 0;
        
        mp[0]++;
        int sum = 0;
        
        for(int i = 0;i < n;i++){
            sum += arr[i];
            
            // if we get count of (sum - k)
            if(mp.find(sum - k)  != mp.end()){
                ans += mp[sum - k];
            }
            
            mp[sum]++;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.countSubarrays(arr, k);
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends