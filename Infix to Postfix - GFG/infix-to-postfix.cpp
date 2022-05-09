// { Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s) {
        unordered_map<char,int> m; 
   {
       m.insert({'^',3});
       m.insert({'*',2});
       m.insert({'/',2});
       m.insert({'+',1});
       m.insert({'-',1});
       m.insert({'(',0});
   }
        
        string sol;
        stack<char> st;
        for(auto x:s)
        {
            if(x>='a' && x<='z' || x>='A' && x<='Z')
            {
                sol+=x;
            }else if( x=='(')
            {
                st.push(x);
            }else if( x==')')
            {
                while(st.top()!='(')
                {
                    char ch=st.top();
                    sol+=ch;
                    st.pop();
                }
                st.pop();
            }else
            {
                while(!st.empty() && m[x]<=m[st.top()])
                {
                    sol+=st.top();
                    st.pop();
                }
                st.push(x);
            }
            
           
        }
         while(!st.empty())
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