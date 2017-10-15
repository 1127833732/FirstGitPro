#include "iostream.h"
void main()
{
	int a,b,c;
	for(a=1;a<=99;a++)
	{
		b=a*a-a;
		if(b%10==0&&b%100==0)
			cout<<a<<endl;
	}
}