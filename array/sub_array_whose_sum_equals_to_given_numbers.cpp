#include <iostream>
#include <climits>
using namespace std;

void sub_arr(int arr[], int n, int x)
{
    int sum = 0;
    int start;
    int end = n;
    for (int i = 0; i < n; i++)
    {
        start = i;

        for (int j = i; j < n; j++)
        {

            sum = arr[j];
        }
        if (sum == x)
        {
            cout << start << " " << end << endl;
        }
        start++;
    }
}

int main()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sub_arr(arr, n, x);
    return 0;
}