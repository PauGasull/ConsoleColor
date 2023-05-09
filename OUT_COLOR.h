/***************************
*   Console Color Manager  *
*        Pau Gasull        *
*         (c) 2023         *
****************************/

#ifndef OUT_COLOR_H
#define OUT_COLOR_H

#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class OUT_COLOR {
public:
	//contructor
	OUT_COLOR(HANDLE& hConsole, int& color_var);
	OUT_COLOR();

	//color getters
	void black();
	void dark_blue();
	void dark_green();
	void dark_aqua();
	void dark_red();
	void dark_pink();
	void dark_yellow();
	void light_gray();
	void gray();
	void blue();
	void green();
	void aqua();
	void red();
	void pink();
	void yellow();
	void white();

	//TO DO:
	/* color with BG */
private:
	HANDLE hConsole;
	int text_color;
};
#endif 

