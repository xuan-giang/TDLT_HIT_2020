#include <iostream>

using namespace std;

int main()
{
    int n,k, count=0;
    cin >> n >> k;
    for(int i = 1; i <= n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(k==i+j)
            {
                count++;
            }
        }
    }
    cout << count;
}
