#ifndef EXIT_UI_H
#define EXIT_UI_H

#include <fstream>

// 전방 선언
class Exit;

extern std::ifstream in_fp; // main의 입력값을 받아오기 위한 외부 전역 변수
extern std::ofstream out_fp; // main의 입력값을 받아오기 위한 외부 전역 변수

class ExitUI {
public:
    void startInterface(); // 종료 UI 인터페이스, 종료 처리를 수행하고 수행 결과를 출력
};

#endif