#include <iostream>
#include <algorithm>
using namespace std;

int check(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] % *min_element(a, a+n) != 0)
        {
            return -1;
        }
    }
    return *min_element(a, a+n);
}
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << check(a,n);
}
