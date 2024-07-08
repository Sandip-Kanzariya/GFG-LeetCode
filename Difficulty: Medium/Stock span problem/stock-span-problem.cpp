//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    
    vector <int> NGLI(int price[], int n){
            
        // <arr, i>
        stack <pair<int, int>> st;
        vector <int> ngri(n, 0);
        
        for(int i = 0;i < n;i++){
            if(st.empty()){
                ngri[i] = -1;
            }
            else if(st.top().first > price[i]){
                ngri[i] = st.top().second;
            }
            else if(st.top().first <= price[i]){
                
                while(!st.empty() && st.top().first <= price[i]){
                    st.pop();
                }
                
                if(st.empty()){
                    ngri[i] = -1;
                }
                else{
                    ngri[i] = st.top().second;
                }
            }
            
            st.push({price[i], i});
        }
        return ngri;
     }
    vector <int> calculateSpan(int price[], int n)
    {
        vector <int> ngri = NGLI(price, n);
        vector <int> ans(n, 0);
        
        for(int i = 0;i < n;i++){
    
            ans[i] = i - ngri[i];
            
        }
        return ans;
    }
};



//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends