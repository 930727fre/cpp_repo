#include <iostream>
#include <cstdlib>
using namespace std;
int fc(int);
int i,j,k=1;
int index=1;
int main(void)
{
while(scanf("%d",&i)!=EOF){
	if(i>=0){
	fc(1);
	cout<<"Case "<<index<<": "<<j<<"\n";
	i=0;
	j=0;
	k=1;
	index++;}
	else{
		break;
	}
}
   return 0;
}

int fc(int k){
	if(k<i){
		fc(2*k);
		j++;
	}
}




