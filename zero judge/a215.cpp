#include <iostream>
#include <cstdlib>
using namespace std;
int n,m;
void fc(int ,int);

int main(void)
{
while(scanf("%d%d",&n,&m)!=EOF){
	fc(n,m);
	n=0;
	m=0;
}




   system("pause");
   return 0;
}

void fc(int a,int b){
	int index;
	for(index=0;index<2000;index++){
		if((2*a+index)*index/2>b){
			cout<<index<<"\n";
			break;
		}
	}
	
}

