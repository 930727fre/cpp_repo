#include <iostream>
#include <cstdlib>
using namespace std;
void rotate(void); void turn(void);void check(void); 
int j,k,temp,vec[10][10],vec2[10[10]];
int r,c,m,tokenm;

int main(void)
{while(scanf("%d%d%d",&r,&c,&m)!=EOF){
for(j=0;j<r;j++){
	for(k=0;k<c;k++){
		cin>>vec[j][k];
	}
}
int yp;
for(tokenm=0;tokenm<m;tokenm++){
	cout<<"input陣列後面的判斷數字";
	cin>>yp;
	if(yp==0){
		rotate();
	}
	else if (yp==1){
		turn();
	}
	else {cout<<"error 這裡1";
	}
}

r=0;c=0;m=0;tokenm=0;yp=0;
}
cout<<j+1<<k+1;
   system("pause");
   return 0;
}

void rotate(void){
	cout<<"rotate() start"<<"\n";
	int x,y;
	for(x=0;x<j;x++){
		for(x=0;x<k;x++){
			[x+2][]=vec[]
		}
	}
	
		
	temp=j;  /* j k要互換*/ 
	j=k;
	k=temp;
}

void turn(void){
	cout<<"turn() start";
}

void check(void){/*把vec2處存回vec*/ 
	
	
}
