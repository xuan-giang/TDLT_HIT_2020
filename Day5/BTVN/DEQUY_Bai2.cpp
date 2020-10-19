#include <iostream>
#include <math.h>
using namespace std;

int search(int n)
{
    int temp;
    if(n==0)
    {
        return 0;
    }
    if((n % 10) % 2 == 0)
    {
        return max(n%10, search(n/10));
    }
    else
    {
        return search(n/10);
    }
}

int main()
{
    int n;
    do
    {
        cin>>n;
    }
    while ( n <= 1 || n >= pow(10,12));
    cout << search(n);

}
