#include<stdio.h>
void printarry(int a[], int s)
{
	int i;
	for(i=0; i<s; i++)
	{
		printf("%d",a[i]);
	}
	printf("\n"); 
}
int partion(int a[], int l, int h)
{
	int pivat=a[l];
	int i=l+1;
	int j=h;
	int temp;
	do{
	
	while(a[i]<=pivat)
	{
		i++;
	}
	while(a[j]>pivat)
	{
		j--;
	}
	if(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
   }	while(i<j);
	temp=a[l];
	a[l]=a[j];
	a[j]=temp;
	return j;
}
void quickshort(int a[],int l, int h )
{
	int partionindex;
	if(l<h){
	partionindex=partion(a, l, h);
	quickshort(a, partionindex+1, h);
	quickshort(a, l, partionindex-1);
}
}
int main()
{
	int a[]={5,3,4,2,6,1};
	int s=6;
	printarry(a,s);
	quickshort(a,0,s-1);
	printarry(a,s);
}
