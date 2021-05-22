#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

long long unsigned a,b,k,ans;
long double fac(long long unsigned x);	//factorial
long double u;

int main(void)	//測資20 5 100 10 200 15
 
{
while(cin>>b>>a){
	u=fac(b)-(fac(a)+fac(b-a));
	ans=u;	//因為ans為int 所以會自動去小數點 
	if(ans==u){
		cout<<ans;
	}
	else{
		cout<<ans+1;
	}
	cout<<"\n";
}
   return 0;
}

long double fac(long long unsigned x){
	long double c=0;		//c為x階層取十為底的log值 
	for(k=1;k<=x;k++){
		c+=log10(k);
	}
	return c;
}




