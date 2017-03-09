// Lab3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Comsci.h"
//#include "headers\linkedList.h"
//#include "headers\myStack.h"
#include "headers\linkedStack.h"
//#include "headers\stackADT.h"
void a17_2();
void a17_3();
void mainmenu();
int fibonacci_stack(int num);
int main()
{
	splash("COSC2436 Lab3 Stacks", "Implementation of Stacks as Arrays and Linked Lists",false);
	Sleep(1750);
	system("cls");
	mainmenu();
	pause();
    return 0;
}
void a17_2()//start point for Lab 17.2 Implementation of Stacks as Arrays and Linked Lists
{
	linkedStackType<std::string> stack1;
	stack1.push("Hello Stack");
}
void a17_3()//start point for Lab 17.3 Fun with Stacks
{
	while (true)
	{
		int enter;
		cin >> enter;
		std::cout << fibonacci_stack(enter);
		pause();
	}


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
int fibonacci_stack(int num)
{
	int cts=2;
	int current;
	int STS1,STS2,STS3;
	//Task2 Chosen
	linkedStackType<int> stack1;
	stack1.push(0);
	if (num ==1)
	{
		return stack1.top();
	}
	stack1.push(1);
	if (num ==2)
	{
		return stack1.top();
	} 
	// init complete
	else
	{
		while (cts<num)
		{
			STS1 = stack1.top();
			stack1.pop();
			STS2 = stack1.top();
			stack1.pop();
			//stack sould be empty
			STS3=STS1 + STS2;
			stack1.push(STS1);
			stack1.push(STS3);
			cts++;
		}
		return stack1.top();
	}
}