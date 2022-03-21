class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (auto i: s){
            if (i == '(' || i == '[' || i == '{'){
                st.push(i);
            }
            else if (st.empty()){
                return false;
            }
            else if (i == ')' || i == '}' || i == ']'){
                if (!match(st.top(), i)) return false;
                st.pop();
            }
        }
        return st.empty();
    }
private:
    bool match(char l, char r){
        return (l == '(' && r == ')') || (l == '[' && r == ']') || (l == '{' && r == '}');
    }
};