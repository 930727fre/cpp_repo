#include <iostream>
#include <cstdlib>
using namespace std;


int j,num,front,back;
int p[100];
void push(int a);
void out(void);

int main(void)
{
srand( time(NULL) );

while(cin>>num){
	front=0;
	back=0;
	for(j=1;j<=num;j++){
		push(j);
	}
	while(1){
		out();
		out();
		if(back==1){
			break;
		}
	}
}


   return 0;
}

void push(int a){
	if(back==100){
		cout<<"it's full"<<endl;
	}
	else{
		back++;
		p[back]=a;
	}
}

void out(void){
	if(front+1==100){
		cout<<"the whole array is used"<<endl;
	}
	else if(front+1==back){
		cout<<"the array is empty"<<endl;
	}
	else{
		front++;
	}

}

