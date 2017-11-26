#include "stdio.h"
#include "string.h"
void main()
{
	int i,j;
	char str1[20],str2[20],str3[50];
	gets(str1);
	gets(str2);
	for(i=0;i<20;i++)
		str3[i]=str1[i];
	for(j=i;j<50;j++)
		str3[j]=str2[i];
	for(i=0;i<50;i++)
		puts(str3[i]);
}
