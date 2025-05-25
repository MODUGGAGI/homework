cmake_minimum_required(VERSION 3.10)
project(C__code)

set(CMAKE_CXX_STANDARD 14)

# 모든 소스 파일 추가
add_executable(C__code
        main.cpp
        RegisterMemberUI.cpp
        RegisterMember.cpp
        User.cpp
        Member.cpp
        Bicycle.cpp
        BicycleCollection.cpp
        Admin.cpp
        LoginUI.cpp
        Login.cpp
        LogoutUI.cpp
        Logout.cpp
        RegisterBicycleUI.cpp
        RegisterBicycle.cpp
        RentBicycleUI.cpp
        RentBicycle.cpp
        ViewRentalInfoUI.cpp
        ViewRentalInfo.cpp
        Exit.cpp
        ExitUI.cpp
        # 다른 필요한 소스 파일들
)