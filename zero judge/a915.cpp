#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
struct xy{ 
	int x;
	int y;
};
struct xy p[1000];
struct xy temp;
int i,j,k;
while(scanf("%d",&i)!=EOF){
for(j=0;j<i;j++){
	cin>>p[j].x;
	cin>>p[j].y;
}

for(j=0;j<i-1;j++){
	for(k=0;k<i-j-1;k++){
		if(p[k].x>p[k+1].x){
			temp=p[k];
			p[k]=p[k+1];
			p[k+1]=temp;
		}
	}
}
for(j=0;j<i-1;j++){
	for(k=0;k<i-j-1;k++){
	if(p[k].x==p[k+1].x){
		if(p[k].y>p[k+1].y){
			temp=p[k];
			p[k]=p[k+1];
			p[k+1]=temp;	
		}
	}
}
}

for(j=0;j<i;j++){
	cout<<p[j].x;
	cout<<" ";
	cout<<p[j].y;
	cout<<"\n";
}

}
   return 0;
}







