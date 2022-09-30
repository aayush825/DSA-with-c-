#include<iostream>
using namespace std;

int main()
{
	
	int arr[10] = {2,5,6,7};
	cout<<"addr"<<arr<<endl;
	cout<< arr[0]<<endl;
	cout<<&arr[0]<<endl;
	cout<<*arr<<endl;
	cout<<*arr+1<<endl;//array 2nd value
	cout<<*(arr=1)<<endl;
	
	return 0;
}
