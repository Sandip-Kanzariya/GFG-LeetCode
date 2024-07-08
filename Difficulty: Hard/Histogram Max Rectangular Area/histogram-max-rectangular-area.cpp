//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    
    vector <long long> NSLI(long long arr[], int n){
        
        stack <pair<long long,int>> st;
        vector <long long> nsli(n, 0);
        
        for(int i = 0;i < n;i++){
            
            if(st.empty()){
                nsli[i] = -1;
            }
            else if(st.top().first < arr[i]){
                nsli[i] = st.top().second;
            }
            else if(st.top().first >= arr[i]){
                
                while(!st.empty() && st.top().first >= arr[i]){
                    st.pop();
                }
                
                
                if(st.empty()){
                    nsli[i] = -1;
                }
                else{
                    nsli[i] = st.top().second;
                }
            }
            st.push({arr[i], i});
        }
        return nsli;
    }
    
    vector <long long> NSRI(long long arr[], int n){
        
        stack <pair<long long,int>> st;
        vector <long long> nsri(n, 0);
        
        for(int i = n - 1;i >= 0;i--){
            
            if(st.empty()){
                nsri[i] = n;
            }
            else if(st.top().first < arr[i]){
                nsri[i] = st.top().second;
            }
            else if(st.top().first >= arr[i]){
                
                while(!st.empty() && st.top().first >= arr[i]){
                    st.pop();
                }
                
                if(st.empty()){
                    nsri[i] = n;
                }
                else{
                    nsri[i] = st.top().second;
                }
            }
            st.push({arr[i], i});
        }
        return nsri;
    }
    
    
    long long getMaxArea(long long arr[], int n)
    {
        vector <long long> nsli = NSLI(arr, n);
        vector <long long> nsri = NSRI(arr, n);
        vector <long long> w(n, 0);
        
        
        for(int i = 0;i < n;i++){
            w[i] += nsri[i] - nsli[i] - 1;
        }
        
        long long mx = INT_MIN;
        for(int i = 0;i < n;i++){
            mx = max(mx, w[i] * arr[i]);
        }
        return mx;
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends