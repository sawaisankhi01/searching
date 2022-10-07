#include <iostream>
using namespace std;
int BS(int arr[], int size, int key)
{
	int s=0;
	int e=size-1;
	int mid=s+e/2;
	while(s<e)
	{
		if(arr[mid]==key)
		{
			return mid;
		}
		if(key>arr[mid])
		{
			s=mid+1;
		}
		if(key<arr[mid])
		{
			e=mid-1;
		}
		mid=s+e/2;
	}
	return -1;
}
int main()
{
	int arr[]={4,5,12,56,57,89};
	int key;
	cout<<"Enter the key"<<endl;
	cin>>key;
	int size=sizeof(arr)/sizeof(arr[0]);
	int search=BS(arr, size, key);
	cout<<"element is on index"<<search<<endl;
}
