#include <bits/stdc++.h>
using namespace std;
void li_search(int a[], int size, int key)
{
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == key)
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        cout << 1 << endl;
    }
    else
    {

        cout << 0 << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    li_search(a, n, 10);

    return 0;
}