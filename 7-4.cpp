#include "iostream.h"
#define N 10
void main()
{
	int i;
	int a[10];
	void fun(int *x,int n);
	for(i=0;i<10;i++)
	cin>>a[i];
	fun(a,10);
	for(i=0;i<10;i++)
	cout<<a[i]<<"  ";
	cout<<endl;
} 
void fun(int *x,int n)
{
	int temp,*p,*q,m;
	p=x;
	q=x+10-1;
	m=9/2;
	for(;p<=x+m;p++,q--)
	{
		temp=*p;
		*p=*q;
		*q=temp;
	}
}
	

