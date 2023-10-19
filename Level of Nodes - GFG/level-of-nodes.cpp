//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
	//Function to find the level of node X.
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    queue <int> q;
	    q.push(0);
	    vector <int> v(V, 0);
	    
	    v[0] = 1;
	  
	    int level = 0;
	    
	    // BFS + Travese Queue 
	   
	    while(!q.empty()){
	        
	        
	        int n = q.size();
	        
	        for(int i = 0;i < n;i++){
	            
	           int f = q.front();
	           q.pop();
	           
	           if(f == X){
	              return level;
	           }
	           
	           // 
	           for(auto k : adj[f]){
	               if(v[k] == 0){
	                   q.push(k);
	                   v[k] = 1;
	                   
	               }
	           }
	        }
	        
	        level++;
	    }
	    
	    return -1;
	    
	}
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E, X;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
    	cin>>X;

    	Solution obj;
    	cout << obj.nodeLevel(V, adj, X) << "\n";
    }

    return 0;
}


// } Driver Code Ends