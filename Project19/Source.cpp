#include <iostream>
using namespace std;
int k;

int main() {
	setlocale(LC_ALL, "ru");
	int N,*a,*b;
	cin >> N;
	a = new int[N];
	b = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	for (int i = 0;k<N, i < N; i+=2,k++) {
		b[k] = a[i];
	}
	for (int i = 1; k < N, i < N; i += 2, k++) {
		b[k] = a[i];
	}

	for (int i = 0; i < N; i++) {
		cout << b[i]<<" ";
	}
	delete[] a, b;
}