class Solution {
public:
    void reverseString(vector<char>& s) {
        //Stack of char 
        stack<char> st;

        //Push chars in string to stack
        for(char c : s){
            st.push(c);
        }

        //Pop from stack, and rewrite string
        for(int i = 0; i < s.size(); i++){
            //Write top char to string
            s[i] = st.top();
            //Pop from stack
            st.pop();
        }
    }
};