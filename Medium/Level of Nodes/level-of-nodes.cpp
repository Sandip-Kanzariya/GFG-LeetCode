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
	    
	    vector <bool> visited(V, 0);
	    queue <int> q;
	    q.push(0);
	    visited[0] = 1;
	    
	    
	    int level = 0;
	    
	    while(!q.empty()){
	        
	        int n = q.size();
	        
	        for(int j = 0;j < n;j++){
	        
    	        int f = q.front();
    	        q.pop();
    	     
    	        if(f == X){
    	            return level;
    	        }   
    	        for(int i = 0;i < adj[f].size();i++){
        	        int node = adj[f][i];
    	            if(visited[node] == 0){
    	                q.push(node);
    	                visited[node] = 1;
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