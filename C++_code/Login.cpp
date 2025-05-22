#include "Login.h"
#include "LoginUI.h"

/*
	함수 이름 : Login::Login()
	기능	  : Login 클래스의 생성자로 UI를 통해 로그인 프로세스를 시작
	전달 인자 : userList -> 사용자 목록, userCount -> 사용자 수, currentUser -> 현재 로그인된 사용자 저장을 위한 포인터 값
	반환값    : 없음
*/
Login::Login(User* userList[], int userCount, User*& currentUser) {
    // UI 객체 생성
    LoginUI ui;

    // startInterface 호출
    ui.startInterface(this, userList, userCount, currentUser);
}

/*
	함수 이름 : Login::login()
	기능	  : 사용자 ID와 비밀번호를 확인하여 해당 사용자 객체를 반환
	전달 인자 : id -> 사용자 ID, password -> 비밀번호, userList -> 사용자 목록, userCount -> 사용자 수, currentUser -> 현재 로그인 된 사용자 저장
	반환값    : map -> 로그인된 사용자의 ID, 비밀번호
*/
std::map<std::string, std::string> Login::login(const std::string& id, const std::string& password, User* userList[], int userCount, User*& currentUser) {
    // 사용자 목록에서 ID와 비밀번호가 일치하는 사용자 찾기
    for (int i = 0; i < userCount; i++) {
        if (userList[i]->getUserId() == id && userList[i]->getPassword() == password) {
            // 현재 로그인 된 사용자로 저장
            currentUser = userList[i];

            // 현재 로그인 한 사용자의 정보를 가져와서 반환
            return userList[i]->getUserDetails();
        }
    }

    // 예외 처리는 없다고 했지만, 함수 구조를 위해  모든 for문이 끝난 후 빈 map 반환처리
    return std::map<std::string, std::string>();
}