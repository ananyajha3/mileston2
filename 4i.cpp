#include<stdio.h>
using namespace std;
int main()
{
	
	for (int i=0; i<=5;i++)
	{
		for (int j=0; j <=2*4;j++)
		{
			if(j>5-(i-1)&& j<=5+(i-1))
             
			 cout<<"*";
		
            {
			 else
             cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
}
