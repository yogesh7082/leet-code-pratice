// { Driver Code Starts
#include<iostream>
#include<stack>
using namespace std;
void push(stack<int>& s,int a);
bool isFull(stack<int>& s,int n);
bool isEmpty(stack<int>& s);
int pop(stack<int>& s);
int getMin(stack<int>& s);
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty(s)){
		    pop(s);
		}
		while(!isFull(s,n)){
			cin>>a;
			push(s,a);
		}
		cout<<getMin(s)<<endl;
	}
}// } Driver Code Ends


void push(stack<int>& s, int a){
	s.push(a);
}

bool isFull(stack<int>& s,int n){
	return s.size()==n;
}

bool isEmpty(stack<int>& s){
    return s.size()==0;
}

int pop(stack<int>& s){
	int temp=s.top();
	s.pop();
	return temp ;
}

int getMin(stack<int>& s){
	int size=s.size() , min;
	min=s.top();
	stack<int> s2;
	for(int i=0 ; i<size ;i++)
	{
	    if(min>s.top())
	    {
	        min=s.top();
	    }
	    s2.push(s.top());
	    s.pop();
	}
	for(int i=0 ; i<size ;i++)
	{
	    s.push(s2.top());
	    s2.pop();
	}
	return min;
	
}