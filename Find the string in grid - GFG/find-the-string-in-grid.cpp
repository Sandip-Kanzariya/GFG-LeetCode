//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	vector <int> dx = {1, 1, 0, -1, -1, -1, 0,   1};
	vector <int> dy = {0, 1, 1,  1,  0, -1, -1, -1};
	
	bool dfs(vector<vector<char>> &g, int n, int m, string s, int index, int i, int j, int ni, int nj){
	    
	    if(index == s.size()){
	        return true;
	    }
	    
	    if(i >= 0 && i < n && j >= 0 && j < m && s[index] == g[i][j])
	    {   
	        // We Have To Go Same Direction So, We Pass (ni, nj)
	        return dfs(g, n, m, s, index + 1, i + ni, j + nj, ni, nj);
	    }
	    
	    return false;
	}    
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	    
	    
	    
	    int n = grid.size();
	    int m = grid[0].size();
	    
	    vector<vector<int>> ans;
	    
	    for(int i = 0; i < n;i++){
	       for(int j = 0;j < m;j++){
	            if(grid[i][j] == word[0]){
	                // All Directioin 
	                for(int k = 0;k < 8;k++){
	                   if(dfs(grid, n, m, word, 0, i, j, dx[k], dy[k])){
	                       ans.push_back({i, j});       
	                       break;
	                   }
	                }    
	            }
	       }
	    }
	    
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
		else
		{
		    for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		    }
		}
		
		
	}
	return 0;
}
// } Driver Code Ends