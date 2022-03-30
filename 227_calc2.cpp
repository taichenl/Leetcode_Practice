class Solution {
public:
    int calculate(string s) {
        int num = 0;
        stack<int> sta;
        char presign = '+';
        for (int i = 0; i < s.size(); i++){
            if(isdigit(s[i])){
                num = num*10 + (s[i] - '0');
            }
            if (i == s.size() -1 || s[i] == '+'|| s[i] == '-' || s[i] == '*' || s[i] == '/'){
                int temp;
                switch (presign){
                    case '+':
                        sta.push(num);
                        break;
                    case '-':
                        sta.push(num*-1);
                        break;
                    case '*':
                        // cout<<i<<endl;
                        // cout<<num<<endl;
                        // cout<<sta.top()<<endl
                        temp = sta.top() * num;
                        // cout<<temp<<endl;
                        sta.pop();
                        // cout<<sta.top()<<endl;
                        sta.push(temp);
                        // cout<<i<<endl;
                        break;
                    case '/':
                        temp = sta.top() / num;
                        sta.pop();
                        sta.push(temp);
                        break;
                }
                presign = s[i];
                num = 0;
                // cout<<sta.top()<<endl;
            }
        }
        int result = 0;
        while(!sta.empty()){
            // std::cout<<sta.top()<<std::endl;
            result += sta.top();
            sta.pop();
        }
        return result;
    }
};