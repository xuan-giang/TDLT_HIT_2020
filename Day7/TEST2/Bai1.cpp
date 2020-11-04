#include<iostream>
using namespace std;

int main()
{
    int n, k, max = 0, sum = 0;
    do{
        cin >> n >> k;
    }while(1>n || n>1000||n<k);

    int *a = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int j;
    for(int i = 0; i <= n - k; i++)
    {
        sum = 0;
        j = i;
        do
        {
            sum += a[j];
            j++;
        }
        while(j < i + k);
        if(sum > max)
        {
            max = sum;
        }

    }
    cout << max;
}
//2 1
//43 17
//sum = 43
//6 3
//1 1 3 4 7 7
//0 1 2 3 4 5
//5 2
//3 4 5 6 7
