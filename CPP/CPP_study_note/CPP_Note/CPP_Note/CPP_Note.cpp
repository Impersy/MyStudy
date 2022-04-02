#include <iostream>
#include <time.h>
using namespace std;

// ctrl + K + C 주석달기 , ctrl + K + U 주석풀기


// #define   (#이 붙은거 >> 전처리 지시문)
#define ROCK 2         //  2 를 DEF_ROCK 으로 대체
#define TEST cout<<"Hello"<<endl;   // 코드문장 자체를 TEST로 대체

// 전처리 -> 컴파일 -> 링크 순으로 프로그램이 진행되는데
// 전처리 단계에서 끝내버려서 컴파일 단계에서는 사실 TEST라는 건 없어지고 cout<<"Hello"<<endl 가 복붙된거라
// 디버깅하기도 까다롭다.

int main()
{

#pragma region 분기문
    //분기문

    //int hp = 100;  // 몬스터 체력
    //int dmg = 10;  // 플레이어 데미지
    //int exp = 0;   // 플레이어 경험치
    //int level = 1; // 플레이어 레벨

    //while (hp > 0) {

    //    hp -= dmg;  // 피격판정

    //    bool isDead = (hp <= 0);  // 처치판정

    //    // 몬스터가 죽으면 경험치 추가

    //    if (isDead) {

    //        cout << "몬스터를 처치했습니다.(+exp10)\n" << endl;
    //        exp += 10;
    //        cout << "현재 총 경험치:" << exp << "\n현재 레벨:" << level << endl;
    //        if (exp >= 50) {
    //            level = 6;
    //            cout << "----레벨업~!!!----\n" << "level:" << level << endl;
    //        }
    //        else if (exp >= 40) {
    //            level = 5;
    //            cout << "----레벨업~!!!----\n" << "level:" << level << endl;
    //        }
    //        else if (exp >= 30) {
    //            level = 4;
    //            cout << "----레벨업~!!!----\n" << "level:" << level << endl;
    //        }
    //        else if (exp >= 20) {
    //            level = 3;
    //            cout << "----레벨업~!!!----\n" << "level:" << level << endl;
    //        }
    //        else if (exp >= 10) {
    //            level = 2;
    //            cout << "----레벨업~!!!----\n" << "level:" << level << endl;
    //        }

    //    }
    //    else {
    //        cout << "몬스터를 처치하지 못했습니다.\n남은 체력은" << hp << "입니다.\n" << endl;
    //    }

    //}

    // 스위치-케이스 (가위바위보)

    //const int ROCK = 0;
    //const int PAPER = 1;
    //const int SCISSORS = 2;

    //int input = 0;

    //switch (input) {             // ()에 정수만 넣을수있다.

    //  case ROCK:
    //      cout << "바위를 냈습니다." << endl;
    //      break;
    //  case PAPER:
    //      cout << "보를 냈습니다." << endl;
    //      break;
    //  case SCISSORS:
    //      cout << "가위를 냈습니다." << endl;
    //      break;
    //  default:
    //      cout << "뭘 낸겁니까?" << endl;
    //      break;
    //}


#pragma endregion    


#pragma region 반복문

    //// while 문

    //int count = 0;

    //while (count<5){

    //    cout << "Hello world\n" << endl;
    //    count++;
    //}

    //// do_while 문 (잘 사용하지 않음)

    //do {
    //    cout << "Helo world\n" << endl;
    //    count++;

    //} while (count<5);


    //// for 문

    //for (int i = 0; i < 5; i++) {

    //    cout << "Helo world\n" << endl;

    //}


    //// 루프문의 흐름제어

    // break;
    // 걸려있는 해당 루프문을 탈출한다.

    // continue;
    // continue를 만나면 그 아래부분은 실행하지않고 
    // 넘겨서 루프문의 다음 파트 실행

    //int round = 1;
    //int hp = 100;
    //int dmg = 10;



    //// 무한루프에서 break 활용
    
    //while (1) {
    //    hp -= dmg;
    //    if (hp < 0){
    //        hp = 0;
    //    }
    //    cout << "Round" << round << " HP" << hp << endl;

    //    if (hp == 0) {
    //        break;           // if문을 나가라는 뜻이 아니고 while문을 나감
    //    }
    //    
    //    if (round == 5) {
    //        break;
    //    }
    //    round++;
    //}

#pragma endregion


#pragma region 연습문제1

    // 입력값을 받을때 
    // cin >> 변수이름 ;    (이렇게 하면 사용자가 입력한 값이 변수로 들어감)

    // 출력할때
    // cout << " " ;        (endl은 줄바꿈이라는 뜻)

    // 별찍기(n*n 모양)

    // int n = 0;
    // cin >> n;

//for (int i = 0; i < n; i++) {

//    for (int j = 0; j < n; j++) {

//        cout << "*";
//    }
//    cout << endl;
//}

// 별찍기(n피라미드)  >>> 할떄마다 어렵고 헷갈림 2중포문인지 3중인지 잘 생각

//for (int i = 0; i < n; i++) {
//
//    for (int j = 0; j < n - i - 1; j++) {
//        cout << " ";
//    }
//    for (int k = 0; k < 2 * i + 1; k++) {
//        cout << "*";
//    }
//    cout << endl;
//}

// 별찍기 (심화) n피라미드 군집   >>> 3중포문을 사용

//
//int p = 0;
//
//cin >> p;
//
//for (int s = 0; s < p; s++) {
//
//    for (int i = 0; i < s + 1; i++) {
//        for (int j = 0; j < s - i; j++) {
//            cout << ' ';
//        }
//        for (int k = 0; k < 2 * i + 1; k++) {
//            cout << '*';
//        }
//        cout << endl;
//    }
//
//    cout << endl;
//    cout << endl;
//}






#pragma endregion



#pragma region 연습문제2

// 구구단 (1단~9단)

//for (int i = 0; i < 9; i++) {
//
//    for (int j = 0; j < 9; j++) {
//        cout << (i + 1) << " x " << (j + 1) << "=" << (i + 1) * (j + 1) << endl;
//    }
//}


// 가위바위보 게임
//
//const int ROCK = 0;
//const int PAPER = 1;
//const int SCISSORS = 2;
//
//int input = 0;
//
//float wins = 0;
//int total = 0;
//
//while (1) {
//    srand(time(NULL));
//
//    // rand()를 쓸떄 항상 해줘야함
//    // rand();  >> 0~32767  중 랜덤으로 반환
//
//    int value = rand() % 3;
//
//    // % 3 을 해주면 rand()를 3으로 나눈 나머지가
//    // 0 1 2 중 하나로 나온다. 따라서 0 1 2 3가지중 랜덤으로 반환
//
//    cout << "가위(2) 바위(0) 보(1) 중 하나를 입력하세요" << endl;
//    cin >> input;
//    total++;
//
//    if (input == SCISSORS) {
//        if (input == value) {
//            cout << "비겼습니다." << "컴퓨터:" << value << endl;
//        }
//        else if (value == ROCK) {
//            cout << "졌습니다." << "컴퓨터:" << value << endl;
//        }
//        else {
//            cout << "이겼습니다." << "컴퓨터:" << value << endl;
//            wins++;
//        }
//
//    }
//    else if (input == ROCK) {
//        if (input == value) {
//            cout << "비겼습니다." << "컴퓨터:" << value << endl;
//        }
//        else if (value == PAPER) {
//            cout << "졌습니다." << "컴퓨터:" << value << endl;
//        }
//        else {
//            cout << "이겼습니다." << "컴퓨터:" << value << endl;
//            wins++;
//        }
//
//    }
//    else if (input == PAPER) {
//        if (input == value) {
//            cout << "비겼습니다." << "컴퓨터:" << value << endl;
//        }
//        else if (value == SCISSORS) {
//            cout << "졌습니다." << "컴퓨터:" << value << endl;
//        }
//        else {
//            cout << "이겼습니다." << "컴퓨터:" << value << endl;
//            wins++;
//        }
//
//    }
//    else {
//        break;
//    }
//
//    if (wins == 0) {
//        cout << "현재승률은 없습니다" << endl;
//    }
//    else {
//        cout << "현재승률:" << (wins / total) * 100 << "%" << "total:" << total << endl;
//    }
//    cout << "\n\n\n";
//
//}


#pragma endregion 


// 열거형  (enum 이 const 나 define 보다 더 좋은 방법) (컴파일단계에서 날아가지 않아서 살펴볼수있고 메모리 공간을 사용하지 않기때문)

enum ENUM_SRP
{
    ENUM_SCISSORS = 1,
    ENUM_ROCK,
    ENUM_PAPER
};
// 숫자를 지정안하면 첫 값은 0으로 자동지정
// 그 다음값은 이전값 +1 

// 컴퓨터가 ENUM 안의 이름들을 그냥 상수로 인식하기 때문에
// 메모리를 잡아먹지 않는다
// 반면 const 를 이용한 것은 경우에 따라 메모리를 이용할수도있다.


// 가위바위보 게임
srand(time(NULL));

int input = 0;
float wins = 0;
int total = 0;

while (1) {
   
    int value = rand() % 3 + 1;

    cout << "가위(1) 바위(2) 보(3) !!!!!!" << endl;

    cin >> input;

    if (input == ENUM_SCISSORS) {

        if (value == ENUM_SCISSORS) {
            cout << "비겼습니다" << "  컴퓨터가 낸 값:" << "가위" << endl;
        }
        else if (value == ENUM_ROCK) {
            cout << "졌습니다" << "  컴퓨터가 낸 값:" << "바위" << endl;
            wins++;
        }
        else {
            cout << "이겼습니다" << "  컴퓨터가 낸 값:" << "보" << endl;
        }
    }
    else if (input == ENUM_ROCK) {

        if (value == ENUM_ROCK) {
            cout << "비겼습니다" << "  컴퓨터가 낸 값:" << "바위" << endl;
        }
        else if (value == ENUM_PAPER) {
            cout << "졌습니다" << "  컴퓨터가 낸 값:" << "보" << endl;
            wins++;
        }
        else {
            cout << "이겼습니다" << "  컴퓨터가 낸 값:" << "가위" << endl;
        }
    }
    else if (input == ENUM_PAPER) {

        if (value == ENUM_PAPER) {
            cout << "비겼습니다" << "  컴퓨터가 낸 값:" << "보" << endl;
        }
        else if (value == ENUM_SCISSORS) {
            cout << "졌습니다" << "  컴퓨터가 낸 값:" << "가위" << endl;
            wins++;
        }
        else {
            cout << "이겼습니다" << "  컴퓨터가 낸 값:" << "바위" << endl;
        }
    }
    else {
        break;
    }

    total++;

    if (wins == 0) {
        cout << "현재승률은 0입니다" << endl;
    }
    else {
        cout << "현재승률은 : " << (wins / total)*100 << "% 입니다." << endl;
    }
    cout << "\n\n" << endl;
}

//// 다시 혼자 해본 결과 
//  1. 1,2,3 이 아닌 다른 값을 입력했을때 경우를 빠뜨림 (예외처리)
//  2. 분기문의 1차 분기기준을 value로 했는데 그럴 경우 2차 분기문에서 끝마다 예외처리(1,2,3이외의 input값)를 해줘야해서
//     코드가 길어진다. 따라서 첫 기준을 input으로 잡고 시작하는게 더 효율적이다.
//  3. 기준을 바꿈에 따라 2차 분기문의 논리적 순서가 바뀌었는데 뒤늦게 알아차렸다.(누가 기준인가에 따라 이겼냐 졌냐 달라짐)





    return 0;
}






