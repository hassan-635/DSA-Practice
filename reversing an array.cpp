#include <iostream>
using namespace std;
using std::swap;

void takeInput(int*& arr, int size){
	arr = new int[size];
	cout<<"Enter array : "<<endl;
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

void reverseArray(int* arr, int size){
	int start = 0;
	int end = size-1;
	while(start < end){
		swap(arr[start], arr[end]);
		start++;
		end--;
	}
}

int main(){
	
	int *arr = nullptr;
	int size;
	
	cout<<"Enter size of array : ";
	cin>>size;
	
	takeInput(arr, size);
	cout<<"Original ";
	printArray(arr, size);
	reverseArray(arr, size);
	
	cout<<"Reversed ";
	printArray(arr, size);
	
	delete[] arr;
	
	return 0;
}