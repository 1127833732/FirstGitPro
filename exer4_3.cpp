#include "iostream.h"
void main()
{
	int a,b;
	b=0;
	cin>>a;
	while(a>1)
	{
		if(a%2==0)
			a=a/2;
		else
		    a=3*a+1;
		cout<<"¡ú"<<a;
		b++;
		if(b%20==0)
			cout<<endl;
	}
	if(b%20!=0)
	    cout<<endl;
		cout<<"²½ÖèÊýÎª"<<b<<endl;
}