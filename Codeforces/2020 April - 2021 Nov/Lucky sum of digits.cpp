// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long
// // #define endl '\n'
// // int main()
// // {
// // 	ios_base::sync_with_stdio(false);
// // 	cin.tie(NULL);
// // 	int n,flag=0;
// // 	cin>>n;
// // 	int four,sev=n/7;
// // 	if(n<7)
// // 	{
// // 		if(n%4==0) 
// // 		{
// // 			for (int i = 0; i < n/4; ++i)
// // 				cout<<4;
// // 			cout<<endl;
// // 			return 0;
// // 		}
// // 	}
// // 	while(sev)
// // 	{	
// // 		int temp=n-sev*7;
// // 		if(temp%4==0)
// // 			{
// // 				flag=1,four=temp/4;
// // 				break;
// // 			}
// // 		sev--;
// // 		if(sev==0 && n%4==0)
// // 			flag=1,four=n/4;
// // 	}
// // 	if(flag)
// // 	{
// // 		for (int i = 0; i < four; ++i)
// // 			cout<<4;
// // 		for (int i = 0; i < sev; ++i)
// // 			cout<<7;
// // 		cout<<endl;
// // 	}
// // 	else
// // 		cout<<-1<<endl;
// // }

// // erasing from map
// #include <iostream>
// #include <map>

// int main ()
// {
//   std::map<char,int> mymap;
//   std::map<char,int>::iterator it;

//   // insert some values:
//   mymap['g']=10;
//   mymap['b']=20;
//   mymap['z']=30;
//   mymap['d']=40;
//   mymap['x']=50;
//   mymap['f']=60;
//   mymap['c']=100;

//   // it=mymap.find('b');
//   // mymap.erase (it);                   // erasing by iterator

//   // mymap.erase ('c');                  // erasing by key

//   // it=mymap.find ('e');
//   // mymap.erase ( it, mymap.end() );    // erasing by range

//   // // show content:
//   for (it=mymap.begin(); it!=mymap.end(); ++it)
//     std::cout << it->first << " => " << it->second << '\n';

//   return 0;
// }










#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int dd,mm,yyyy;
	cin>>dd>>mm>>yyyy;
	string lebro[]={"January","February","March","April","May","June",
	"June","July","August","September","October","November","December"};
	cout<<lebro[mm-1]<<" "<<dd<<", "<<yyyy<<endl;
}








