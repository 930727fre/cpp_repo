#include <stdio.h>
#include <math.h>
struct point{
	double x;
	double y;
};

int main(){
	int N;
	int i, j, k;
	struct point p[1000];
	double max;
	double area;
	while(scanf("%d", &N)!=EOF){
		for(i=0; i<N; i++){
			scanf("%lf%lf", &p[i].x, &p[i].y);
		}
		max = 0;
		for(i=0; i<N; i++){
			for(j=i+1; j<N; j++){
				for(k=j+1; k<N; k++){
					area = fabs(((p[i].x*p[j].y + p[j].x*p[k].y + p[k].x*p[i].y)-
					(p[i].y*p[j].x + p[j].y*p[k].x + p[k].y*p[i].x))/2);			
					
					if(area > max){
						max = area;
					}
				}
			}
		}
		printf("%lf\n", max);
	}
	
	return 0;	
}
