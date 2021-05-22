#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;

void male(int ,int,int );
void female(int ,int,int);
int a,b,c;
int main(void)
{
int input,y,x;
while(scanf("%d",&input)){
	for(y=0;y<input;y++){
		cout<<"for loop turn: "<<y+1<<"\n";
		cin>>x;
		cin>>a>>b>>c;
		if(x==0){
			cout<<"is female"<<"\n";
			female(a,b,c);
		}
		else if(x==1){
		cout<<"is male"<<"\n";
			male(a,b,c);
		}
		cout<<"\n";
	}
}
   system("pause");
   return 0;
}

void male(int i,int j,int k){
	cout<<(double) 13.7*k+5*j-6.8*i+66;
}

void female(int i,int j,int k){
	cout<<(double) 9.6*k+1.8*j-4.7*i+665;
}

