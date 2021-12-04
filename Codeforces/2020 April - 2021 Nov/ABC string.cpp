#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'

bool check(string s){
	stack<char>st;
		for(auto ch : s){
			if(ch=='(')
				st.push('(');
			else if(!st.empty() && st.top()=='(') 
				st.pop();
			else
				st.push(')');
		}
	return st.empty();
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
       	string s,s1;
       	cin >> s;
       	s1 = s;
 
       	for( int i=0 ; i<s.size() ; i++ )       	
		{
			if(s[i]=='A')		s1[i] = '(';
			else if(s[i]=='B')	s1[i] = '(';
			else				s1[i] = ')';
		}
		if(check(s1)){
			cout<<"Yes"<<endl;
			continue;
		}
 
		for( int i=0 ; i<s.size() ; i++ )       	
		{
			if(s[i]=='A')		s1[i] = '(';
			else if(s[i]=='B')	s1[i] = ')';
			else				s1[i] = '(';
		}
		if(check(s1)){
			cout<<"Yes"<<endl;
			continue;
		}
 
		for( int i=0 ; i<s.size() ; i++ )       	
		{
			if(s[i]=='A')		s1[i] = ')';
			else if(s[i]=='B')	s1[i] = '(';
			else				s1[i] = '(';
		}
		if(check(s1)){
			cout<<"Yes"<<endl;
			continue;
		}
 
 
		for( int i=0 ; i<s.size() ; i++ )       	
		{
			if(s[i]=='A')		s1[i] = '(';
			else if(s[i]=='B')	s1[i] = ')';
			else				s1[i] = ')';
		}
		if(check(s1)){
			cout<<"Yes"<<endl;
			continue;
		}
 
		for( int i=0 ; i<s.size() ; i++ )       	
		{
			if(s[i]=='A')
				s1[i] = ')';
			else if(s[i]=='B')
				s1[i] = '(';
			else
				s1[i] = ')';
		}
		if(check(s1)){
			cout<<"Yes"<<endl;
			continue;
		}
 
		for( int i=0 ; i<s.size() ; i++ )       	
		{
			if(s[i]=='A')
				s1[i] = ')';
			else if(s[i]=='B')
				s1[i] = ')';
			else
				s1[i] = '(';
		}
		if(check(s1)){
			cout<<"Yes"<<endl;
			continue;
		}
 
		cout<<"No"<<endl;
	}
    return 0;
}