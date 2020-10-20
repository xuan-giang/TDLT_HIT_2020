#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[1000];
    gets(s);
    int cnt[1000] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        int indexCnt = int(s[i]);
        cnt[indexCnt]++;
    }
    for (int i = int('a'); i <= int('z'); i++)
    {
        if (cnt[i] != 0)
            cout << char(i) << ":" << cnt[i] << endl;
    }
}
