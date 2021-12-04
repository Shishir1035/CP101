#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int count = 0; count < t; ++count)
	{
		int n,m=0,wan=0,jiren=0,sol=0;
	    string str;
	    cin>>n>>str;
	    for(int i=0; i<n; i++)
	        if(str[i]=='M')
	            str[i]='1',m++;

	    for(int i=0; i<n; i++)
	        if(str[i]=='T')
	        	if(m>0)
	            	str[i]='0',m--;
	 
	    for(int i=0; i<n; i++)
	    {
	        if(str[i]=='0')
	        	jiren++;
	        if(str[i]=='1')
	            if(jiren>0)
	                wan++,jiren--;
	        if(str[i]=='T')
	        	if(wan>0)
	            	sol++, wan--;
	    }
	    if(sol==(n/3))
	    	cout<<"YES"<<endl;
	    else 
	    	cout<<"NO"<<endl;
	}
}