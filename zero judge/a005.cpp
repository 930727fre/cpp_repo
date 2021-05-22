#include <iostream>
#include <cstdlib>
using namespace std;
int n,ap(int),gp(int),a,b,c,d,i,j,e;
int input [50][4];

int main(void)
{
cin>>n;
for(i=0;i<n;i++){
	for(j=0;j<4;j++){
	cin>>input[i][j];
}}
for(i=0;i<n;i++)
{
		a=input[i][1];
		b=input[i][2];
		c=input[i][3];
		d=input[i][4];
		if((a-b)==(c-d))
		{e=(b+3*(d-c)); 
		ap(1);
		}
		else if((a/b)==(c/d))
		{e=(b*(d/c)*(d/c));
		gp(1);
		}
		
		
}
   system("pause");
   return 0;
}

int ap(int){
	
	cout<<a<<b<<c<<d<<e;
}

int gp(int){

		cout<<a<<b<<c<<d<<e;

}

