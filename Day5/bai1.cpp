#include <bits/stdc++.h>
using namespace std;

int tong(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n + tong(n-1);
    }
}

int giaithua(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*giaithua(n-1);
    }

}


int main()
{
    int n;
    cin >> n;
    cout << "Tong: " << tong(n) << endl;
    cout << "Giai thua: " << giaithua(n)<< endl;
}
