#include "iostream.h"
#include "math.h"
void main()
{
	int a,b,c,x,s;
	cin>>a>>b>>c;
	s=(a+b+c)/2;
	x=(sqrt(s*(s-a)*(s-b)*(s-c)));
	cout<<x<<endl;
}
