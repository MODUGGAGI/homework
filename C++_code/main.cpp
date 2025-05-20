#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <string.h>
#include "RegisterMemberUI.h"
#include "LoginUI.h"
#include "LogoutUI.h"
#include "RegisterBicycleUI.h"
#include "RentBicycleUI.h"
#include "ViewRentalInfoUI.h"

using namespace std;

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();
void join();
void program_exit();

// 전역 변수 선언
ifstream in_fp;
ofstream out_fp;

int main() {
    // 파일 입출력을 위한 초기화
    in_fp.open(INPUT_FILE_NAME);
    out_fp.open(OUTPUT_FILE_NAME);

    doTask();

    out_fp.close();
    in_fp.close();

    return 0;
}

void doTask() {
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit) {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        in_fp >> menu_level_1 >> menu_level_2;

        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1) {
            case 1: // 회원가입
                switch (menu_level_2) {
                    case 1: {
                        // 1.1 회원가입
                        join();
                        break;
                    }
                }
                break;

            case 2: // 로그인/로그아웃
                switch (menu_level_2) {
                    case 1: {
                        // 2.1 로그인
                        break;
                    }
                    case 2: {
                        // 2.2 로그아웃
                        break;
                    }
                }
                break;

            case 3: // 자전거 등록
                switch (menu_level_2) {
                    case 1: {
                        // 3.1 자전거 등록
                        break;
                    }
                }
                break;

            case 4: // 자전거 대여
                switch (menu_level_2) {
                    case 1: {
                        // 4.1 자전거 대여
                        break;
                    }
                }
                break;

            case 5: // 자전거 대여 리스트
                switch (menu_level_2) {
                    case 1: {
                        // 5.1 자전거 대여 리스트
                        break;
                    }
                }
                break;

            case 6: // 종료
                switch (menu_level_2) {
                    case 1: {
                        // 6.1 종료
                        is_program_exit = 1;
                        break;
                    }
                }
                break;

            default:
                // 알 수 없는 메뉴
                break;
        }
    }
}
