#include <iostream>
#include <string> //ó�� �Ẹ�� ��ɾ�.
using namespace std;


int main() { //����� ����� ������ ���� ���� �Է� �ްų� ����� �� �ð��ʰ��� �ɼ��� �ִ�.
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