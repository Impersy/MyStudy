#include <iostream>
using namespace std;

// ctrl + K + C 주석달기 , ctrl + K + U 주석풀기




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



    return 0;
}






