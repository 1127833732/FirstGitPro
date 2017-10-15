#include<iostream.h>
void main()
{
int a,b;
cout<<"please enter a:";
cin>>a;
if(a<10) b=1;
if(a>=10&&a<=99) b=2;
if(a>=100&&a<=999) b=3;
if(a>=1000) b=4;
switch(b)
{
case 1: cout<<"1:"<<a<<"<10"<<endl;break;
case 2: cout<<"2:10<="<<a<<"<=99"<<endl;break;
case 3: cout<<"3:100<="<<a<<"<=999"<<endl;break;
case 4: cout<<"4:"<<a<<">=1000"<<endl;
}
}