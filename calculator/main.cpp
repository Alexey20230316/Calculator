#include<iostream>



class Calculator
{

private:

	double num1;
	double num2;	

public:


	bool set_num1(double num1) {                  // метод провер€ющий num1 не равен 0.
		if (num1 == 0) {
			return false;
		}
		else { 
			this->num1 = num1; 
		    return true;
		}
	}
	bool set_num2(double num2) {                   // метод провер€ющий num2 не равен 0.
		if (num2 == 0) {
			return false;
		}
		else{ 
			this->num2 = num2;
		    return true;
		}
	}
	
	// методы вычислений
	double add(double summ) {
		summ = num1 + num2;
		return summ;
	}
	double multiply(double multi) {
		multi = num1 * num2;
		return multi;
	}
	double subtract_1_2(double sub1) {
		sub1 = num1 - num2;
		return sub1;
	}
	double subtract_2_1(double sub2) {
		sub2 = num2 - num1;
		return sub2;
	}
	double divide_1_2(double div1) {
		div1 = num1 / num2;
		return div1;
	}
	double divide_2_1(double div2) {
		div2 = num2 / num1;
		return div2;
	}
};


int main() {

	setlocale(LC_ALL, "Russian");

	double summ = 0;
	double multi = 0;
	double sub1 = 0;
	double sub2 = 0;
	double div1 = 0;
	double div2 = 0;

	Calculator p;                                  // экземпл€р р класса Calculator

	while (true)
	{
	double num1, num2;
	bool q;

	do {
		std::cout << "¬ведите num1: " << std::endl;
		std::cin >> num1;
		q = p.set_num1(num1);
		if (q == false) { std::cout << "Ќе верный ввод!" << std::endl; }
	} while (!q);
	
	do {
		std::cout << "¬ведите num2: " << std::endl;
		std::cin >> num2;
		q = p.set_num2(num2);
		if (q == false) { std::cout << "Ќе верный ввод!" << std::endl; }
	} while (!p.set_num2(num2));
	
	
	std::cout << "num1 + num2 = " << p.add(summ) << std::endl;
	std::cout << "num1 * num2 = " << p.multiply(multi) << std::endl;
	std::cout << "num1 - num2 = " << p.subtract_1_2(sub1) << std::endl;
	std::cout << "num2 - num1 = " << p.subtract_2_1(sub2) << std::endl;
	std::cout << "num1 / num2 = " << p.divide_1_2(div2) << std::endl;
	std::cout << "num2 / num1 = " << p.divide_2_1(div2) << std::endl;

	}

	return 0;
}