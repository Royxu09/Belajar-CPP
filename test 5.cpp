#include <iostream>
using namespace std;

int main(){
    int arr[3][3] = { {30, 30, 10}, {10, 5, 10}, {2, 1, 5} };
    int i,j;
    for (i=0; i<3; i++ ){
    for (j=0; j<3; j++){
    cout<<"\t"<<arr[i][j];   
    } 
    cout<<"\n";  
    }   
} 

