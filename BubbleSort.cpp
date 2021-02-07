#include<iostream>
using namespace std;

//metode sorting menggunakan bubble sort
void swap(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int arr[],int size){
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if (arr[j] >= arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}

int main(){
	int list[6]={10,8,3,7,9,5};
	int temp,len,hasil;
	//mengukur panjang dari list
	len=sizeof(list)/sizeof(list[0]);
	cout<<"PROGRAM BUBBLE SORT \n";
	cout<<"Sebelum diurutkan"<<endl;
	for(int i=0;i<len;i++){
		hasil=list[i];
		cout<<hasil<<" ";
	}
	cout<<endl;
	//proses sorting
	bubbleSort(list,len);
	 //selesai sorting
	
	cout<<"Data setelah diurutkan"<<endl;
	for(int i=0;i<len;i++){
		hasil=list[i];
		cout<<hasil<<" ";
	}
}


