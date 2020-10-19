#include <iostream>
#include <math.h>
using namespace std;

void nhap(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

int main()
{
    int n;
    int m;
    cin >> n >> m;
    int *a = new int[n];
    int *b = new int[m];
    nhap(a,n);
    nhap(b,m);
    int *c = new int[m + n];
    for(int i = 0; i < n; i++){
        c[i] = a[i];
    }
    for(int i = n; i < m+n; i++){
        c[i] = b[i-n];
    }
    for(int i = 0; i < n + m; i++)
    {
        for(int j = i+1; j < n + m; j++)
        {
            if(c[i] > c[j])
            {
                swap(c[i], c[j]);
            }
        }
    }
    for(int i = 0; i < m + n; i++){
        cout << c[i] << " ";
    }
}
