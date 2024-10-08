#include "World.h"
#include "FightZone.h"
#include "Town.h"
#include <conio.h>


void UWorld::InPlayer(class UPlayer& _Player)
{
	char InputName[100] = {0,};

	bool IsEnd1 = false;
	bool IsEnd2 = false;

	while (true)
	{
		if (IsEnd1 == false && IsEnd2 == false)
		{
			system("cls");

			std::cout << "이름을 적어주세요" << std::endl;
			std::cin >> InputName;

			printf_s("당신의 이름은 %s입니다. 결정하시겠습니까?\n", InputName);
			printf_s("a. 결정\n");
			printf_s("b. 재입력\n");
		}
		else if (IsEnd1 == false && IsEnd2 == true)
		{
			system("cls");
			
			printf_s("당신의 이름은 %s입니다. 결정하시겠습니까?\n", InputName);
			printf_s("a. 결정\n");
			printf_s("b. 재입력\n");
		}

		int Select = _getch();

		switch (Select)
		{
		case 'a':
		case 'A':
			IsEnd1 = true;
			IsEnd2 = true;
			break;
		case 'b':
		case 'B':
			IsEnd1 = false;
			IsEnd2 = false;
			break;
		default:
			printf_s("잘못된 선택입니다. 다시 선택해주세요\n");
			_getch();
			IsEnd2 = true;
			break;
		}

		if (IsEnd1 == true && IsEnd2 == true)
		{
			break;
		}
	}

	// 마지막맵까지 여기서 이 방식으로 가면
	// 마을에 있을때 FightZone은 없어도 된다.
	// 지금 배운 지역변수 
	
	// new를 왜 배워야 하는거냐?
	// 8기가
	UTown TownZone;
	TownZone.SetName("초보마을");

	// 10기가
	UFightZone FightZone;
	FightZone.SetName("초보사냥터");

	while (true)
	{
		TownZone.InPlayer(_Player);
	}



}