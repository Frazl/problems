#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	long long unsigned n, m, a, x, y;
	cin >> n >> m >> a;
	x = n / a;
	if (n % a != 0) {
		x++;
	}
	y = m / a;
	if (m % a != 0) {
		y++;
	}
	cout << x * y;
}
