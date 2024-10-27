#include <iostream>
using namespace std;

void takeInput(int*& arr, int  size){
	arr = new int[size];
	cout<<"Enter elements of array : \n";
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
}

void printArray(int* arr, int size){
	cout<<"Array : "<<endl;
	for(int i=0; i<size; i++){
		cout<<arr[i]<<"  ";
	}
}

int main(){
	int size;
	int* arr = nullptr;
	cout<<"Enter size of array : ";
	cin>>size;
	takeInput(arr, size);
	printArray(arr, size);
	
	return 0;
}

