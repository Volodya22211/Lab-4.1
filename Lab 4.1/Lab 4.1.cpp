#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N, k;
	double sum = 0;
	cout << "N: "; cin >> N;
	k = N;
	while (k <= 19) {
		sum += sqrt(pow(sin(k), 2)) + pow(cos(N/k), 2);
		k++;
	}
	cout << "sum: " << sum << endl;
	sum = 0;

	k = N;
	do {
		sum += sqrt(pow(sin(k), 2)) + pow(cos(N / k), 2);
		k++;
	} while (k <= 19);
	cout << "sum: " << sum << endl;
	sum = 0;

	for (int k = N; k <= 19; k++) {
		sum += sqrt(pow(sin(k), 2)) + pow(cos(N / k), 2);
	}
	cout << "sum: " << sum << endl;
	sum = 0;

	for (int k = 19; k >= N; k--) {
		sum += sqrt(pow(sin(k), 2)) + pow(cos(N / k), 2);
	}
	cout << "sum: " << sum << endl;

	return 0;
}