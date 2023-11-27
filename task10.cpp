#include <iostream>
using namespace std;
int main()
{
	int n;
	int array[n];
	int i,j,s,k;
	char x;
	do{
		cout<<"Input element to array: "<<endl;
		cin>>array[n];
		n++;
		cout<<"Do you want to continue. Input y if yes"<<endl;
		cin>> x;
	}while(x=='y');
	for (int step = 0; step < n; step++) {
      
    
    for (int i = 0; i < n - step; i++) {

      
      if (array[i] > array[i + 1]) {

        
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
  for(int l = 0; l<n; l++){
		cout<<array[l]<<' ';
	}
}
