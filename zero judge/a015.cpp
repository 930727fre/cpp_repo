#include <iostream>
#include <cstdlib>
using namespace std;

int arr[100][100];
int i,j;
int m,n;
void fc(void);
int main(void)
{
while(scanf("%d%d",&i,&j)!=EOF){
	for(m=0;m<i;m++){
		for(n=0;n<j;n++){
			cin>>arr[m][n];
		}
	}
	fc();
}

   return 0;
}

void fc(void){
	
for(n=0;n<j;n++){
		for(m=0;m<i;m++){
			cout<<arr[m][n]<<" ";
		}
		cout<<"\n";
	}

}

