#include <iostream>
#include <string.h>
using namespace std;

int main(){
    cout<<"Selamat datang di program kami\n";
    cout<<"Silahkan masukkan data kamu\n";
    
    string Name;
    int Umur;
    string Alamat;
    string Tempat_Lahir;
    int Tanggal_Lahir;
    int Kelas;
    int Tinggi_Badan;
    int Berat_Badan;
    int No_WA;
    string Makanan_Favorite;
    string Minuman_Favorite;
    string Hobby;

    cout<< "Name: ";
    cin>> Name;
    cout<< "Umur: ";
    cin>> Umur;
    cout<< "Alamat: ";
    cin>> Alamat;
    cout<< "Tempat_Lahir: ";
    cin>> Tempat_Lahir;
    cout<< "Tanggal_Lahir: ";
    cin>> Tanggal_Lahir;
    cout<< "Kelas: ";
    cin>> Kelas;
    cout<< "Tinggi_Badan: ";
    cin>> Tinggi_Badan;
    cout<< "Berat_Badan: ";
    cin>> Berat_Badan;
    cout<< "No_WA: ";
    cin>> No_WA;
    cout<< "Makanan_Favorite: ";
    cin>> Makanan_Favorite;
    cout<< "Minuman_Favorite: ";
    cin>> Minuman_Favorite;
    cout<< "Hobby: ";
    cin>> Hobby;

    cout<<"Name anda adalah "<<Name<<"\n";
    cout<<"Umur anda adalah "<<Umur<<" tahun""\n";
    cout<<"Alamat anda adalah "<<Alamat<<"\n";
    cout<<"Tempat Lahir adalah "<<Tempat_Lahir<<"\n";
    cout<<"Tanggal lahir adalah "<<Tanggal_Lahir<<"\n";
    cout<<"Kelas kamu adalah "<<Kelas<<"\n";
    cout<<"Tinggi badan kamu adalah "<<Tinggi_Badan<<" cm""\n";
    cout<<"Berat badan kamu adalah "<<Berat_Badan<<" kg""\n";
    cout<<"Nomor WhatsApp kamu adalah "<<No_WA<<"\n";
    cout<<"Makanan Favorite kamu adalah "<<Makanan_Favorite<<"\n";
    cout<<"Minuman Favorite kamu adalah "<<Minuman_Favorite<<"\n";
    cout<<"Hobby kamu adalah"<<Hobby<< "\n";
}