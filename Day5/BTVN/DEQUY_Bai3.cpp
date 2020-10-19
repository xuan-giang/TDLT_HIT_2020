#include <iostream>
#include <math.h>
using namespace std;

int search(int *a,int n)
{
    if(n==0){
        return 0;
    }
    return max(a[n-1], search(a, n-1));
}

int main()
{
    int n;
    do
    {
        cin>>n;
    }
    while ( n <= 1 || n >= pow(10,5));
    int *a = new int[n];
    for(int i = 0; i < n; i++)
    {
        do
    {
        cin>>a[i];
    }
    while ( a[i] <= -pow(10,4) || a[i] >= pow(10,4));
    }
    cout << search(a,n);
}
