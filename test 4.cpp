#include <iostream>
#include <string.h>
using namespace std;

float penjumlahan (float a, float b){
    return a+b;
}
float pengurangan (float a, float b){
    return a-b;
}
float pembagian (float a, float b){
    return a/b;
}
float perkalian (float a, float b){
    return a*b;
}
int main(){
    int option;
    float a,b;
cout<<"Kalkulator Sederhana\n";
cout<<"1 penjumlahan\n";
cout<<"2 pengurangan\n";
cout<<"3 pembagian\n";
cout<<"4 perkalian\n";
cout<<"5 keluar\n";
cout<<"silahkan pilih opsi yang ingin anda lakukan";

cin>>option;
switch(option){
    case 1: {
        cout<<"silahkan menentukan angka pertama\n";
        cin>>a;
        cout<<"silahkan menentukan angka kedua\n";
        cin>>b;
        cout<<"hasil penjumlahan : "<<penjumlahan(a,b)<<endl;
        break;
    }
    case 2: {
        cout<<"silahkan menentukan angka pertama\n";
        cin>>a;
        cout<<"silahkan menentukan angka kedua\n";
        cin>>b;
        cout<<"hasil pengurangan :"<<pengurangan(a,b)<<endl;
        break;
    }
    case 3: {
        cout<<"silahkan menentukan angka pertama\n";
        cin>>a;
        cout<<"silahkan menentukan angka kedua\n";
        cin>>b;
        cout<<"hasil pembagian :"<<pembagian(a,b)<<endl;
        break;
    }
    case 4: {
        cout<<"silahkan menentukan angka pertama\n";
        cin>>a;
        cout<<"silahkan menentukan angka kedua\n";
        cin>>b;
        cout<<"hasil perkalian :"<<perkalian(a,b)<<endl;
        break;
    }
    case 5: {
        cout<<"terimakasih telah menggunakan program kami\n";
    }
}
system("pause");
}