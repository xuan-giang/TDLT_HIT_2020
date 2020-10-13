#include <iostream>
using namespace std;

int answer = 0;

void KQ(int n){
    if(n==0){
        cout << answer;
        return;
    }
    answer += n;
    KQ(n-1);
}

int main()
{
    int n;
    cin >> n;
    cout << "KQ: "; KQ(n);
}
