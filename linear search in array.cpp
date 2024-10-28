#include<iostream>
using namespace std;

void takeInput(int*& arr, int size){
	arr = new int[size];
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
}

void printArray(int* arr, int size){
	for(int i=0; i<size; i++){
		cout<<arr[i];
	}
	cout<<endl;
}

int linearSearchArray(int* arr, int number, int size){
	for(int i=0; i<size; i++){
		if (arr[i]==number){
			return i;
		}
	}
	return -1;	
}

int main(){
	int* arr = nullptr;
	int size;
	int number;
	
	cout<<"Enter size of array : ";
	cin>>size;
	
	cout<<"Enter array : \n";
	takeInput(arr, size);
	
	
	cout<<"Enter a number to search : ";
	cin>>number;
	
	int result = linearSearchArray(arr, number, size);	
	(result == -1)?cout<<"Element not found":cout<<"Element found at index : "<<result;
	
	
	return 0;
}