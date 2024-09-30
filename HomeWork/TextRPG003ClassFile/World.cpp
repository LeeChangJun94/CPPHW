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

			std::cout << "�̸��� �����ּ���" << std::endl;
			std::cin >> InputName;

			printf_s("����� �̸��� %s�Դϴ�. �����Ͻðڽ��ϱ�?\n", InputName);
			printf_s("a. ����\n");
			printf_s("b. ���Է�\n");
		}
		else if (IsEnd1 == false && IsEnd2 == true)
		{
			system("cls");
			
			printf_s("����� �̸��� %s�Դϴ�. �����Ͻðڽ��ϱ�?\n", InputName);
			printf_s("a. ����\n");
			printf_s("b. ���Է�\n");
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
			printf_s("�߸��� �����Դϴ�. �ٽ� �������ּ���\n");
			_getch();
			IsEnd2 = true;
			break;
		}

		if (IsEnd1 == true && IsEnd2 == true)
		{
			break;
		}
	}

	// �������ʱ��� ���⼭ �� ������� ����
	// ������ ������ FightZone�� ��� �ȴ�.
	// ���� ��� �������� 
	
	// new�� �� ����� �ϴ°ų�?
	// 8�Ⱑ
	UTown TownZone;
	TownZone.SetName("�ʺ�����");

	// 10�Ⱑ
	UFightZone FightZone;
	FightZone.SetName("�ʺ������");

	while (true)
	{
		TownZone.InPlayer(_Player);
	}



}