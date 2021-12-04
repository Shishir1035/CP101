#include<stdio.h>
#include<string.h>
#define ll long long
int arr[60000];
int leapyear(int year)
{
	return (year%4==0&&year%100!=0)||(year%400==0);
}
int main()
{
	int d,m,y,cnt=0;
	scanf("%d %d %d",&d,&m,&y);
	arr[2018]=1;
	for (int i = 2019; i <= y; ++i)
	{	
		if (!leapyear(i))
			arr[i]= (arr[i-1] + 1) % 7;
		else if (leapyear(i))
			arr[i] = (arr[i-1] + 2) % 7;

		if(arr[i]==1)
			cnt++;
	}
	if ((m==5 && d>=12)|| m>5)
		printf("%d\n", cnt+1);
	else
		printf("%d\n", cnt);
}