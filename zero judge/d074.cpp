#include <iostream>
#include <cstdlib>
using namespace std;
int n,i,big,k;
int main(void)
{
while(scanf("%d",&n)!=EOF){
	k=0;
	big=0;
	for(i=0;i<n;i++){
		cin>>k;
		if(k>big){
			big=k;
		}
	}
	cout<<big<<"\n";
}
   return 0;
}



