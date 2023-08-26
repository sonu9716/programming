#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int original_number = n;
    while (n > 0)
    {
        int last_number = n % 10;
        sum += pow(last_number, 3);
        n = n / 10;
    }
    if (sum == original_number)
    {
        cout << " armstrong number" << endl;
    }
    else
    {
        cout << "not a armstrong number" << endl;
    }
}