#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int p[n];
        int maxind = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> p[i];

            if (p[i] > p[maxind])
                maxind = i;
        }

        swap(p[0], p[maxind]);

        for (int i = 0; i < n; i++)
        {
            cout << p[i] << " ";
        }

        cout << "\n";
    }
}