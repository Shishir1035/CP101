 #include<bits/stdc++.h>
 using namespace std;
 #define ll long long
 #define endl '\n'
 int main()
 {
 	int a,b,c;
 	cin>>a>>b>>c;
 	if(a==b && b==c && c==a)
 		cout<<3*a<<endl;
 	else if(c>=a+b)
 		cout<<2*(a+b)<<endl;
 	else if(c<a+b)
 	{
 		int minn=min(2*(min(a,b)+c) , a+b+c);
 		cout<<minn<<endl;
 	}
 }