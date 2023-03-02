//Linear search..Tc--->O(n)//

#include<iostream>
using namespace std;

int linear_search(int arr[],int size,int key){
	for(int i=0;i<size;i++){
		if(arr[i]==key){
			return i;
			
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
	int c=linear_search(array,a,b);
	if(c>a){
		cout<<"Sorry!!Element is not present in the array"<<endl;
	}
	else{
		cout<<"Required element is at position="<<c+1<<endl;
	}
}