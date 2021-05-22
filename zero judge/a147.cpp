#include <iostream>
#include <cstdlib>
using namespace std;

int n,m,index;
void fc(int);
int main(void)
{
while(scanf("%d",&n)!=EOF){
	if(n==0){
		break;
	}
	fc(n);
	n=0;m=0;index=0;
}
   return 0;
}


void fc(int input){
	for(m=1;m<input;m++){
		if(m%7==0){
			continue;
		}
		cout<<m<<" ";
	}
	cout<<"\n";
}

