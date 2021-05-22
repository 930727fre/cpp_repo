#include <iostream>
#include <cstdlib>
using namespace std;

long long int x[100][100],y[100][100],z[10][10];
int i,q,j,k;
int a,b,c;
void fc(void);
int main(void)
{
while(scanf("%d%d%d%d",&i,&q,&j,&k)!=EOF){
if(q!=j){
	cout<<"Error\n";
	continue;
}
else if(q==j){
	fc();
	for(a=0;a<i;a++){
		for(b=0;b<k;b++){
			z[a][b]=0;
		}
	}
}
q=0;j=0;i=0;k=0;
}
   return 0;
}

void fc(void){
	
for(a=0;a<i;a++){
	for(b=0;b<j;b++){
		cin>>x[a][b];
	}
}
for(a=0;a<j;a++){
	for(b=0;b<k;b++){
		cin>>y[a][b];
	}
}
	for(a=0;a<i;a++){
		for(b=0;b<k;b++){
			for(c=0;c<j;c++){
				z[a][b]+=x[a][c]*y[c][b];
			}
		}
	}
	
	for(a=0;a<i;a++){
		for(b=0;b<k;b++){
			cout<<z[a][b]<<" ";
		}
		cout<<"\n";
	}
	
}





