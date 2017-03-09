// Lab3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Comsci.h"
void a17_2();
void a17_3();
void mainmenu();
int main()
{
	splash("COSC2436 Lab3 Stacks", "Implementation of Stacks as Arrays and Linked Lists",false);
	Sleep(3500);
	system("cls");
	mainmenu();
	pause();
    return 0;
}
void a17_2()//start point for Lab 17.2 Implementation of Stacks as Arrays and Linked Lists
{

}
void a17_3()//start point for Lab 17.3 Fun with Stacks
{

}
void mainmenu()
{
	std::string ans;
	color("blue");
	std::cout << centertext("MAIN MENU") << std::endl << std::endl << std::endl << std::endl;
	std::cout << "1...................Lab 17.2 Implementation of Stacks as Arrays and Linked Lists" << std::endl;
	std::cout << "2.......................................................Lab 17.3 Fun with Stacks" << std::endl;
	std::cout << "Please Enter a number :>";
	std::cin >> ans;
	if (ans == "1")
	{
		a17_2();
	}
	if (ans == "2")
	{
		a17_3();
	}
}