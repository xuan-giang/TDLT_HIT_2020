#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n, count = 0, max = 0, sum = 0,temp;
    int *a = new int[n];
    do
    {
        cin >> n;
    }
    while(n<10||n>1000000);

    while(n>0)
    {
        a[count] = n%10;
        n/=10;
        count++;
    }
    temp =count-1;
    for(int i = count-1; i >= 0; i--){
        for(int j = count-1; j >= 0; j--){
            if(j!=i){
                sum = pow(10,temp) + a[j];
                temp--;
            }
        }
        if(sum>max){
            max=sum;
        }
    }
    cout << max;

}


