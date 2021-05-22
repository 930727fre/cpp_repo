#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
int t,a,b,j,k,sum;
cin>>t;
for(j=1;j<=t;j++){
	sum=0;
	cin>>a>>b;
	for(k=a;k<=b;k++){
		if(k%2==1){
			sum+=k;
		}
	}
	cout<<"Case "<<j<<": "<<sum<<"\n";
}

   return 0;
}




