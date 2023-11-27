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
	cout<<"enter the sum you are looking for \n";
	cin>>s;
	 for (int i = 0; i < n - 2; i++)
    { 
 
        
        for (int j = i + 1; j < n - 1; j++)
        { 
 
            
        for (int k = j + 1; k < n; k++)
        { 
        if (array[i] + array[j] + array[k] == s)
        { 
            cout << "Triplet is " << array[i] << ", " << array[j] << ", " << array[k]; 
                    
                }
				} 
            } 
        }
		 
    } 
	

