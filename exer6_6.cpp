#include <iostream.h>
void main()
{
	int n,m,i,j,k;
	cout<<"??????:"<<endl;
	cin>>n;
	i=n;
	m=0;
	while(n>0)
	{
		k=n%10;
		n=n/10;
		m=m*10+k;
	}
	if(m==i)
		cout<<"????????"<<endl;
	else
		cout<<"?????????"<<endl;
}
