//frame.cpp
#include <iostream>
#include <string>

int main()
{
	std::cout << "What's your name? >>> ";
	std::string name;
	std::cin >> name;

	//****************//greeting ���� +4���� * (1)
	//*              *//greeting ���� +2 ����  (2)
	//* Hello, shin!  *//greeting ���� + 4     (3)
	//*              *//greeting ���� +2 ����  (4)
	//****************//greeting ���� +4���� * (5)

	//�λ� ���ڿ� �����
	const std::string greeting = "Hello," + name + "!";

	//2��°, 4��° ���� �����
	const std::string spaces(greeting.size(), ' ');// null (��) ���ڿ�
	const std::string line24 = "* " + spaces + " *";

	//1��°, 5��° ���� �����
	const std::string line15(line24.size(),'*');

	//�λ� ���� ���
	std::cout << std::endl;
	std::cout << line15 << std::endl;
	std::cout << line24 << std::endl;
	std::cout << "* " << greeting << " *" << std::endl;
	std::cout << line24 << std::endl;
	std::cout << line15 << std::endl;

	return 0;
}