//Binary search.Here each time we reduce the search space.Tc--->O(log2**n)//

#include<iostream>
using namespace std;

int binary_search(int arr[],int size,int key){
	int low,high,mid;
	low=0;
	high=size;
	while(low<=size){
		mid=(low+high)/2;
		if(arr[mid]==key){		//if mid is the key
			return mid;
		}
		else if(arr[mid]>key){	//if mid value is greater than the key that means key is present at the left of mid hence mid-1 will be the new upper limit of our 2nd iteration of searching
			high=mid-1;
		}
		else{					//if mid value is less than the key that means key is present at the right of mid hence mid+1 will be the new lower limit in our 2nd iteration of searching
			low=mid+1;
		}
	}
	return 9999;	
		
}
int main(){
	int a,b;
	cout<<"\nEnter the array size:"<<endl;
	cin>>a;
	int array[a];
	cout<<"\nEnter the array elements:"<<endl;
	for(int i=0;i<a;i++){
		cin>>array[i];
	}
	cout<<"\nEnter the element to search:"<<endl;
	cin>>b;
	int c=binary_search(array,a,b);
	if(c>a){
		cout<<"Sorry!!Element is not present in the array"<<endl;
	}
	else{
		cout<<"Required element is at position="<<c+1<<endl;
	}
}