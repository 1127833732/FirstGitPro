#include "iostream.h"
#include "iomanip.h"
#define M 4
#define N 4
void main()
{
	int i,j,s;
	int a[M][N];
	s=0;
	cout<<"ÊäÈë16¸öÊý";
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			cin>>a[i][j];
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
		   if(i=j)
		   s+=a[i][j];
		   cout<<s<<endl;
    for(i=0;i<1;i++)
		for(j=0;j<3;j++)
		a[i][j]=a[i][j]+1;
	for(i=2;i<3;i++)
		for(j=0;j<3;j++)
			a[i][j]=a[i][j]-1;
		for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			cout<<a[i][j]<<setw(5)<<endl;
}