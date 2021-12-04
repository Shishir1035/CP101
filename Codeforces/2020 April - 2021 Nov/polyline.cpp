// https://codeforces.com/gym/102900/problem/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

double distance(int a,int b,int c,int d)
{
	double p=sqrt(pow(a-c,2) + pow(b-d,2));
	return p;
}

int main()
{
	double t,arr[210][2];
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int a,b;
		cin>>a>>b;
		arr[i][0]=a;
		arr[i][1]=b;
	}
	double maxx=distance(arr[0][0],arr[0][1],arr[1][0],arr[1][1]);
	double sum=maxx;
	double minn = maxx;
	for (int j = 1; j < t-1; ++j)
	{
		double d=distance(arr[j][0],arr[j][1],arr[j+1][0],arr[j+1][1]);
		sum+= d;
		if(d>maxx)
			maxx=d;
		if(d<minn)
			minn=d;
	}
	cout<<sum-2*maxx + minn;
}