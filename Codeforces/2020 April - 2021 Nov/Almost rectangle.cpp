#include<iostream>
using namespace std;
char stringzz[500][500];
void print(int n)
{
	for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
				cout<<stringzz[i][j];
			cout<<endl;
		}
}
int main()
{
	int count;
	cin>>count;
	for (int x = 0; x < count; ++x)
	{
		int n;
		
		int start[2][2], l=0;

		cin>>n;
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < n; ++j)
			{
				char c;
				cin>>c;
				stringzz[i][j]=c;
				if (stringzz[i][j]=='*')
				{
					start[l][0]=i;
					start[l][1]=j;
					l++;
				}
			}

		if(start[0][0] != start [1][0] && start[0][1]!= start[1][1])
			stringzz[ start[0][0] ] [ start[1][1] ]='*',stringzz[ start[1][0] ] [ start[0][1] ]='*';

		if(start[0][0] != start [1][0] && start[0][1] == start[1][1])
			{
				if (start[0][1]<n-1)
					stringzz[ start[0][0] ] [ start[0][1] + 1 ]='*' , stringzz[ start[1][0] ] [ start[1][1] +1 ]='*';
				else
					stringzz[ start[0][0] ] [ start[0][1] - 1 ]='*' , stringzz[ start[1][0] ] [ start[1][1] -1 ]='*';
			}

		if(start[0][0] == start [1][0] && start[0][1] != start[1][1])
			{
				if (start[0][0]<n-1)
					stringzz[ start[0][0] +1 ] [ start[0][1] ]='*' , stringzz[ start[1][0] +1] [ start[1][1] ]='*';
				else
					stringzz[ start[0][0] -1 ] [ start[0][1] ]='*' , stringzz[ start[1][0] -1 ] [ start[1][1]]='*';
			}

		print(n);

	}
}