#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
int n,a,b,c;
int j,k,temp;
bool ans;

cin>>n;

for(j=1;j<=n;j++){
	if(j!=1){
		cout<<endl;
	}
	ans=0;
	cin>>a>>b>>c;
	for(k=1;k<(b-a);k++){
		temp=a+k;
		if(temp%c!=0){
			if(ans==0){
				cout<<temp;
			}
			else{
				cout<<" "<<temp;
			}
			ans=1;
		}
		
	}
	if(ans==0){
		cout<<"No free parking spaces.";
	}
}



   return 0;
}
//3 5 10 3 6 20 7 100 107 5
//2 49 50 10 20 100 1

/*header:C:\Program Files\Dev-Cpp\MinGW64\lib\gcc\x86_64-w64-mingw32\4.9.2\include
#include <bits/stdc++.h>
#include <algorithm>*/

