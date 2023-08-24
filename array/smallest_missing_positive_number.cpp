#include <iostream>
using namespace std;
//
void smallest_missing_pnumber(int arr[], int n)
{
    bool array[n];
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        arr[i] = false;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > +0)
        {
            array[i] = true;
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (array[j] == false)
        {
            ans = j;
        }
    }
    cout << ans << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    smallest_missing_pnumber(arr, n);
}