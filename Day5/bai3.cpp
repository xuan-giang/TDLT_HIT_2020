#include <iostream>
using namespace std;

int MAX(int n){
   // int max = n % 10;
    if(n==0){
        return 0;
    }else{
     //   return MAX(n/10) > (n%10) ? MAX(n/10) : n % 10;
     return max(MAX(n/10), n%10);
    }
}

int main()
{
    int n;
    cin >> n;
    cout << "KQ: " << MAX(n);
}
