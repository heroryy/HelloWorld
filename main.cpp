#include<iostream>
using namespace std;
void sort(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int main()
{
	int arr[]={1,3,2,4,5,7};
	int len=6;
	sort(arr,len);
	for(int i=0;i<len;i++) printf("%d ",arr[i]);
	printf("\n");
}
