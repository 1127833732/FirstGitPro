#include "iostream.h"
void main()
{
	int a,b,c;
	for(a=2000;a<=3000;a++)
	{
		c=1;
		if(a%400==0)
			c=1;
		else
			if(a%4==0&&a%100!=0)
				c=1;
			else
				c=0;
			if(c)
			{
				cout<<"\t"<<a;
				b++;
				if(b%10==0)
					cout<<endl;
			}
	}
	if(b%10!=0)
		cout<<endl;
}
