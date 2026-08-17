#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;

	unordered_set<int> us;

	for(int i = 0; i < s.length(); i++)
	{
		us.insert(s[i]);
	}

	if(us.size()%2 == 0)
	{
		cout << "CHAT WITH HER!";
	}
	else
	{
		cout << "IGNORE HIM!";
	}
}