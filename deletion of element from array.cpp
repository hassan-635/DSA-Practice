#include <iostream>
using namespace std;


void takeInput(int*& arr, int size){
	arr = new int[size];
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
}

void printArray(int* arr, int size){
	for(int i=0; i<size; i++){
		cout<<arr[i]<<"  ";
	}
	cout<<endl;
}

void deleteElement(int*& arr, int number, int& size){
	int newSize = size;
	for(int i=0; i<newSize; i++){
		if(arr[i] == number){
			for(int j=i; j<newSize; j++){
				arr[j]  = arr[j+1];
			}
			newSize--;
			i--;
		}
	}
}

int main(){
	int size;
	int* arr = nullptr;
	int number;
	cout<<"Enter size of array : ";
	cin>>size;
	cout<<"Enter array :\n";
	takeInput(arr, size);
	cout<<"Enter number to delete : ";
	cin>>number;
	cout<<"Array before deletion : \n";
	printArray(arr, size);
	deleteElement(arr, number, size);
	cout<<"Array after deletion : \n";
	printArray(arr, size-1);
	
	return 0;
}