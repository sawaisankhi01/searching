#include <iostream>
using namespace std;
int BS(int arr[], int s, int e, int key)
{
	while(s<e)
	{
		int mid=s+e/2;
		if(arr[mid]==key)
		{
			return mid;
		}
		if(key>arr[mid])
		{
			return BS(arr, mid+1, e, key );
		}
		if(key<arr[mid])
		{
			return BS(arr,s, mid-1, key );
		}
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
	int s=0;
	int e=size-1;
	int search=BS(arr, s, e, key);
	cout<<"element is on index"<<search<<endl;
}
