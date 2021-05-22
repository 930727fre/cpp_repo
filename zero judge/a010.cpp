#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int input,i,j=0,fc(int),a[20][20],index,total;
void print(void);
int main(void)
{
cin>>input;
fc(input);
print();
   system("pause");
   return 0;
}
/*i¬°°£¼Æ*/ 
int fc(int){
	for(i=1;i<=sqrt(input);i++)
	{
		if((input%i)==0)
		{j=0;
		while(input%i==0)
		{
			input=input/i;
			a[i][j++];
		}	
		}
	}
}

	
void print()
{
	for(index=0;index<i-1;i++)
	{
		j=0;
		cout<<i<<"^"<<a[i][j]<<"*";
		j++;
	}
	cout<<i+1;
}

