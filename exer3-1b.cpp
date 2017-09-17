#include <iostream.h>
void main()
{
	int x;
	cout<<"Please input x:"<<endl;
	cin>>x;
	if(x>=1000)
	    cout<<":数值1000以上"<<endl;
	else
		if(x>=100)
	        cout<<":数值100~999"<<endl;
	    else
			if(x>=10)
				cout<<":数值10~99"<<endl;
			else
				cout<<":数值10"<<endl;
}

