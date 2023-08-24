#include <iostream>
using namespace std;

int main()
{
    int n, div, m, flag = 0;

    cin >> n;
    div = 2;
    m = n / 2;
    for (int i = 2; i <= m; i++)
    {
        if (n % div == 0)
        {
            cout << "not a prime number";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "it is a prime number";
        return 0;
    }
}