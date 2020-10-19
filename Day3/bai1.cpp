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

void ChuyenMang(int a[][100], int n, int m, int b[]){

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            b[i*m + j] = a[i][j];
}
void SapXep(int a[][100], int n, int m){
    int b[100];
    ChuyenMang(a,n,m,b);
    for(int i = 0; i < n*m; i++){
        for(int j = i; j < n*m; j++){
            if(b[i]>b[j]){
                swap(b[i],b[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            a[i][j] = b[i*m+j];
    }

int main(){
    int n,m;
    int a[100][100];
    cin >> n >> m;
    Nhap(a,n,m);
    SapXep(a,n,m);
    Xuat(a,n,m);
}
