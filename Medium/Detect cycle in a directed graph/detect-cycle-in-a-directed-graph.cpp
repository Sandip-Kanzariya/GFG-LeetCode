//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    bool dfs(vector<int> adj[], vector <bool> &v, vector <bool> &pathv, int node){
        
        v[node] = 1;
        pathv[node] = 1;
        
        
        for(int i = 0;i < adj[node].size();i++){
            
            int neig = adj[node][i];
            
            if(v[neig] == 0){
                bool temp = dfs(adj, v, pathv, neig);
                
                if(temp) return true;
            }
            else if(pathv[neig]){
                return true;
            }
        }
        
        pathv[node] = 0;
        return false;
    }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        
        vector <bool> visited(V, 0),
                    pathv(V, 0);
                    
        for(int i = 0;i< V;i++){
            
            bool ans = dfs(adj, visited, pathv, i);
                
            if(ans) return true;
            
        }
        
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends