#include <iostream>
using namespace std;
int LS(int arr[], int size, int d)
{
	for(int i=0; i<size; i++)
	{
		if(arr[i]==d)
		{
		
			return i;
		
		}
	
}
	return -1;
}
int main()
{
	int arr[]={12,54,65,87,98};
	int size=sizeof(arr)/sizeof(arr[0]);
	int d;
	cout<<"Enter the key element "<<endl;
	cin>>d;
	int search=LS(arr, size, d);
	cout<<""<<search<<endl;
	
}
