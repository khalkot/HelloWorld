#include <bits/stdc++.h>
using namespace std;

int main()
{
	string cm;
	int t, n,max=2000000001,min=-2000000009;
	char x;
	bool f=0;

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> cm;
		cin >> n;
		cin >> x;
		if (!cm.compare(">="))
		{
			if (x == 'Y')
			{
				if (n > min)
					min = n;
			}
			else
			{
				if (n - 1 < max)
				{
					max = n - 1;
					f = 1;
				}
			}

		}
		else if (!cm.compare(">"))
		{
			if (x == 'Y')
			{
				if (n+1 > min)
					min = n+1;
			}
			else
			{
				if (n < max)
				{
					max = n;
					f = 1;
				}
			}

		}
		else if (!cm.compare("<="))
		{
			if (x == 'Y')
			{
				if (n < max)
				{
					max = n;
					f = 1;
				}
			}
			else
			{
				if (n+1 > min)
					min = n+1;
			}
		}
		else if (!cm.compare("<"))
		{
			if (x == 'Y')
			{
				if (n - 1 < max)
				{
					max = n - 1;
					f = 1;
				}
			}
			else
			{
				if (n > min)
					min = n;
			}
		}
	}
	if (min == max)
		cout << min;
	else if (min + 1 < max)
		if (f)
		{
			cout << max;
		}
		else
			cout << min;

	else
		cout << "Impossible";
	cout << min << max;
}