#include <iostream> //�⺻ ��ɾ ����ϰ� ���ִ� ��������̴�.
using namespace std; //���ӽ����̽��� ���� �̸��̳� �Լ� �̸��� ���� ��Ī�� ����ϴ� �������� �Ҽ��� ��Ÿ����

int main() {  //main�Լ��� ����� �ش�.

	int number; //����ڰ� �Է��� ���ڸ� �޾Ƶ��� ������ ���� number�� �����Ѵ�.
	cin >> number;
	if (number >= 90 && number <= 100) { //if���� ����ؼ� ������ ������ش�.
		cout << "A" << endl;
	}
	else if (number >= 80 && number <= 89) {
		cout << "B" << endl;
	}
	else if (number >= 70 && number <= 79) {
		cout << "C" << endl;
	}
	else if (number >= 60 && number <= 69) {
		cout << "D" << endl;
	}
	else {
		cout << "F";
	}

}