class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        for(char c:s){
            if(st.empty()||st.top().first!=c){
                st.push({c,1});
            } else{
                st.top().second++;
                if(st.top().second==k){
                    st.pop();
                }
            }
        }
        string res="";
        while(!st.empty()){
            auto [ch,count]=st.top();
            st.pop();
            res=string(count,ch)+res;
        }
        return res;
    }
};