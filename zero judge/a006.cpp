#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main(void)
{
	int a,b,c,rootn,rootp,sqr;
	cin >>a>>b>>c;
	sqr = (b*b-4*a*c);               //http://it-easy.tw/sqrtpow/
	rootp = (-b+sqrt(sqr))/(2*a);                 //https://miro.medium.com/max/447/1*QoI_3C8MgeGfyftSMBorEg.png
	rootn = (-b-sqrt(sqr))/(2*a);
	if(sqr<0){
	cout<<"No real root";}
	else if(sqr==0)
	cout <<"Two same roots x="<<rootp;
	else if(sqr>0)
	cout <<"Two different roots x1="<<rootp<<" , x2="<<rootn;    //注意有空格 


   return 0;
}



