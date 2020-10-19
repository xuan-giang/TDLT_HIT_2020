#include <iostream>
#include <math.h>
using namespace std;

bool soCP(int n)
{
    int sqr = sqrt(n);
    if(sqr*sqr == n)
    {
        return true;
    }
    else return false;
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
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(soCP(a[i]))
            {
                if(soCP(a[j]))
                {
                    if(a[i] > a[j])
                    {
                        swap(a[i], a[j]);
                    }
                }

            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
