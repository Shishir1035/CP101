#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n, start[2][2], l=0;;
		char stringz[500][500];
		scanf("%d",&n);
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < n; ++j)
			{
				char c;
				scanf("%c",&c);
				stringz[i][j]=c;
				if (stringz[i][j]=='*')
					start[l][0]=i, start[l][1]=j, l++;
			}

		if(start[0][0] != start [1][0] && start[0][1]!= start[1][1])
			stringz[ start[0][0] ] [ start[1][1] ]='*',stringz[ start[1][0] ] [ start[0][1] ]='*';

		else if(start[0][0] != start [1][0] && start[0][1] == start[1][1])
			{
				if (start[0][1]<n-1)
					stringz[ start[0][0] ] [ start[0][1] + 1 ]='*' , stringz[ start[1][0] ] [ start[1][1] +1 ]='*';
				else
					stringz[ start[0][0] ] [ start[0][1] - 1 ]='*' , stringz[ start[1][0] ] [ start[1][1] -1 ]='*';
			}

		else if(start[0][0] == start [1][0] && start[0][1] != start[1][1])
			{
				if (start[0][0]<n-1)
					stringz[ start[0][0] +1 ] [ start[0][1] ]='*' , stringz[ start[1][0] +1] [ start[1][1] ]='*';
				else
					stringz[ start[0][0] -1 ] [ start[0][1] ]='*' , stringz[ start[1][0] -1 ] [ start[1][1]]='*';
			}
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
				printf("%c",stringz[i][j]);
			printf("\n");
		}

	}
}