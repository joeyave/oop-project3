#include "Stack.h"
#include "Wrap.h"

int main()
{
	Stack<int> stk1;
	for (int i = 0; i < 10; i++)
		stk1.push(i);
	std::cout << "Stack 1 BEFORE\n" << stk1;

	Stack<int> stk2;
	for (int i = 111; i < 1000; i = i + 111)
		stk2.push(i);
	std::cout << "Stack 2\n" << stk2;

	Wrap<Stack<int>> wrp1(stk1);
	Wrap<Stack<int>> wrp2(stk2);

	wrp1(2, 5) = wrp2;
	std::cout << "Stack 1 AFTER\n" << stk1;
}