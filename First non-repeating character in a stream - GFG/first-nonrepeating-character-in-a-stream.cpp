// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    queue<char> q;
		    string ans;
		    vector<int> v(26 , 0);
		    for(int i=0 ; i<A.size() ; i++)
		    {
		        q.push(A[i]);
		        int  num= ++v[A[i]-'a'];
		        char c=q.front();
		        while(!q.empty() && v[c-'a']!=1)
		        {
		            q.pop();
		            c=q.front();
		        }
		        if(q.empty())
		        {
		            ans+='#';
		        }else
		        {
		            ans+=c;
		        }
		        
		    }
		    return ans;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends