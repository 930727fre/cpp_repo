#include <iostream> 
#include <cstdlib>
using namespace std;
int main(void)
{
	int a,b;
	while(cin>>a){
		if((a%4==0)&&(a%100!=0)||(a%400==0)){
		cout<<"�|�~";
	}
	else{
		cout<<"���~";
	}
	cout<<"\n";
	}
   return 0;
}

//�褸�~�Q4�㰣�B���Q100�㰣�A�γQ400�㰣�̧Y���|�~
