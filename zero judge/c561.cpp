#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
int n,j,k,temp,max;
int p[100001];
cin>>n;
for(j=1;j<=n;j++){
	temp=0;
	cin>>p[j];
	while(p[j]>10){
		temp+=p[j]%10;
		temp*=10;
		p[j]/=10;
	}
	temp+=p[j];
	p[j]=temp;
}
max=0;
for(j=1;j<=n;j++){
	if(p[j]>max){
		max=p[j];
	}
}
cout<<max;

   return 0;
}



