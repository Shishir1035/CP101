#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
struct bitassign{
	char name[12];
	unsigned att:5;
	unsigned ct:6;
	unsigned tfe:8;
	char grade[2];
};
int main()
{
	struct bitassign tesla,edison;
	strcpy(tesla.name,"N. Tesla");
	tesla.att=30;
	tesla.ct=60;
	tesla.tfe=210;
	strcpy(tesla.grade,"A+");
	strcpy(edison.name,"T.A. Edison");
	// cout<<strcmp(tesla.name,"N. Tesla");
	edison.att=4;
	edison.ct=25;
	edison.tfe=100;
	strcpy(edison.grade,"D");
	printf("%10s    %d    %d    %d    %s\n",tesla.name,tesla.att,tesla.ct,tesla.tfe,tesla.grade);
	printf("%10s    %d    %d    %d    %s\n",edison.name,edison.att,edison.ct,edison.tfe,edison.grade);
}