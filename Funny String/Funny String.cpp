// Funny String.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	int t;
	cin >> t;
	string input, rev;
	while (t--) {
		cin >> input;
		rev = input;
		reverse(rev.begin(), rev.end());
		bool flag = true;
		for (int i = 1; i < input.size(); i++) {
			if (abs(input[i] - input[i - 1]) != abs(rev[i] - rev[i - 1])) {
				flag = false;
				break;
			}
		}
		if (flag) cout << "Funny" << endl;
		else cout << "Not Funny" << endl;
	}
    return 0;
}

