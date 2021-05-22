#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
struct xy{
	int x;int y;
};
struct xy p[4];
struct xy a,b;
int j,k,index=0,i,trash;
double temp;
double mine=100.4;
double far(struct xy,struct xy);

int main(void)
{
while(scanf("%d",&trash)!=EOF){
	cin>>i;
	mine=100.4; //mine要重製成一個蠻大的數字不然答案都依樣// 
	for(j=0;j<i;j++){
		cin>>p[j].x;
		cin>>p[j].y;
	}
	for(j=0;j<i-1;j++){
		for(k=i-1;k>j;k--){
			temp=far(p[j],p[k]);
			index++;
			if(temp<mine){
				mine=temp;
			}
		}
	}
	
	printf("%.4f\n",mine);
	}



   return 0;
}

double far(struct xy a,struct xy b){
	return sqrt(((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)));
}

