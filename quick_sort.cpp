#include<iostream>
#include<stdio.h>
using namespace std;
int partition(int *arr , int low , int high){
	int pivot = arr[high];
	int i = low-1;                             
	for (int j=low;j<high;j++){
		if(arr[j]<=pivot){
			i++;
			swap(arr[j] , arr[i]);
		}
	}
	swap(arr[i+1] , arr[high]);

	return i+1;}

void quicksort(int *arr , int low , int high){
	if(low < high){
		int pi = partition(arr , low , high);
		quicksort(arr , low , pi-1);
		quicksort(arr , pi+1 , high);
	}

}

void print(int *arr , int len){
	for (int i=0;i<len ; i++){
		cout<<arr[i]<<"\t";
	}
}

int main(){
	int ar[6] = {1,4,9,5,7,6};
	int len = sizeof(ar)/sizeof(ar[0]);
	quicksort(ar , 0 , len-1);
	print(ar,len);
}
