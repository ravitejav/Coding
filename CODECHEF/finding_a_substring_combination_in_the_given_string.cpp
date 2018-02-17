#include<bits/stdc++.h>
using namespace std;
#define rep(a,b) for( i=a;i<b;i++)
int check(char a,char b,char c,char d)
{
    char k[]={a,b,c,d};
    string s1(k);
    if (s1.find('c') != std::string::npos)
        if (s1.find('h') != std::string::npos)
            if (s1.find('e') != std::string::npos)
                if (s1.find('f') != std::string::npos)
                    return 1;
    return 0;
}
int main()
{
	int t;
	cin>>t;
    string s;
	while(t--)
	{
	    int count=0;
	    cin>>s;
	    int i;
	    if(s.size()>=4)
	    {
    	    rep(0,s.size()-3)
    	    {
    	        //cout<<s[i]<<s[i+1]<<s[i+2]<<s[i+3]<<endl;
    	        if(check(s[i],s[i+1],s[i+2],s[i+3]))
    	         count++;   
    	    }
	    }
	    if(count!=0)
	        cout<<"lovely "<<count<<endl;
	    else
	        cout<<"normal"<<endl;
	    s="";
	}
	return 0;
}
