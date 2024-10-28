#include <iostream>
using namespace std;

void takeInput(int*& arr, int size){
	arr = new int[size];
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
}

void printArray(int* arr, int size){
	cout<<"Array : "<<endl;
	for(int i=0; i<size; i++){
		cout<<arr[i]<<"  ";
	}
	cout<<endl;
}

void insertion(int*& arr, int number, int index,int size){
	int* newArr = new int[size+1];
	
	for(int i=0; i<size+1; i++){
		if(i < index){
			newArr[i] = arr[i]; 
		} 
		else if (i == index){
			newArr[i] = number;
		}
		else {
			newArr[i] = arr[i-1];
		}
	}
	delete[] arr;
	arr = newArr;
}

int main(){
	int* arr = nullptr;
	int size, number, index;
	
	cout<<"Enter size of array : ";
	cin>>size;
	
	cout<<"Enter array : ";
	takeInput(arr, size);
	
	cout<<"Enter index of insertion : ";
	cin>>index;
	
	cout<<"Enter number to insert : ";
	cin>>number;
	
	cout<<"Before insertion ";
	printArray(arr, size);	
	
	insertion(arr, number, index, size);
	
	cout<<"After insertion ";
	printArray(arr, size+1);
	
	return 0;	
}