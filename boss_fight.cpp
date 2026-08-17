#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		vector<int> a(n);
		int health = 0;

		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		for(int i = 0; i < n; i++)
		{
			if(i >= 2 && a[i] == a[i - 1] && a[i - 1] == a[i - 2])
				break;
			health += a[i];
		}
		cout << health << "\n";
	}
}