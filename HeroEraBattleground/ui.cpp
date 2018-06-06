#include "ui.h"
#include <string>
#include <Windows.h>
/* Print a split line */
void split_line() {
	cout << " " << string(100 ,'=') << endl;
}

/* Print introduction */
void print_introduction() {
	system("cls");	// Clear screen.
	cout << string(10, '\n');
	cout << string(40, ' ') << "WELCOME TO [ HERO ERA BATTLEGROUND ] !" << endl << endl;
	cout << string(40, ' ') << "PRESS [ SPACE ] TO PLAY." << endl;
	cout << string(40, ' ') << "PRESS [ H ] FOR GAMING HELP." << endl;
	cout << string(40, ' ') << "PRESS [ ESC ] TO EXIT." << endl;

	//cout << string(40, ' ') << "PRESS [ I ] FOR INFORMATION." << endl;
	cout << string(5, '\n');
}

/* Print gaming help */
void print_help(int lang) {
	system("cls");	// Clear screen.
	cout << string(7, '\n');
	cout << string(45, ' ') << "NEW ERA BATTLEGROUND " << endl << endl;
	if (lang == 0) {
		cout << "\tIn this game you will play a hero. You will participate in multiple games if you can keep alive.\n\
	In each game, you will encounter an enemy hero, and you will conduct multiple rounds of fighting.\n\n\
	At the beginning, both heroes have 100 HP. In each round, you and the enemy can each perform one\n\
	operation. These operations include \"attack\", \"recover\", \"buy equipment\", \"sell equipment\", etc.\n\n\
	In this battle, if you defeat the enemy, then the game ends.You can choose to start a new game\n\
	again and accumulate points.Of course you can also exit the game.However, if your hero dies, the\n\
	game ends immediately and you will see your final score.\n" << endl;
		cout << "\tEnjoy it!\n" << endl;
	}
	else {
		cout << "\t  �������Ϸ�У��㽫Ҫ����һ��Ӣ�ۡ��㽫��μӶೡ��Ϸ���������һֱ���ִ��Ļ���ÿ����Ϸ�У��㶼��\n\
	����һ������Ӣ�ۣ����ǽ����ж�غϵ�ս����һ��ʼ��˫��Ӣ�۶�����ӵ��100������ֵ��ÿһ�غ��У���͵�\n\
	�˿��Ը�����һ�β�������Щ�������������������ָ���������װ����������װ�����ȡ�\n\n\
	  ���ⳡս���У������սʤ�˵��ˣ���ô�þ���Ϸ�����������ѡ�����¿�ʼ�µ�һ����Ϸ�������ۼơ���Ȼ��\n\
	Ҳ�����˳���Ϸ��Ȼ����������Ӣ�������ˣ���ô��Ϸ�����������㽫����������յ÷֡�\n" << endl;
		cout << "\t  �������ܰɣ�\n" << endl;
	}
	cout << "\tPRESS [ ANY KEY ] TO GO BACK." << endl;
	cout << string(5, '\n');
}

/* Print goodbye */
void print_bye() {
	for (int i = 3; i > 0; i--) {
		system("cls");	// Clear screen.
		cout << string(7, '\n');
		cout << string(50, ' ') << "NEW ERA BATTLEGROUND " << endl << endl;
		cout << "\tGood bye, my hero. Hope you have had fun in this game. Looking forward to your return.\n" << endl;
		cout << "\tWindow will close in ";
		cout << i << " seconds." << endl;
		Sleep(1000);	// Terminates in 3 seconds.
	}
	exit(0);
}