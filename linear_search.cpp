#include <iostream>
using namespace std;
// linear search
int liner_search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int key;

    cout << "enter value you want to find" << endl;
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << liner_search(arr, n, key) << endl;
    return 0;
}