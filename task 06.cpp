#include <iostream>
using namespace std;
int main()
{
	int den,num,f(0),r;
	cout<<"enter dividend: ";
	cin>>num;
	cout<<"enter divisor(not zero): ";
	cin>>den;
	if(den==0){
		cout<<"kaha bhi tha zero nahi likhna ";
	}
	while(num>=den){
		num-=den;
		f++;
	}
	cout<<"Answer = "<<f;
}
