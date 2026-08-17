#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		long long a, b;


		if(n == 10)
		{
			cout << -1 << "\n";
		}
		else if(n%12 != 10)
		{
			a = n%12;
			b = n-a;
			cout << a << " " <<  b << "\n";
		}
		else if(n%12 == 10)
		{
			a = 22;
			b = n - 22;
			cout << a << " " << b << "\n";
		}
	}
}