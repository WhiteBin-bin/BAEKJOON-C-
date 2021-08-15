#include <iostream> //c++에서 기본적인 명령어를 사용할 수 있게 해주는 헤더파일이다.
using namespace std; //네임스페이스는 변수 이름이나 함수 이름과 같이 명칭을 사용하는 공간으로 소속을 나타낸다

int main() { //main 함수를 만들어 준다.

	int A; //A라는 정수형 변수를 선언한다.
	int B; //B라는 정수형 변수를 선언한다.
	cin >> A; //A라는 정수형 변수에 값을 입력 받는다.
	cin >> B; //B라는 정수형 변수에 값을 입력 받는다.
	if (A > B) { //여기서 부터는 A와 B를 구별해주는 조건문이다.
		cout << ">" << endl;
	}
	else if (A < B) {
		cout << "<" << endl;
	}
	else {
		cout << "==" << endl;
	}

}