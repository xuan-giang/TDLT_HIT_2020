#include<iostream>
#include<math.h>
using namespace std;

int maxN(int *a,int n){
    int max1 = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > max1){
            max1 = a[i];
        }
    }
    return max1;
}
void xoa(int *a, int &n, int k){
    for(int i = k; i < n; i++){
        a[i] = a[i+1];
    }
    --n;
}
int countNumber(int n){
    int count = 0;
    while(n>0){
        n/=10;
        count++;
    }
    return count;
}
int main()
{
    int n, temp, sum = 0;

    do
    {
        cin >> n;
    }
    while(n<10||n>1000000);
    temp = n;
    int *a = new int[countNumber(n)];
    for(int i = countNumber(n) - 1; i >=0; i--){
        a[i] = n % 10;
        n/=10;
    }
    int count1 = countNumber(n), count2 = countNumber(n);
    while()
    cout << sum;
}


