#include <iostream.h>
void main()
{
	int i,a[20]={1,1,0};
	for(i=2;i<=19;i++)
		a[i]=a[i-1]+a[i-2];
	cout<<"Fibonacci��y��D��??��20??��?��o"<<endl;
	for(i=0;i<=19;i++)
		cout<<a[i]<<" ";
	    cout<<endl;
}