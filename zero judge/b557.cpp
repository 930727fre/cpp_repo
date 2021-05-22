#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
int t,n,j,k,a,b,ans;
int x,y,z;
int p[102];

cin>>t;
for(j=1;j<=t;j++){
	cin>>n;
	ans=0;
	for(k=1;k<=n;k++){
		cin>>p[k];
	}
	for(k=1;k<=n-2;k++){
		for(a=k+1;a<=n-1;a++){
			for(b=a+1;b<=n;b++){
				x=p[k]*p[k];
				y=p[a]*p[a];
				z=p[b]*p[b];
				if(x+y==z){
					ans++;
				}
				else if(x+z==y){
					ans++;
				}
				else if(y+z==x){
					ans++;
				}
			}
		}
	}
	cout<<ans<<"\n";
}

   return 0;
}



