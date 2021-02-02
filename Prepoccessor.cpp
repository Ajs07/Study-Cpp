#include<iostream>
using namespace std;

#define size 50
#define n 10
int main(){
	string table[size];
	for(int i=0;i<n;i++){
		cout<<"Input: "; cin>>table[i];
	}
	/*for(int i=0;i<size;i++){
		cout<<"Input angka: ";
		cin>>table[i];
		if(table[i]==10){
			cout<<"Eksekusi berhenti \n";
			break;
		}
	}*/
	
	char nama[size]={'c','o','d','i','n','g'};
	for(int i=0;i<size;i++){
		cout<<nama[i];
	}
}
