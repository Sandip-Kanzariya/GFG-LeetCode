//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


bool already = 0;

vector <int> prims;

void sieve(){
        
    vector <int> isPrime(1e6 + 10, 1);
    isPrime[0] = isPrime[1] = 0;
        
    
    for(int i = 2;i * i< 1e6 + 10;i++){
        
        if(isPrime[i]){
            
            for(int j = i + i;j < 1e6 + 10;j += i){
                    isPrime[j] = 0; 
            }
        }
    }
    
    
    for(int i = 0;i < 1e6 + 10;i++){
        
        if(isPrime[i]){
            prims.push_back(i);
        }
    }
    
    already = 1;
}


class Solution
{
    public:
    int minNumber(int arr[],int N)
    {
        int sum = 0;
        for(int i = 0;i < N;i++)
            sum += arr[i];
        
        if(!already){ // calculate prims once
            sieve();    
        }
        
        auto ans = lower_bound(prims.begin(), prims.end(), sum);
        
        return *ans - sum;
    }
};


//{ Driver Code Starts.

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minNumber(arr, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends