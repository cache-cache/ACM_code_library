#incnlude <bits/stdc++.h>
using namespace std;

void get_mid(int mid)
{
	return a[mid];
} 

void check_mid(int num)
{
	return num > m;
}

int slove(int l, int r)
{
	while(l + 1 < r) 
	{
		mid = (l + r) >> 1;
		if(check(mid)) r = mid;
		else l = mid;
	}
	return r;
}

int main()
{
	int l, r;
	cin >> l >> r;
	ans = slove(l, r)
	cout << ans;
	return 0;
}
