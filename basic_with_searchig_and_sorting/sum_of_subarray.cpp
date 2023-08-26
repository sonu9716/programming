#include <iostream>
using namespace std;
// sum of sub array
void sum_of_sub_arr(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum = arr[j];
            cout << sum << endl;
        }
    }
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
    sum_of_sub_arr(arr, n);
    return 0;
}