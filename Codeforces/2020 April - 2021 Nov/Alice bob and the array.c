 #include<stdio.h>
 #define ll long long
 int main()
 {
 	int t;
 	scanf("%d",&t);
 	for (int k = 0; k < t; ++k)
 	{
 		ll n,sum=0,final=-1;
 		scanf("%lld",&n);
 		ll v[31000];
 		for (int i = 0; i < n; ++i)
 		{
 			ll a;
 			scanf("%lld",&a);
 			v[i]=a;
 			if(a>=0)
 				final=i,sum+=a;
 		}
 		ll cnt=0, j=0, rap=1;
 		
 		while(j<=final)
 		{
 			if(v[j]<0)
 			{
 				while(v[j]<0)
 					j++;

 				if(rap!=1 && j!= final-1)
 					cnt++;
 				// printf("p %lld %lld\n",j,cnt );
 				continue;
 				
 			}
 			else if (v[j]>=0)
 			{
 				rap=0;
 				while(v[j]>=0)
 					j++;
 				// printf("q %lld %lld\n",j,cnt );
 				continue;
 			}
 		}
  		printf("Case %d: %lld %lld\n",k+1,sum,cnt );
 	}
 }