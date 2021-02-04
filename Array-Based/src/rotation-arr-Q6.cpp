#include <iostream>
using namespace std;

int main() {
	int arr[10],size,temp;
	cout<<"Enter array size";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cout<<"Enter array "<<i<<" Element :"<<endl;
		cin>>arr[i];
	}
	
	for(int i=0;i<size;i++)
			{
				//cout<<"Enter array "<<i<<" Element :"<<endl;
				cout<<arr[i];
			}


	

	for(int i=size-1;i>0;i--)
	{

		temp=arr[size-1];
		arr[size-1]=arr[i];
		--size;
		arr[0]=temp;
	}
	
	for(int i=0;i<size;i++)
				{
					//cout<<"Enter array "<<i<<" Element :"<<endl;
					cout<<arr[i];
				}


	return 0;
}
