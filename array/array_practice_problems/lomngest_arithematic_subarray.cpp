#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int pd, curr = 2, ans = 2;

    pd = abs(a[0] - a[1]);
    for (int i = 1; i < n; i++)
    {
        int new_pd = abs(a[i] - a[i + 1]);
        if (pd == new_pd)
        {
            curr++;
            ans = max(ans, curr);
        }
        else
        {
            pd = new_pd;
            curr = 2;
        }
    }
    cout << ans << endl;

    return 0;
}