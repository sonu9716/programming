#include <iostream>
using namespace std;

bool isprime(int n)
{
    int m = n / 2;
    int div = 2;
    for (int i = 2; i <= m; i++)
    {
        if (n % div == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (isprime(i))
        {
            cout << i;
        }
    }
    return 0;
}