 #include<bits/stdc++.h>
 using namespace std;
 #define ll long long
 #define endl '\n'
 int main()
 {
 	int t;
 	scanf("%d",&t);
 	for (int k = 0; k < t; ++k)
 	{

 		ll n,sum=0, final=-1, start=-1, lol=1;
 		cin>>n;
 		vector<int> v(n);
 		for (int i = 0; i < n; ++i)
 		{
 			int a;
 			cin>>a;
 			v[i]=a;
 			if (a>0 && lol)
 				start=i, lol=0;
 			if(a>=0 && a!=0)
 				final = i, sum+=a;
 		}
 	
 		if(final==-1)
 			{
 				sort(v.begin(), v.end());
 				printf("Case %d: %d 0\n",k+1,v[n-1]);
 				continue;
 			}
 		ll cnt=0, j=start, rap=1;
 		
 		while(j<=final)
 		{
 			if(v[j]<=0)
 			{
 				while(v[j]<=0)
 					j++;

 				if(rap!=1)
 					cnt++;
 				
 			}
 			else if (v[j]>=0)
 			{
 				rap=0;
 				while(v[j]>=0)
 					j++;
 			}
 		}
 		printf("Case %d: %lld %lld\n",k+1,sum,cnt );
 	}
 	return 0;
 }