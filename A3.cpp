#include<iostream>
using namespace std;
int count_even(int a[],int* x)
{
	int n=0;
	for(int i=0;i<(*x);i++)
	{
		if(a[i]%2==0)
		{
			n++;
		}
	}
	return n;
}
int main()
{
	int m;
	cin>>m;
	cout<<"nhap vao tham so: "<<endl;
	cout<<"nhap vao mang: "<<endl;
	int a[100];
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	count_even(&m,a);
	cout<<"so so chan trong mang: "<<endl;
	cout<<count_even(&m,a);
}
