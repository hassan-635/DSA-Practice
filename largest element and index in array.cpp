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
	cout<<endl;
}

int* largestElement(int* arr, int size){
	int* largest = new int[2];//make an array having first element index and second largest element to return it to the main function
	int largestElement = arr[0];//we will start from first to end of array 
	int largestIndex = 0;//store index having largest Element
	for(int i=0; i<size; i++){
		if(largestElement < arr[i]){
			largestElement = arr[i];
			largestIndex = i;
		}
	}
	largest[0] = largestIndex;
	largest[1] = largestElement;
	
	return largest;
}

int main(){
	int size;
	int* arr = nullptr;
	
	cout<<"Enter size of array : ";
	cin>>size;
	takeInput(arr, size);
	printArray(arr, size);
	
	int* l = new int[2];
	l = largestElement(arr, size);//to store largest element and index in l named array
	
	cout<<"Index of largest Element : "<<l[0]<<endl;	
	cout<<"Largest Element : "<<l[1];
	
	return 0;
}

