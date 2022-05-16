#include "ui.h"

#include <stdio.h>
#include <Windows.h>

void modifyUI() {
	SetConsoleTitle("Rabbit hopper By 0xfffcf");

	system("mode 60, 34");
	printBanner();
}

void printBanner() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
		   "                      /|      __",
		   "*             +      / |   ,-~ /             +",
		   "     .              Y :|  //  /                .         *",
		   "         .          | jj /( .^     *",
		   "               *    >-\"~\"-v\"              . * .",
		   "*                  /       Y",
		   "   .     .        jo  o    |     .            +",
		   "                 ( ~T~     j                     +     .",
		   "      +           >._-' _./         +",
		   "               /| ;-\"~_  l",
		   "  .           / l/ ,-\"~\\ + ",
		   "              \\//\\/      .- \\"
		   "       +       Y        /    Y",
		   "               l       I     !",
		   "               ]\\      _\\    /\"\\",
		   "              (\" ~----(~Y.)",
		   "          ~~~~~~~~~~~~~~~~~~~~~~~~~~");
}