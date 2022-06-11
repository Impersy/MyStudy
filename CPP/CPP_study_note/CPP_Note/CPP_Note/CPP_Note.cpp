#include <iostream>
#include <time.h>
using namespace std;

// 포인터 실습
// text RPG 

struct Statinfo {             // Statinfo는 자료형   >> 변수 선언 한게 아님
    int hp;
    int attack;
    int defence;
};


void EnterLobby();

Statinfo CreatePlayer();              // 포인터를 사용하지 않는 함수라 Playerstat값은 못 건드리고
                                      // 따로 지역변수를 만들어 값을 설정하고 그걸 반환해줌

void CreateMonster(Statinfo* info);   // 구조체 포인터로 주소값을 받아 Monsterstat을 설정가능

bool StartBettle(Statinfo* player, Statinfo* monster);

int main()
{
    EnterLobby();

    return 0;
}

void EnterLobby() {

    cout << "-----------------------" << endl;
    cout << "로비에 입장했습니다." << endl;

    Statinfo Playerstat;
    Playerstat = CreatePlayer();            // 함수의 반환값을 Playerstat으로 지정

    Statinfo Monsterstat;
    CreateMonster(&Monsterstat);            // 함수에서 Monsterstat을 변경함

    bool victory = StartBettle(&Playerstat, &Monsterstat);

    if (victory == 1) {
        cout << "승리" << endl;
    }
    else {
        cout << "패배" << endl;
    }

}

Statinfo CreatePlayer() {
    cout << "플레이어 생성" << endl;
    Statinfo ret;
    ret.hp = 120;
    ret.attack = 19;
    ret.defence = 3;

    return ret;
}

void CreateMonster(Statinfo* info) {
    cout << "몬스터 생성" << endl;
    info->hp = 100;
    info->attack = 20;
    info->defence = 4;
}

bool StartBettle(Statinfo* player, Statinfo* monster) {

    while (1) {
        int pdmg = player->attack - monster->defence;
        int mdmg = monster->attack - player->defence;
        monster->hp -= pdmg;
        if (monster->hp < 0) {
            monster->hp = 0;
        }
        cout << "몬스터 hp:" << monster->hp << endl;
        if (monster->hp == 0) {
            cout << "몬스터를 처치하였습니다." << endl;
            return 1;
        }
        player->hp -= mdmg;
        if (player->hp < 0) {
            player->hp = 0;
        }
        cout << "플레이어 hp:" << player->hp << endl;
        if (player->hp == 0) {
            cout << "사망했습니다." << endl;
            return 0;
        }
    }
}