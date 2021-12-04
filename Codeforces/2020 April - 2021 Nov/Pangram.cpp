#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pp pop_back
#define pi acos(-1)
#define endl '\n'
#define print(x) printf("%d\n",x)
int main()
{
	int t,i;
	string s;
	set <char> myset;
	cin >> t;
	cin >> s;
	transform(s.begin() , s.end(), s.begin(), ::tolower);
	for (i = 0; i < s.size(); ++i)
		if( (s[i]) >= 'a' && (s[i]) <= 'z' )
			myset.insert (s[i]);
	if(myset.size() == 26)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
