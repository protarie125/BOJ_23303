#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto s = string{};
	getline(cin, s);

	if (string::npos != s.find("D2") ||
		string::npos != s.find("d2")) {
		cout << "D2";
	}
	else {
		cout << "unrated";
	}

	return 0;
}