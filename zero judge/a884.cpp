#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
int j,q,a,b,all[20];

cin>>q;
for(j=0;j<q;j++)
{
	cin>>a>>b;
	all[j]=a-b;
} 
for(j=0;j<q;j++)
{cout<<all[j]<<'\n';
}
   system("pause");
   return 0;
}



