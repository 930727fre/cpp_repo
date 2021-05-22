#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(void)
{
char w[10000];
int a,b,leng,max,maxa;
int ans[10000];
string str;

while(cin>>str){
	leng=str.length();
	b=0;
	

	w[0]=str[0];
	ans[0]++;
	
	for(a=1;a<=leng;a++){
		if(str[a]==str[a-1]){
		ans[b]++;
		}
		else{
			b++;
			w[b]=str[a];
			ans[b]++;
		}
	}
	
	max=0;
	maxa=0;
	
	for(a=0;a<=b;a++){
		if(ans[a]>max){
			maxa=a;
			max=ans[a];
		}
	}
	
	cout<<w[maxa]<<" "<<max<<"\n";
	
	for(a=0;a<=leng;a++){
		ans[a]=0; //clear the waste value so that next round wont go wrong
	}
}
   return 0;

}

