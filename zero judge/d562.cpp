#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
int i,j,q,k,index,input[100];
void clear(void);
while(1){
	cin>>i;
	for(j=0;j<i;j++){
		cin>>input[j]; 
	}
	cout<<"original";
	for(j=0;j<i;j++){
		cout<<input[j]<<" "; 
	}
	cout<<"\n";
	index=i;
	
	while(1){
	cout<<"NO."<<i-index+1<<" "; 
	for(j=index;j>0;j--){
		cout<<input[j]<<" ";
	}
	cout<<"\n";
	index--;
	if(index==0){
		break;
	}
	
	cout<<"NO."<<i-index+1<<" "; 
	for(j=i-index-1;j<i;j++){
	cout<<input[j]<<" ";
	}
	cout<<"\n";
	index--;
	if(index==0){
		break;
	}
	
	}
}
   system("pause");
   return 0;
}



