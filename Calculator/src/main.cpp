#include <iostream>

class Operator {
protected:
	;
};

class Add : public Operator {
public:
	double a_firstnum;
	double a_secondnum;
	double a_result;
	void add(double afn, double asfn) {
		a_firstnum = afn;
		a_secondnum = asfn;
		
		a_result = a_firstnum + a_secondnum;
	}
};

class Subtract : public Operator {
public:
	double s_firstnum;
	double s_secondnum;
	double s_result;
	void subtract(double sfn, double ssfn) {
			s_firstnum = sfn;
			s_secondnum = ssfn;
		
			s_result = s_firstnum + s_secondnum;
	}
};

class Multiply : public Operator {
public:
	double m_firstnum;
	double m_secondnum;
	double m_result;
	void multiply(double mfn, double msfn) {
		m_firstnum = mfn;
		m_secondnum = msfn;
		
		m_result = m_firstnum + m_secondnum;
	}
};

class Divide : public Operator {
public:
	double d_firstnum;
	double d_secondnum;
	double d_result;
	void divide(double dfn, double dsfn) {
		d_firstnum = dfn;
		d_secondnum = dsfn;
		
		d_result = d_firstnum + d_secondnum;
	}
};

int main() {
	Add a;
	Subtract s;
	Multiply m;
	Divide d;
	char op;
	double fn;
	double sn;
	
	std::cout << "Calculator" << std::endl;
	std::cout << "Enter operation to use [+] [-] [*] [/]: ";
	std::cin >> op;
	std::cout << "Enter firstnum: ";
	std::cin >> fn;
	std::cout << "Enter secondnum: ";
	std::cin >> sn;
	
	switch(op) {
		case '+':
				a.add(fn, sn);
				std::cout << "Result is: " << a.a_result << "\n";
				break;
		case '-':
				s.subtract(fn, sn);
				std::cout << "Result is: " << s.s_result << "\n";
				break;
		case '*':
				m.multiply(fn, sn);
				std::cout << "Result is: " << m.m_result << "\n"; 
				break;
		case '/':
				d.divide(fn, sn);
				std::cout << "Result is: " << d.d_result << "\n";
				break;
	} 
}
