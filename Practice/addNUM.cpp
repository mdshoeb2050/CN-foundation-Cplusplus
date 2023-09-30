//#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
	// Read the number of test cases.
	int T;
	cin >> T;
	//for (int i = 1; i <= T; i++){} ya for loop se kar lo ya phir 
	while(T--) {  // while loop jindabad to hai hi
		// Read the input a, b
		int a, b;
		cin >> a >> b;

		// Compute the ans.
		int ans = a + b;
		cout << ans << "\n";
	}

	return 0;
}