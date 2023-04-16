#include<iostream>



class Calculator
{

public:

	double num1;
	double num2;	

	bool set_num1(double num1) {                  // ����� ����������� num1 �� ����� 0.
		if (num1 == 0) {
			std::cout << "\n�� ������ ����!\n";
			return false;
		}
		else { 
			this->num1 = num1; 
		    return true;
		}
	}
	bool set_num2(double num2) {                   // ����� ����������� num2 �� ����� 0.
		if (num2 == 0) {
			std::cout << "\n�� ������ ����!\n";
			return false;
		}
		else{ 
			this->num2 = num2;
		    return true;
		}
	}
	
	// ������ ����������
	double add() {
		std::cout << "num1 + num2 = " << num1 + num2 << "\n";
		return 0;
	}
	double multiply() {
		std::cout << "num1 * num2 = " << num1 * num2 << "\n";
		return 0;
	}
	double subtract_1_2() {
		std::cout << "num1 - num2 = " << num1 - num2 << "\n";
		return 0;
	}
	double subtract_2_1() {
		std::cout << "num2 - num1 = " << num2 - num1 << "\n";
		return 0;
	}
	double divide_1_2() {
		std::cout << "num1 / num2 = " << num1 / num2 << "\n";
		return 0;
	}
	double divide_2_1() {
		std::cout << "num2 / num1 = " << num2 / num1 << "\n";
		return 0;
	}
};


int main() {

	setlocale(LC_ALL, "Russian");

	Calculator p;                                  // ��������� � ������ Calculator

	while (true)
	{

	double num1, num2;
	do {
		std::cout << "������� num1: " << std::endl;
		std::cin >> num1;
	} while (!p.set_num1(num1));
	
	do {
		std::cout << "������� num2: " << std::endl;
		std::cin >> num2;
	} while (!p.set_num2(num2));
	
	p.add();
	p.multiply();
	p.subtract_1_2();
	p.subtract_2_1();
	p.divide_1_2();
	p.divide_2_1();
	}
	return 0;
}