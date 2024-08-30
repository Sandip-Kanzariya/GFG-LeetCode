//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    
    // Find Nearest left Smaller 
    vector <int> NLS(vector<int> &arr, int n){
        
        stack <int> st;
        vector <int> ls(n, 0);
        
        for(int i = 0;i < n;i++){
            
            if(st.empty()){
                ls[i] = 0;
            }
            else if(arr[i] > st.top() && !st.empty()){
                ls[i] = st.top();
            }
            else if(arr[i]  <= st.top() && !st.empty()){
                
                while(!st.empty() && arr[i]  <= st.top()){
                    st.pop();
                }
                
                if(st.empty()){
                    ls[i] = 0;
                }
                else{
                    ls[i] = st.top();
                }
            }
            
            st.push(arr[i]);
        }
        
        return ls;
    }
    
    // Find Nearest Right Smaller 
    vector <int> NRS(vector<int> &arr, int n){
        
        stack <int> st;
        vector <int> rs(n, 0);
        
        for(int i = n - 1;i >= 0;i--){
            
            if(st.empty()){
                rs[i] = 0;
            }
            else if(!st.empty() && arr[i] > st.top()){
                rs[i] = st.top();
            }
            else if(!st.empty() && arr[i] <= st.top()){
            
                while(!st.empty() && arr[i] <= st.top()){
                    st.pop();
                }
                
                if(st.empty()){
                    rs[i] = 0;
                }
                else
                {
                    rs[i] = st.top();
                }
            }
            
            st.push(arr[i]);
        }
        
        return rs;
    }
    
    int findMaxDiff(vector<int> &arr) {
     
        int n = arr.size();
        vector <int> ls, rs;
        ls = NLS(arr, n);
        rs = NRS(arr, n);

        int mx = 0;
        for(int i = 0;i < n;i++){
            mx = max(mx, abs(ls[i] - rs[i]));
        }
        
        return mx;
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

        Solution ob;
        cout << ob.findMaxDiff(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends