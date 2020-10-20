#include <iostream>
#include <math.h>
using namespace std;

void nhap(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void Chen(int a[], int &n, int x)
{
    int k;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < x)
        {
            k = i + 1;
        }
    }
    for (int i = n; i > k; i--)
    {
        a[i] = a[i - 1];
    }
    a[k] = x;
    ++n;
}

int main()
{
    int n;
    int m;
    cin >> n >> m;
    int a[100];
    int b[100];
    nhap(a, n);
    nhap(b, m);
    for (int i = 0; i < n; i++)
    {
        Chen(b, m, a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        cout << b[i] << " ";
    }
}
