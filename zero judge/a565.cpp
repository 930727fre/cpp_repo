#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

int i,j,k,index,top;
char input[100];
int s[100];
void push(void);
void pop(void);
int main(void)
{
while(scanf("%d",&i)!=EOF){
	for(j=0;j<i;j++){
		index=0;
		top=-1;
		scanf("%s",&input);
		for(j=0;j<i;j++){
			if(input[j]=='p'){
				push();
			}
			else if(input[j]=='q'){
				pop();
			}
			
		}
		
		cout<<index;
		
		
	}
}

   return 0;
}


void push(void){
	top++;
	s[top]=1;
}

void pop(void){
	if(s[top]==1){
	s[top]=0;
	top--;
	index++;
	}
	else{
		cout<<"堆疊已經沒了";
	}
}
