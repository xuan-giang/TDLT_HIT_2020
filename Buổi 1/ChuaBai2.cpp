#include <iostream>

using namespace std;

void NhapMang(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void XuatMang(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
}

void SapXep(int *a, int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(a[i]>a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
}

bool check(int x)
{
    int count = 0;
    for(int i = 2; i < x; i++)
    {
        if(x%i==0)
        {
            return false;
        }
    }
    return true;
}

void Chen(int *a, int &n, int x)
{
    if(check(x)){
        int k;
        for(int i = 0; i < n; i++)
        {
            if(x<a[i])
            {
                k = i;
            }
        }
        for(int i = n; i > k; i++)
        {
            a[i] = a[i-1];
        }
        a[k]=x;
        ++n;
    }
}



int main()
{
    int N, X;
    int a[1000];
    do
    {
        cin >> N >> X;
    }
    while(N >= 2000 || X >= 1000);
    NhapMang(a,N);
    SapXep(a,N);
    Chen(a,N,X);
    XuatMang(a,N);
}
