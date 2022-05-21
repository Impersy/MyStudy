#include <iostream>
#include <time.h>
using namespace std;


//// text RPG

#pragma region 전역변수
enum PlayerType {
	PT_Kinght = 1,
	PT_Archer = 2,
	PT_Mage = 3
};
enum MonsterType {
	MT_Slime = 1,
	MT_Orc = 2,
	MT_Skeleton = 3
};
// 구조체 사용
struct Objectinfo {
	int Type;
	int hp;
	int attack;
	int defence;
};

Objectinfo playerinfo;
Objectinfo monsterinfo;

#pragma endregion

#pragma region 함수선언
void EnterLobby();
void SelectPlayer();
void EnterField();
void CreateMonster();
void EnterBettle();
#pragma endregion


int main()
{

	EnterLobby();

	return 0;

}



void EnterLobby() {

	while (1) {
		cout << "----------------------" << endl;
		cout << "로비에 입장하였습니다." << endl;
		cout << "----------------------" << endl;

		SelectPlayer();

		cout << "----------------------" << endl;
		cout << "(1)필드입장 (2)게임종료" << endl;
		cout << "----------------------" << endl;

		int input;
		cin >> input;
		if (input == 1) {
			EnterField();
		}
		else {
			return;
		}
	}
}

void SelectPlayer()
{
	while (1) {
		cout << "----------------------" << endl;
		cout << "직업을 선택해주세요." << endl;
		cout << "기사(1) 궁수(2) 마법사(3)" << endl;
		cout << "----------------------" << endl;
		cout << ">";
		cin >> playerinfo.Type;
		if (playerinfo.Type == PT_Kinght) {
			cout << "기사 생성중" << endl;
			playerinfo.hp = 150;
			playerinfo.attack = 10;
			playerinfo.defence = 5;
			break;
		}
		else if (playerinfo.Type == PT_Archer) {
			cout << "궁수 생성중" << endl;
			playerinfo.hp = 100;
			playerinfo.attack = 15;
			playerinfo.defence = 3;
			break;
		}
		else if (playerinfo.Type == PT_Mage) {
			cout << "마법사 생성중" << endl;
			playerinfo.hp = 80;
			playerinfo.attack = 25;
			playerinfo.defence = 0;
			break;
		}
	}
}

void  EnterField() {
	while (1) {

		cout << "----------------------" << endl;
		cout << "필드에 입장했습니다." << endl;
		cout << "----------------------" << endl;

		cout << "[플레이어] hp:" << playerinfo.hp << " ATT:" << playerinfo.attack << " DEF:" << playerinfo.defence << endl;

		CreateMonster();

		cout << "----------------------" << endl;
		cout << "전투(1) 도주(2)" << endl;
		cout << ">";
		int input;
		cin >> input;
		if (input == 1) {
			EnterBettle();
			if (playerinfo.hp == 0) {
				return;
			}
		}
		else {
			return;
		}
	}


}

void CreateMonster() {

	cout << "몬스터 생성중" << endl;

	srand(time(NULL));
	monsterinfo.Type = 1 + rand() % 3;

	switch (monsterinfo.Type) {

	case MT_Slime:
		cout << "슬라임 생성중(hp=15/ATT=5/DEF=0)" << endl;
		monsterinfo.hp = 15;
		monsterinfo.attack = 5;
		monsterinfo.defence = 0;
		break;
	case MT_Orc:
		cout << "오크 생성중(hp=40/ATT=10/DEF=3)" << endl;
		monsterinfo.hp = 40;
		monsterinfo.attack = 10;
		monsterinfo.defence = 3;
		break;
	case MT_Skeleton:
		cout << "스켈레톤 생성중(hp=80/ATT=15/DEF=5)" << endl;
		monsterinfo.hp = 80;
		monsterinfo.attack = 15;
		monsterinfo.defence = 5;
		break;
	}

}

void EnterBettle() {

	while (1) {

		int playerDamage = (playerinfo.attack - monsterinfo.defence);

		int monsterDamage = (monsterinfo.attack - playerinfo.defence);

		if (playerDamage < 0) {
			playerDamage = 0;
		}
		if (monsterDamage < 0) {
			monsterDamage = 0;
		}

		monsterinfo.hp -= playerDamage;

		if (monsterinfo.hp < 0) {
			monsterinfo.hp = 0;
		}

		cout << "남은 몬스터 hp:" << monsterinfo.hp << endl;

		if (monsterinfo.hp == 0) {
			cout << "몬스터를 처치하였습니다. 플레이어 승리" << endl;
			return;
		}
		else {
			playerinfo.hp -= monsterDamage;
			if (playerinfo.hp < 0) {
				playerinfo.hp = 0;
			}
			cout << "남은 플레이어 hp:" << playerinfo.hp << endl;
			if (playerinfo.hp == 0) {
				cout << "사망했습니다.로비에서 다시 부활합니다." << endl;
				return;
			}

		}
	}
}



