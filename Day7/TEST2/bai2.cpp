#include<iostream>
#include<math.h>
using namespace std;

bool check(int n){
    int a, b;
    for(a = 1; a <= sqrt(n);  a++){
        for(b = 2; b <= sqrt(n); b++){
            if(pow(a,b) == n){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int n,a = 1,b = 0;
    do
    {
        cin>> n;
    }
    while(n>400);
    if(check(n)){
        cout << "true";
    }else{
        cout << "false";
    }
}


