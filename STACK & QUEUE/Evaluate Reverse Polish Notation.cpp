class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(string x:tokens)
        {
            if(x=="+")
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                st.push(a+b);
            }
            else if(x=="-")
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                st.push(b-a);
            }
            else if(x=="*")
            {
                long int a=st.top();
                st.pop();
                long int b=st.top();
                st.pop();
                st.push(a*b);
            }
            else if(x=="/")
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                st.push(b/a);
            }
            else
            {
                st.push(stoi(x));
            }
        }
        return st.top();
    }
};
