//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    
    static bool cmp(pair<int, int> a, pair<int, int> b){
        
        if(a.second == b.second){
            return a.first < b.first;
        }
        
        return a.second > b.second;
    }
    
    vector<int> sortByFreq(vector<int>& arr) {
        
        map <int, int> mp;
        int n = arr.size();
        for(int i = 0;i < n;i++){
            mp[arr[i]]++;
        }
        
        vector<pair<int, int>> pr;
        
        for(auto &p : mp){
            pr.push_back({p.first, p.second});
        }
        
        sort(pr.begin(), pr.end(), cmp);
        
        vector <int> ans;
        for(auto k : pr){
            
            int c = k.second;
            while(c--){
                ans.push_back(k.first);
            }
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

        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends