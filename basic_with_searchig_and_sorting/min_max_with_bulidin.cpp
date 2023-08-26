#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxNo = INT_MAX;
    int minNO = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, arr[i]);
        minNO = min(minNO, arr[i]);
    }
    cout << minNO << " " << maxNo;
    return 0;
}