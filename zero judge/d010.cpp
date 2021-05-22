#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
int a,b,ans;
while(cin>>a){
	ans=0;
	for(b=1;b<a;b++){	//猔種肈ヘ琌糶弧埃计┮b<a薄猵禲硂for loop 
		if(a%b==0){
			ans+=b;
		}
	}
	if(ans>a){
		cout<<"计";
	}
	else if(ans<a){
		cout<<"莲计"; 
	}
	else if(ans==a){
		cout<<"Ч计";
	}
	cout<<"\n";

}



   return 0;
}

