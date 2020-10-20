#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char s[1000];
    gets(s);
    int n = strlen(s);
    for(int i = 0; i < n; i++){
        char x = s[i];
        int cnt = 0;
        for(int j = 0; j < n; j++){
            if(x==s[j]){
                cnt++;
            }
        }
        cout << x << ": " << cnt << endl;
    }
}
