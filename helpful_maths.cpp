#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;

	// remove +
	string num;

	for(char c : s)
	{
		if(c != '+')
		{
			num += c;
		}
	}

	// sort kro
	sort(num.begin(), num.end());

	// print krdo
	for(int i = 0; i < num.size(); i++)
	{
		if(i > 0)
		{
			cout << "+";
		}
		cout << num[i];
	}
}