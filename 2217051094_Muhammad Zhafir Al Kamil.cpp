//#include <ncurses/ncurses.h>
#include <windows.h>
#include <iostream>
using namespace std;

//int main(){
//	initscr();
	
	//start_color();
	//init_pair(1,COLOR_WHITE,COLOR_RED);
	//init_pair(2,COLOR_BLUE,COLOR_WHITE);
	
//	attron (COLOR_PAIR(1));
	//attron = save color
//	mvprintw(1,1, "DDP");
//	refresh();
//	Sleep(1000);
//	attroff (COLOR_PAIR(1));
	
//	attron (COLOR_PAIR(2));
//	mvprintw(2,1, "DDP");
//	refresh();
//	Sleep(1000);
//	attroff (COLOR_PAIR(2));
	
//	getch();
//	endwin();
//}

void gotoxy(int kolom, int baris){
	COORD posisi = {kolom, baris};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), posisi);
}

int main(){
	for(int i=0;i<70; i++){
		gotoxy(i,10);
		cout<< "Hallo Japir Nikol!";
		Sleep(100);
		gotoxy(i,10);
		cout<< "                                    ";
		if (i==69){
			i=0;
		}
	}
}
