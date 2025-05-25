#include "Exit.h"
#include "ExitUI.h"

/*
	함수 이름 : Exit::Exit()
	기능	  : Exit 클래스의 생성자로 UI를 통해 종료 프로세스를 시작
	전달 인자 : is_program_exit -> main에서 시스템 종료를 위한 값을 가지고 있는 변수
	반환값    : 없음
*/
Exit::Exit(int& is_program_exit) {
    //프로그램 종료 변수 1로 설정
    is_program_exit = 1;

    // UI 객체 생성
    ExitUI ui;

    // startInterface 호출
    ui.startInterface();
}
