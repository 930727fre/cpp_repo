#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
int a,b,ans;
while(cin>>a){
	ans=0;
	for(b=1;b<a;b++){	//�`�N�D�جO�g�����F�ۤv�H�~���]�ơA�ҥHb<a�����p�U�]�o��for loop 
		if(a%b==0){
			ans+=b;
		}
	}
	if(ans>a){
		cout<<"�ռ�";
	}
	else if(ans<a){
		cout<<"����"; 
	}
	else if(ans==a){
		cout<<"������";
	}
	cout<<"\n";

}



   return 0;
}

