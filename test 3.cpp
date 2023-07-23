#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main(){
int opsi;
cout<<"1 Penjumlahan\n";
cout<<"2 Perkalian\n";
cout<<"3 Pengurangan\n";

cout<<"silahkan masukan pilihanmu";
cin>>opsi;

if (opsi == 1){
    int data1,data2;
    cout<<"silahkan masukkan data1\n";
    cin>>data1;
    cout<<"silahkan masukan data2\n";
    cin>>data2;
    cout<<"hasil dari penjumlahan anda adalah\n"<<data1+data2<<"\n\n";
}else if (opsi == 2){
    int data1,data2;
    cout<<"silahkan masukan data1\n";
    cin>>data1;
    cout<<"silahkan masukan data2\n";
    cin>>data2;
    cout<<"hasil dari perkalian adalah\n"<<data1*data2<<"\n";
}else if (opsi == 3){
    int data1,data2;
    cout<<"silahkan masukan data1\n";
    cin>>data1;
    cout<<"silahkan masukan data2\n";
    cin>>data2;
    cout<<"hasil dari pengurangan adalah\n"<<data1-data2<<"\n";
}
    system("pause");
}
