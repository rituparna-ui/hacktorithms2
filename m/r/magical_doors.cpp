// problem link:- https://www.codechef.com/START13B/problems/MAGDOORS

#include <iostream>
#include <stack>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int j=0;
	    int flip=0;
	    for(int i=0; i<s.length(); i++)
	    {
	        if(s[i]=='0')
	        {
	            for(int j=i; j<s.length(); j++)
	            {
	                if(s[i]=='1') break;
	            }
	            flip++;
	            i=j;
	        }
	        
	    }
	    if(s[s.length()-1]==0) cout<<(2*flip)-1<<endl;
	    else cout<<2*flip<<endl;
	}
	return 0;
}
