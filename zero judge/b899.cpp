#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;
struct xy{
	int x;int y;
};
struct xy p[4];
struct xy a,b;
int j,k;
double ab,ac;
double far(struct xy,struct xy);
int main(void)
{
while(scanf("%d",&p[0].x)!=EOF){
	cin>>p[0].y;
	for(j=1;j<3;j++){
		cin>>p[j].x;
		cin>>p[j].y; 
	}
	ab=far(p[0],p[1]);
	ac=far(p[0],p[2]);
	if(ab==ac){
		p[3].x=(p[2].x+p[1].x-p[0].x);
		p[3].y=(p[2].y+p[1].y-p[0].y);
	}
	else if(ab>ac){
		p[3].x=(p[0].x+p[1].x-p[2].x);
		p[3].y=(p[0].y+p[1].y-p[2].y);
	}
	else if(ac>ab){
		p[3].x=(p[0].x+p[2].x-p[1].x);
		p[3].y=(p[0].y+p[2].y-p[1].y);
	}
	cout<<p[3].x<<" "<<p[3].y<<"\n";
}



   return 0;
}

double far(struct xy a,struct xy b){
	return sqrt(((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)));
}

