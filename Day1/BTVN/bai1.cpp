#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
float chuvi(float a, float b, float c)
{
    return a + b + c;
}
float dientich(float a, float b, float c)
{
    float p = chuvi(a, b, c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
int main()
{
    float a, b, c;

    cin >> a >> b >> c;
    if (a < b + c && b < a + c && c < a + b)
    {
        if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
            cout << "vuong";
        else if ((a == b) && (b == c) && (c == a))
        {
            cout << "deu";
            
        }
        
        else if (a == b || a == c || b == c)
            cout << "can";

        
        // cout << "\nchu vi: " << (float)chuvi(a, b, c) << endl;
        // cout << "dien tich: " << dientich(a, b, c) << endl;
        printf("\nchu vi: %.2f", chuvi(a, b, c));
        printf("\ndien tich: %.2f", dientich(a, b, c));
    }
    else
        cout << "NO";
    return 0;
}