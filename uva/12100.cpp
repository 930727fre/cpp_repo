#include <iostream>
#include <cstdlib>
#include <ctime>
#include <queue>
using namespace std;

int main(void)
{
srand(time(NULL));
int j,k,m;
int num,temp,max,cases,pos,ans;	
int pri[9];		//how many elements of that priority still left
bool finished=false;
queue<int> qu;

cin>>cases;
for(j=1;j<=cases;j++){
	max=0;
	ans=0;
	for(m=1;m<=9;m++){		//clean the priority array
		pri[m]=0;
	}
	
	cin>>num>>pos;		//caution: 0<=pos<=num-1
	pos++;				//caution: 0<=pos<=num-1
	for(k=1;k<=num;k++){
		cin>>temp;
		if(temp>max){
			max=temp;
		}
		pri[temp]++;
		qu.push(temp);
	}
	
	while(qu.size()!=0){
		while(pri[max]==0){		//ensure max is the biggest
			max--;
		}
		
		if(qu.front()<max){
			if(1==pos){
				pos=qu.size();
			}
			else{
				pos--;
			}
			qu.push(qu.front());
			qu.pop();
		}
		else{
			if(1==pos){
				ans++;		//printing itself also takes time
				finished=true;
			}
			cout<<qu.front();
			qu.pop();
			pri[max]--;
			if(finished==false){
				ans++;
			}
		}
	}
	
	cout<<"ans is "<<ans<<endl;
	

}


   return 0;
}



/*header:C:\Program Files\Dev-Cpp\MinGW64\lib\gcc\x86_64-w64-mingw32\4.9.2\include
#include <bits/stdc++.h>
#include <algorithm>*/

