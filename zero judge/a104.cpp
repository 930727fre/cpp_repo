#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
int j,k,n,temp;
int p[1002];
 
while(cin>>n){
	for(j=1;j<=n;j++){
		cin>>p[j];
	}

for(j=1;j<=n-1;j++){
	for(k=1;k<=n-j;k++){
		if(p[k]>p[k+1]){
			temp=p[k+1];
			p[k+1]=p[k];
			p[k]=temp;
		}
	}
}

for(j=1;j<=n;j++){
	cout<<p[j]<<" ";
}
cout<<"\n";
}
   return 0;
}



