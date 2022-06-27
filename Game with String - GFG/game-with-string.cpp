// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
         sort(s.begin(),s.end());
       vector<int> freq (1,1);
       for(int i=1;i<s.length();i++){
           if(s[i]==s[i-1])
               freq[freq.size()-1]++;
           else
               freq.push_back(1);
       }
       
       while(k--){
           sort(freq.begin(),freq.end());
           freq[freq.size()-1]--;
       }
       
       int minVal = 0;
       for(auto x:freq){
           minVal+=(x*x);
       }
           
       return minVal;
        
       
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}  // } Driver Code Ends