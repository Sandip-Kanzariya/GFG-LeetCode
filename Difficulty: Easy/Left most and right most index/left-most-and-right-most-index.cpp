//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    
    int first_last(vector<long long> &v, long long &x, bool left){
        
        long long l = 0,
                  r = v.size() - 1;
        
        long long result = -1;
        while(l <= r){
            
            long long mid = (l + r) / 2;
            
            if(v[mid] == x){
                result = mid;
                
                if(left == 1)
                    r = mid - 1;
                else 
                    l = mid + 1;
            }
            else if(v[mid] < x){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        return result;
    }
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        
        
        long long left = first_last(v, x, 1);
        long long right = first_last(v, x, 0);
        
        return {left, right};
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends