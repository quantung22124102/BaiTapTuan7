#include<iostream>
using namespace std;
int timkiem(int *a,int x,int max,int min)
{
	int s=(max+min)/2;
	if(x==a[s])
	{
		return s+1;
	}
	if(x>a[s])
	{
		return timkiem(a,x,s,max);
	}
	if(x<a[s])
	{
		return timkiem(a,x,s,min);
	}
}
int main()
{
	int a[]={1,2,3,4,5,6,7,8,9},x,*y;
	cin>>x;
	y=a;
	int n=timkiem(x,8,0,y);
	cout<<"Vi tri: "<<n;
	return 0;
}
