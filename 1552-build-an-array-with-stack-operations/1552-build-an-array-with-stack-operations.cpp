class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        

        vector <string> ans;

        int t = 0, st = 1;

        while(t < target.size()){

            ans.push_back("Push");

            if(target[t] == st){    
                t++;    

            }
            else{
                ans.push_back("Pop");
            }
            st++;
        }

        return ans;   
    }
};