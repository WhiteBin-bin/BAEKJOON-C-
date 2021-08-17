#include <iostream>

using namespace std;

int main(int argc, char const* argv[]) {
	int N, X;
	cin >> N >> X;

	int arr[N];	// N개의 수를 담을 배열 선언
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	// i번째 원소가 X보다 작으면 출력
	for (int i = 0; i < N; i++) {
		if (arr[i] < X) {
			cout << arr[i] << " ";	// 출력 형식 주의 (원소간 공백이 있음)
		}
	}
	return 0;
}