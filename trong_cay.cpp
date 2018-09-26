#include <iostream>
#include <algorithm>
#include <map>
#define maxN 100005

using namespace std;

int a[maxN], b[maxN], i;
long long ans = 1e18 + 7;
int n, k;

void process(int k) {
	int i;
	for (i = 0; i < n; i++)
	if (i % 2 == 0) b[i] = a[i] + k;
	else a[i] = b[i];
	sort(b, b+n);
	long long tmp = 0, x = b[(n-1)/2];
	for (i = 0; i < n; i++) tmp += abs(x-b[i]);
	ans = min(ans, tmp);
}

main () {
	cin >> n >> k;
	for (i = 0; i < n; i++) cin >> a[i];
	process(k);
	process(-k);
	cout << ans << endl;
}
