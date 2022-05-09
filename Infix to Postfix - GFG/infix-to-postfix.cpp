// { Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    int pr(char x)
    {
        if( x=='^')
        return 3;
        else if (x=='/' || x=='*')
        return 2;
        else if( x=='-' || x=='+')
        return 1;
        else if( x=='(')
        return 0;
        else
        return -1;
    }
    string infixToPostfix(string s) {
        string sol;
        stack<char> st;
        for(auto x:s)
        {
            if( x>='a' && x<='z' || x>='A' && x<='Z')
            {
                sol+=x;
            }else
            if( x=='(')
            {
                st.push(x);
            }
            else if( x==')')
            {
                while( st.size()!=0 && st.top()!='(')
                {
                    sol+=st.top();
                    st.pop();
                }
                st.pop();
            }
            else
            {
                while( st.size()!=0 && pr(x)<=pr(st.top()))
                {
                    sol+=st.top();
                    st.pop();
                }
                st.push(x);
            }
            
        }
        while(st.size()!=0)
        {
            sol+=st.top();
            st.pop();
        }
        
        return sol;
    }
};


// { Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}
  // } Driver Code Ends