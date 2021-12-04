#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string str1,str2;
	getline(cin,str1);
	getline(cin,str2);

	str1.erase(0, str1.find_first_not_of('0'));
	str2.erase(0, str2.find_first_not_of('0'));
	 // cout<<str1.size()<<" "<<str2.size()<<endl;
	if (str1.size()<str2.size())
		cout<<"<"<<endl;
	else if (str1.size()>str2.size())
		cout<<">"<<endl;
	else
		{
			if (str1 > str2)
				cout<<">"<<endl;
			else if (str1 < str2)
				cout<<"<"<<endl;
			else if (str1==str2)
				cout<<"="<<endl;
		}

}