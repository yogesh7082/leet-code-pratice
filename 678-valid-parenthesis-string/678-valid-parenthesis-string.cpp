class Solution {
public:
    bool checkValidString(string s) {
        stack <int>  sa, sb;
        for(int i=0 ;i<s.size() ; i++)
        {
            if(s[i]=='(') sa.push(i);
            else if( s[i]== ')' )
            {
                if(!sa.empty()) sa.pop();
                else if( !sb.empty()) sb.pop();
                else return false;
            }else sb.push(i);
            
        }
        
        while ( !sa.empty() && !sb.empty())
        {
            if( sa.top()>sb.top()) return false;
            else {
                sa.pop();
                sb.pop();
            }
        }
        
        if(sa.empty())
        {
            return true;
        }
        else 
            return false;
        
        
    }
};