#include <iostream>
using namespace std;
int main()
{
	int n=0,i;
	int array[]={1,2,3,4,5};
	int val[50];
	char x;
	
	
	do{
		cout<<"Input element to add: "<<endl;
		cin>>val[n];
		n++;
		cout<<"Do you want to continue. Input y if yes"<<endl;
		cin>> x;
	}while(x=='y');
	
	int newArray[5+n];
	
	for(int i =0; i<5;i++){
		newArray[i] = array[i];
	}
	
	for(int j = 5,k=0; k< n;j++,k++){
		newArray[j]= val[k];
	}
	
	for(int l = 0; l<5+n; l++){
		cout<<newArray[l]<<' ';
	}
	
	
	
}
