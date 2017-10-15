#include<iostream.h>
void main()
{
   int a;
cout<<"please enter a:"<<endl;
cin>>a;
if(a<10)
cout<<"1:"<<a<<"<10"<<endl;
else
if(a>=10&&a<=99)
cout<<"2:10<="<<a<<"<=99"<<endl;
else
if(a>=100&&a<=999)
cout<<"3:100<="<<a<<"<=999"<<endl;
else
if(a>=1000)
cout<<"4:"<<a<<">=1000"<<endl;
}