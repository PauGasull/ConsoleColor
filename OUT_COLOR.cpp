#include "OUT_COLOR.h"

OUT_COLOR::OUT_COLOR(HANDLE& console, int& color_var)
{
	hConsole = console = GetStdHandle(STD_OUTPUT_HANDLE);
	text_color = color_var = 15;

	//defult color is white
	SetConsoleTextAttribute(hConsole, color_var);
}

OUT_COLOR::OUT_COLOR()
{
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	text_color = 15;
	SetConsoleTextAttribute(hConsole, text_color);
}

void OUT_COLOR::black(){	
	SetConsoleTextAttribute(hConsole, 0);
}
void OUT_COLOR::dark_blue() {
	SetConsoleTextAttribute(hConsole, 1);
}
void OUT_COLOR::dark_green() {
	SetConsoleTextAttribute(hConsole, 2);
}
void OUT_COLOR::dark_aqua() {
	SetConsoleTextAttribute(hConsole, 3);
}
void OUT_COLOR::dark_red() {
	SetConsoleTextAttribute(hConsole, 4);
}
void OUT_COLOR::dark_pink() {
	SetConsoleTextAttribute(hConsole, 5);
}
void OUT_COLOR::dark_yellow() {
	SetConsoleTextAttribute(hConsole, 6);
}
void OUT_COLOR::light_gray() {
	SetConsoleTextAttribute(hConsole, 7);
}
void OUT_COLOR::gray() {
	SetConsoleTextAttribute(hConsole, 8);
}
void OUT_COLOR::blue() {
	SetConsoleTextAttribute(hConsole, 9);
}
void OUT_COLOR::green() {
	SetConsoleTextAttribute(hConsole, 10);
}
void OUT_COLOR::aqua() {
	SetConsoleTextAttribute(hConsole, 11);
}
void OUT_COLOR::red() {
	SetConsoleTextAttribute(hConsole, 12);
}
void OUT_COLOR::pink() {
	SetConsoleTextAttribute(hConsole, 13);
}
void OUT_COLOR::yellow() {
	SetConsoleTextAttribute(hConsole, 14);
}
void OUT_COLOR::white() {
	SetConsoleTextAttribute(hConsole, 15);
}