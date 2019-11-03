#include "Stack.h"
#include "Wrap.h"

int main()
{
	Stack<int> stk;

	stk.push(5);
	stk.push(5);
	stk.push(5);
	stk.push(5);
	stk.push(5);
	stk.push(5);
	stk.push(5);
	stk.push(5);
	stk.push(5);
	stk.push(5);

	Stack<int> stk2;
	stk2.push(111);	
	stk2.push(222);
	stk2.push(333);
	stk2.push(444);
	stk2.push(555);
	stk2.push(666);
	stk2.push(777);
	stk2.push(888);
	stk2.push(999);

	Wrap<Stack<int>> wrp1(stk);
	Wrap<Stack<int>> wrp2(stk2);

	wrp1(2, 5) = wrp2;

	std::cout << stk;
	std::cout << "---\n";
	std::cout << stk2;

}