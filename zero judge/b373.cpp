#include <iostream>
#include <cstdlib>
using namespace std;

int i,j,input[10000],q,k,temp,index;
int main(void)
{
while(scanf("%d",&i)!=EOF){
	index=0;
	for(j=0;j<i;j++){
		cin>>input[j];
	}
	for(q=0;q<i-1;q++){
		for(k=0;k<i-1-q;k++){
			if(input[k]>input[k+1]){
				temp=input[k+1];
				input[k+1]=input[k];
				input[k]=temp;
				index++;
			}
		}
	}
	cout<<"index is "<<index;
}



   return 0;
}



