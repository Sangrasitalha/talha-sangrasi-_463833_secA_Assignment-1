#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int i,j;
	string sen,res;
	cout<<"enter a sentence \n";
	cin>>sen;
	for(i=0;i<=sen.length();i++){
		for(j=0;j<=i;j++){
		if(sen[i]==sen[j]){
		break;	
	}	
	}
	if(i==j){
		res+=sen[i];
	}
	}
	cout<<res;
}
