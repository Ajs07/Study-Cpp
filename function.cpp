#include<iostream>
#include<string>
using namespace std;

string greet() {
  return "Hello ";
}

void printGreet(string name) {
	cout<<greet()<<name<<endl;
}

int main() {
	string nama;
	cout<<"Nama: "; cin>>nama;
	printGreet(nama);
}
