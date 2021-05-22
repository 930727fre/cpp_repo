#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(void)
{
int a,b,c,d;   //c and d will delete the left nunbers(since it is integer)
float e,f;

while(cin>>a>>b){
	if(a==0&&b==0){
		break;
	}
	else{
		c=sqrt(a);
		d=sqrt(b);
		e=sqrt(a);
		f=sqrt(b);
	}
	if(c==e&&d==f){    //a,bЧキよ计 
		a=f-e-1;
	}
	else if(c==e||d==f){   //a,bいΤ琌Чキよ计ぃ琌 
		a=f-e;
	}
	else{					//a,bぃ琌Чキよ计 
		for(b=0;b>(f-e);b++){
			}					//b磅︽Чf-e程俱计 
			if((f-e)-(b-1)<0.5){	//癸f-e暗彼き 
				a=(f-e)+1;
			}
			else{
				a=(f-e); 
		}
		
	}
	cout<<a<<"\n";

}

   return 0;
}
