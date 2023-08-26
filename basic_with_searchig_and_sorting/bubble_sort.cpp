#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n)
{
    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i + 1] < arr[i])
            {
                int temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
        counter++;
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
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
    bubble_sort(arr, n);
    print(arr, n);
}