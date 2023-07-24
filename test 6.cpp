#include <iostream>
using namespace std;

int main(){
    int data1, data2;
        cout<<"Woy Anjing matrik pertama berapa?";
        cin>>data1;

        cout<<"Woy Anjing matrik keduanya berapa?";
        cin>>data2;

    int arr[data1][data2];
        int i,j;
        // untuk mengulang data I/J=0 sampe dengan data i/J</=data1/2
        // i itu bagian menurun pada suku pertama sedangkan j itu mendatar
        for (i=0; i<data1; i++ ){
            for (j=0; j<data2; j++){                                                          
                cout<<"Silahkan input data matriks yang anda inginkan ["<<i<<"]"<<"["<<j<<"]";
                cin>>arr[i][j]; 
            } 
                cout<<"\n";
        }
        for (i=0; i<data1; i++ ){
            for (j=0; j<data2; j++){
                cout<<"\t"<<arr[i][j];
            } 
                cout<<"\n";  
        }
}


