//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) {
        
        // We need minimun Cost : So remove maximum element 
        
        priority_queue <long long, vector <long long>, greater <long long>> maxh;
        
        int n = arr.size();
        long long ans = 0;
        
        for(int i = 0;i < n;i++){
            maxh.push(arr[i]);
        }
        
        while(maxh.size() != 1){
            long long a = maxh.top();
            maxh.pop();
            long long b = maxh.top();
            maxh.pop();
                
            long long temp = a + b;
            ans += temp;
            
            maxh.push(temp);
        }
        
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        long long num;
        vector<long long> a;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(a) << endl;
    }
    return 0;
}

// } Driver Code Ends