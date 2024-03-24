#include <iostream>
using namespace std;
// Nama     : Renna
// NIM      : 2311110047

int main(){
    int a, b, c;
    cout << "Masukkan ukuran array :";
    cin >> a >> b >> c ;
    cout<<endl;
    cout<<endl;

    int arr[a][b][c];
    cout << "Masukkan elemen array :"<< endl;
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            for (int k = 0; k < c; k++){
                cout << "arr[" << i << "][" << j << "][" << k << "]: ";
                cin >> arr[i][j][k];
            }
        }
    }
    cout<<endl;
    cout<<endl;
    cout << "Data Array :" << endl;
    for (int i = 0; i < a; i++){
        for (int j= 0; j < b; j++){
            for(int k= 0; k < c; k++){
                cout << arr[i][j][k] << " ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    
    return 0;
}