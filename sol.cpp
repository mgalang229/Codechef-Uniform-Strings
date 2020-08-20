#include <bits/stdc++.h>

using namespace std;

void test_case() {
	string s;
	cin >> s;
	int t = 0;
	for(int i = 0; i < (int) s.size(); ++i) {
		if(s[i] == '0' && s[i+1] == '1') {
			t++;
		}
		else if(s[i] == '1' && s[i+1] == '0') {
			t++;
		}
	}
	if(t <= 2) cout << "uniform";
	else cout << "non-uniform";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	for(int nr = 1; nr <= T; ++nr) {
		test_case();
	}
	//test_case();
	return 0;
}
