class Solution {
public:

    string solver(string s){
        stack <char> st;
        
        for(int i = 0;i < s.size();i++){

            if(s[i] != '#'){
                st.push(s[i]);
            }
            else{
                if(!st.empty()){
                    st.pop();
                }
            }
        }

        string ans = "";
        while(!st.empty())  {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }

    bool backspaceCompare(string s, string t) {
        
        s= solver(s);
        t= solver(t);
        // cout << s << " " << t;
        return s == t;
    }
};