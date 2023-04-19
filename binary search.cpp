#include <iostream>
using namespace std;

int binary_search(int arr[],int size,int element){
	int low=0;
	int high=size;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]==element){
			return mid;
		}
		else if(arr[mid]>element){	 //means key is present at left of mid//
			high=mid-1;	
		}
		else{						//means key is present at right of mid//
		    low=mid+1;
		}
	}
	return -1;
}

int main(){
	int n,i,key;
	cout<<"Enter the array size"<<endl;
	cin>>n;
	int a[n];
	cout<<"\nEnter the array elements in sorted order(ascending)"<<endl;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"\nEnter the element to search"<<endl;
	cin>>key;
	int z=binary_search(a,n,key);
	if(z!=-1){
		cout<<"\nElement is present at index\n"<<z<<endl;
	}
	else{
		cout<<"\nElement is not present in the array"<<endl;
	}
	return 0;
}