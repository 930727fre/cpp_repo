#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int yee,x,y,i,j;
void fc(int ,int);
int main(void)
{
cin>>i;
for(j=0;j<i;j++){
	cin>>x>>y;
	fc(x,y);
}
   return 0;
}

void fc(int a,int b){
	int total=100-(a+b);
	if(0<total<=30){
		cout<<"sad!";
	}
	else if (30<total<=60){
		cout<<"hmm~~";
	}
	else if (60<total<100){
		cout<<"happyyummy";
	}
	else {
		cout<<"evil!!";
	}	
	cout<<"\n"<<total;
	
}

