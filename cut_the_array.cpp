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
		int num = 0;
		for(int i = 1; i <=n; i++)
		{
			int x;
			cin >> x;
			num += x;
		}
		if(num%3 == 0)
		{
			cout << "1 2\n";
		}
		else
		{
			cout << "0 0\n";
		}
	}
}