#include <iostream>
#include <string>
using namespace std;
int main()
{
	string string1;
	char string2[100];
	cout<<"enter first string \n";
	cin>>string1;
	cout<<"enter second string \n";
	cin>>string2;
	if(string1==string2){
		cout<<"both strings are equal rotating one of them  \n";
		for(int i=0,j=string1.length()-1;i<j;i++,j--){
			char temp=string2[i];
			string2[i]=string2[j];
			string2[j]=temp;
		}
		cout<<string2;
	}
	else {
		cout<<"the strings are not equal ";
	}
}
