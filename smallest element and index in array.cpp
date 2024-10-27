#include <iostream>
using namespace std;

void inputArray(int*& arr, int size){
	arr = new int[size];
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
}

void printArray(int* arr, int size){
	cout<<"Array : "<<endl;
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int* smallestElement(int* arr, int size){
	int* smallest = new int[2];
	int smallestElement = arr[0], smallestIndex=0;
	for(int i=0; i<size; i++){
		if(smallestElement > arr[i]){
			smallestElement = arr[i];
			smallestIndex = i;
		}
	}
	smallest[0] = smallestIndex;
	smallest[1] = smallestElement;
	
	return smallest;
}

int main(){
	int* arr = nullptr;
	int size;
	int* small = new int[2];// to store array return by smallest element function
	
	cout<<"Ener size of array : ";
	cin>>size;
	cout<<"Enter elements of array : ";
	
	inputArray(arr, size);
	printArray(arr, size);
	
	small = smallestElement(arr, size);
	cout<<"Smallest number is at index : "<<small[0]<<endl;
	cout<<"Smallest number is : "<<small[1]<<endl;
	
	return 0;	
}