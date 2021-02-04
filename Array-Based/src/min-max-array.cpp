

#include <iostream>
using namespace std;

int main1() {

	int arr[10],size;
	cout<<"Enter array size";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cout<<"Enter array "<<i<<" Element :"<<endl;
		cin>>arr[i];
	}
	int max=arr[0];
	int min=arr[0];
	for(int i=1; i<size;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	cout<<max;
	cout<<min;
	return 0;
}
