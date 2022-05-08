// { Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string s)
    {
         stack<int> num;
   int size = s.size();
    for(int i=0 ; i< size; i++)
    {
        if(s[i]-'0'<=9 && s[i]-'0'>=0)
        {
            num.push(s[i]-'0');
        }
        else
        {
            int x2=num.top();
            num.pop();
            int x1=num.top();
            num.pop();
            switch (s[i])
            {
            case '+': num.push(x1+x2);break;
            case '-': num.push(x1-x2);break;
            case '*': num.push(x1*x2);break;
            case '/': num.push(x1/x2);break;
            }
        }
        
    }
    
    return num.top();
    }
};

// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends