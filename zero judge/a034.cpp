#include <iostream>
#include <cstdlib>
using namespace std;
int input,index,lasting,fc( int),root,note;
void print(void);
int main(void)
{
cin >>input;
if((input%2)==0)
{fc(input);
}

else if((input%2)==1)
{fc(input-1);
note=3;}

print();

   system("pause");
   return 0;
}

fc(int a)
{
	for(index=0;root==1;index++)
	{
		root=(a/2);
	}
}

void print(void)
{	for(root=0;root<index;root++)
	{cout<<"1";}
	
	if(note==3)
	{cout<<"1";
	}
	else 
	{cout<<"0";
	}
}
	

