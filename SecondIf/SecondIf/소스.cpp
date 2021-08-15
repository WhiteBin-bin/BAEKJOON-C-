#include <iostream> //기본 명령어를 사용하게 해주는 헤더파일이다.
using namespace std; //네임스페이스는 변수 이름이나 함수 이름과 같이 명칭을 사용하는 공간으로 소속을 나타낸다

int main() {  //main함수를 만들어 준다.

	int number; //사용자가 입력한 숫자를 받아들일 정수형 변수 number를 선언한다.
	cin >> number;
	if (number >= 90 && number <= 100) { //if문을 사용해서 조건을 만들어준다.
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