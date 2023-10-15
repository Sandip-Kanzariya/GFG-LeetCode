#include <bits/stdc++.h>
class Solution {
public:
    int find(vector <int> v, int k, bool c){
    
    int start = 0;
    int end = v.size() - 1;
    
    int result = -1;
    while(start <= end){
        
        int mid = start + (end - start) / 2;
        if(v[mid] == k)
        {
            result = mid;
            
            // for first : Go left side
            if(c == 1)
               end = mid - 1;
            else
               start = mid + 1;
        }
        
        // Go Right side
        else if(v[mid] < k){
            start = mid + 1;            
        }
        else 
            end = mid - 1;
    }
    
    return result;
    }
    
    
    vector<int> searchRange(vector<int> &nums, int target) {
        vector <int> ans;
        ans.push_back(find(nums, target, 1));
        ans.push_back(find(nums, target, 0));
        
        return ans;
    }
};