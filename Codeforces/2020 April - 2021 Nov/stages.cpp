// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define endl '\n'
// int main()
// {
// 	int n,k,cnt=0,sum=0;
// 	cin>>n>>k;	
// 	string str;
// 	cin>>str;
// 	sort(str.begin(), str.end());
// 	int i=0,temp;
// 	while(i<str.size()-1)
// 	{
// 		temp=(int)str[i+1] - (int)str[i];
// 		// cout<<temp<<endl;
// 		if(temp<2)
// 			{
// 				swap(str[i],str[i+1]);
// 				str.erase(str.begin()+i);
// 				// cout<<str<<" "<<i<<endl;
// 				if (str.size()==1)
// 					break;
// 			}
// 		else
// 			i++;
// 	}
// 	// cout<<str<<endl;
// 	if(str.size()<k)
// 		cout<<-1<<endl;
// 	else
// 	{
// 		for (int i = 0; i < k; ++i)
// 			sum+= (int)(str[i])-96;
// 		cout<<sum<<endl;
// 	}
// }
