#include <iostream>
#include <cstdlib>
using namespace std;
int a[20000],i,j;
int main(void)
{
while(scanf("%d",&i)!=EOF){
a[0]=a[1]=a[2]=1;
for(j=3;j<i;j++){
	a[j]=a[j-1]+a[j-2]+a[j-3];
}
cout<<a[i-1]%10007<<"\n";
for(j=0;j<i;j++){
	a[j]=0;
}i=0;}
   return 0;
}



