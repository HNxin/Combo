#include<iostream>
using namespace std;
void main()
{
	int m,n;
	cout<<"ÊäÈëm,nÖµ:";
	cin>>m>>n;
	if(m<n)
	{
		cout<<"error!"<<endl;
	}
	else
	{ 
		int c=m-n;
		for(int i = m-1;i>c;i--)
			m*=i;

		for(int i= n-1;i>0;i--)
			n*=i;
		
		cout<<"Cmn="<<m/n<<endl;
	}
}