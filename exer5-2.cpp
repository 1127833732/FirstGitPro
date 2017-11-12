#include <iostream.h>
double S=0,s;
int i,n,sum;
f()
{
	for (i=1;i<=n;i++)
	{
		sum+=i;
		s=1/(double)sum;
		S+=s;
	}
	return (S);
}
void main()
{
	cout<<"请输入一个正整数n:"<<endl;
	cin>>n;
	f();
	cout<<S<<endl;
}

