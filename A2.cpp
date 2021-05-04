#include<iostream>
using namespace std;
void check(int a[],int x)
{
	for(int i=0;i<x,i++)
	{
		cout<<&a[i];
	}
}
int main()
{
	int n;
	cin>>n;
	int a[10];
	for(int i=0;i<10;i++)
	{
		cout<<&a[i];
	}
	check(a,x);
	return 0;
}
