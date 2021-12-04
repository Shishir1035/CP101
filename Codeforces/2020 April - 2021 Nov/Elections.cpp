// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int t=1;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int a,b,c;
// 		cin>>a>>b>>c;
// 		int maxx = max(a,max(b,c));
// 		int ans1=maxx-a, ans2=maxx-b, ans3=maxx-c;
// 		if(a==maxx && b!=a && c!=a) ans1-- ;
// 		if(b==maxx && a!=b && c!=b) ans2-- ;
// 		if(c==maxx && a!=c && b!=c) ans3-- ;
// 		cout<<ans1+1<<" "<<ans2+1<<" "<<ans3+1<<endl;
// 	}
// }

// soyabean 2 litre  - 380
// holud 50gm,gura morich 100gm - 
// jira 25gm, kalofol 10gm, 
// tejpata 10 taka, dal 1 kg, 
// 2 mach 2*1kg, peeyaj 1kg, 
// kacha morich 100gm
// alu 2kg, shak 20, pepe, potol 1/2,
// bulb, register khata


// genius
// badrinath
// desi boys





























#include<bits/stdc++.h>
using namespace std;
void rev(string str,int n)
{

    if(n<0)
		return;
	cout<<str[n];
	rev(str,n-1);
	
}
int main()
{
	string str;
	getline(cin,str);
	rev(str,str.size()-1);
}




