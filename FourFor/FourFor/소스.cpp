#include <iostream>
#include <string> //처음 써보는 명령어.
using namespace std;


int main() { //입출력 방식이 느리면 여러 줄을 입력 받거나 출력할 때 시간초과가 될수도 있다.
	int T;
	int a, b;
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> a >> b;
		cout << a + b << '\n';
	}

}