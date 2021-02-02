#include <iostream>

using namespace std;

int main() {

  int kolom;
  int baris;
  int nilaiGenap=0;
  int nilaiGanjil=0;
  

  cout << "Masukkan jumlah kolom = ";
  cin >> kolom;
  cout << "Masukkan jumlah baris = ";
  cin >> baris;

  int matrik[baris][kolom];

  for(int i=0;i<kolom;i++){
    for(int j=0;j<baris;j++){
      cout << "Masukkan nilai pada kolom "<<i+1<<" dan baris "<<j+1<<" = ";
      cin >> matrik[i][j];
    }
  }
  
  for(int i=0;i<kolom;i++){
    for(int j=0;j<baris;j++){
      cout << "Nilai pada kolom "<<i+1<<" dan baris "<<j+1<<" = " << matrik[i][j]<<endl;
    }
  }

   for(int i=0;i<kolom;i++){
    for(int j=0;j<baris;j++){
      if(matrik[i][j]%2==0){
        nilaiGenap = nilaiGenap+1;
      }else{
        nilaiGanjil = nilaiGanjil+1;
      }
    }
     cout << "Kolom "<<i+1<<" : "<<nilaiGanjil<<"  elemen ganjil dan "<<nilaiGenap<<" elemen genap \n";
    nilaiGenap=0;
    nilaiGanjil=0;
  }

}
