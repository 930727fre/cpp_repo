#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
int a,b;
cin>>a>>b;
if(a>b){
	cout<<100-a+b;
}
else if (b>a){
	cout<<b-a;
}


   return 0;
}



