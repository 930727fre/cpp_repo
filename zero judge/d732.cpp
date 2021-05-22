#include <iostream>
#include <cstdlib>
using namespace std;

int seq[100000],ask[100],n,k;
int i,j;
void fc(void);
int main(void)
{
cin>>n>>k;
for(i=0;i<n;i++){
	cin>>seq[i];
}
for(j=0;j<k;j++){
	cin>>ask[j];
}


fc();
   return 0;
}

void fc(void){
	int token=0;
	i=0;
	j=0;
 	for(j=0;j<k;j++){
 		token=0;
 		for(i=0;i<n;i++){
 			if(seq[i]==ask[j]){
 				cout<<i+1<<"\n";
 				token++;
 				break;
			 }
		 }
 		if(token==0){
 			cout<<"0"<<"\n";
		 }
	 }
} 
