#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
int a,b;
while(cin>>a>>b){
	while(a!=0&&b!=0){
		if(a>=b){
			a=a%b;
		}
		else if(a<b){
			b=b%a;
		}
	}
	if(a==0){
		cout<<b;
	}
	else if(b==0){
		cout<<a;
	}
}



   return 0;
}



