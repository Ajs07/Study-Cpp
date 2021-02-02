#include<iostream>
using namespace std;
//Function Overloading
//Function Overloading is a function that create the same name with different data types
//it gives the optional for a code to output what kind a value you want to input
void printCube(int x,int y){//A function integer with 2  parameters
	int result=x*y;
	cout<<"The result is: "<<result<<endl;
}

void printCube(int x){//A function integer only 1 parameters
	int result=x*x;
	cout<<"The result is: "<<result<<endl;
}

int main(){
	int a,b;
	cout<<"Input angka ke 1: ";
	cin>>a;
	cout<<"Input angka ke : ";
	cin>>b;
	printCube(a,b);
	if(!b){
	printCube(a);
	}
}
 
