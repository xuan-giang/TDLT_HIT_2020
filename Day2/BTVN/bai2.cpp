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

int tich(int a[][100], int m, int dong){
    int tich = 1;
    for(int j = 0; j < m; j++){
        tich*=a[dong][j];
    }
    return tich;
}

void swap_rows(int a[][100], int dong1, int dong2, int m){
    for(int j = 0; j < m; j++){
        swap(a[dong1][j], a[dong2][j]);
    }
}

void SapXep(int a[][100], int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(tich(a,m,i) > tich(a,m,j)){
                swap_rows(a,i,j,m);
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
