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
	if(c==e&&d==f){    //a,b����������� 
		a=f-e-1;
	}
	else if(c==e||d==f){   //a,b�����@�ӬO��������ơA�t�@�Ӥ��O 
		a=f-e;
	}
	else{					//a,b�Ҥ��O��������� 
		for(b=0;b>(f-e);b++){
			}					//b���槹�ᬰ�@�Ӥj��f-e���̤p��� 
			if((f-e)-(b-1)<0.5){	//��f-e���|�ˤ��J 
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
