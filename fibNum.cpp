//fibNum.cpp
int fibonacci_stack(int num);
void main()//start point for Lab 17.3 Fun with Stacks
{
	while (true)
	{
		int enter;
		cin >> enter;
		std::cout << fibonacci_stack(enter);
		pause();
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