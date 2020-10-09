#include<iostream>
using namespace std;

void Nhap(int a[][100], int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
}

void Xuat(int a[][100], int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int Tong(int a[][100], int n, int cot){
    int tong = 0;
    for(int i = 0; i < n; i++){
        tong += a[i][cot];
    }
    return tong;
}

void swap_colums(int a[][100], int cot1, int cot2, int n){
    for(int i = 0; i < n; i++){
        swap(a[i][cot1],a[i][cot2]);
    }
}

void SapXep(int a[][100], int n, int m){
    for(int i = 0; i < m; i++){
       for(int j = i + 1; j < m; j++){
        if(Tong(a,n,i)>Tong(a,n,j)){
            swap_colums(a,i,j,n);
        }
       }
    }
}

int main(){
    int n,m;
    int a[100][100];
    cin >> n >> m;
    Nhap(a,n,m);
    SapXep(a,n,m);
    Xuat(a,n,m);
}
