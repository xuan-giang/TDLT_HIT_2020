#include <iostream>
#include <math.h>
using namespace std;

int timMax(int n)
{

    if(n==0)
    {
        return n;
    }
    return max(n%100, timMax(n/10));
}

int main()
{
    int n;
    do
    {
        cin>>n;
    }
    while ( n <= 1 || n >= pow(10,12));
    cout << timMax(n);

}
