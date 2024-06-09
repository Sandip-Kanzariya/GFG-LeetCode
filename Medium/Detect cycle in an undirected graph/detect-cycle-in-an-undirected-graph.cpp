//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    bool detectDfs(vector<int> adj[], vector <bool> &visited, int node, int parent){
        
        visited[node] = 1;
        
        // 
        for(int i = 0;i < adj[node].size();i++){
            int neig = adj[node][i];
            
            if(visited[neig] == 0){
                bool temp =  detectDfs(adj, visited, neig, node);
                if(temp) return true;
            }
            else if(neig != parent){
                return true;
            }
        }
        
        return false;
    }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        
        vector <bool> visited(V, 0);
        
        for(int i = 0; i < V;i++){
            if(visited[i] == 0){
                bool ans = detectDfs(adj, visited, i, -1);
                
                if(ans) return 1;
            }
        }
        
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends