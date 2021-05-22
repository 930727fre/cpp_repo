#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
int n,a,f;
int j,k,m,h;

cin>>n;
for(m=1;j<=n;m++){
	cin>>a; //a ==height
	cin>>f; //f ==freqency
	
	for(j=1;j<=f;j++){  //output frequency
		
		for(k=1;k<=a;k++){
			for(h=1;h<=k;h++){
				cout<<k;
			}
			cout<<"\n";
		}
		for(k=a-1;k>=1;k--){
			for(h=k;h>0;h--){
				cout<<k;
			}
			cout<<"\n";
		}

		}
}
cout<<"\n";	//each frequency is blocked by a space

   return 0;
}

