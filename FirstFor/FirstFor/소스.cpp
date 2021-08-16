#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	for (int i = N; i <= N; i++) {
		for (int j = 1; j < 10; j++) {
			cout << i << " * " << j << " = " << i *j << endl;
		}
	}
	return 0;
}