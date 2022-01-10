#include <iostream>
#include <algorithm>

using namespace std;

int show(int arra[], int times)
{
    for(int u = 0; u < times; u++)
    {
        cout << arra[u] << "\n";
    }
}

int main(void)
{
    int t, n;
    cin >> t;
    int arr[t];
    for(int i = 0; i < t; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, arr + t);
    show(arr, t);
}
