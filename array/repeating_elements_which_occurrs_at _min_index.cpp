// given an arr[] of size n the task is to find repeating elemnent in the array of integers  such that element that occur more than once and whose index of first occurence is smallest

#include <iostream>
using namespace std;

void repeating_element_with_minindex(int arr[], int n)
{
    int ind[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = -1;
    }
    int current;
    for (int i = 0; i < n; i++)
    {
        current = i;
        for (int j = 0; j < n; j++)
        {
            if (current == arr[j])
            {
            }
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
}
