#pragma once

typedef class Worker
{
	//void initialize();
	int department;
	double salary;
	static int count;
	//std::pair <emp, int> searchEmp (std::vector <emp> data);
	//void salarySort(std::vector <emp>* data);
	//friend void searchDepartment(std::vector <emp> data);
public:
	FIO* fio;
	Worker(char* _name, char* _secondName, int _department, double _salary);
	Worker(int var = 0);
	Worker(const Worker &_someEmp);
	~Worker();
	int getDepartment() const { return department; }
	double getSalary() const { return salary; }
	void setDepartment(int _department) { department = _department; }
	void setSalary(double _salary) { salary = _salary; }
	int getCount() { return count; }
}emp;
int Worker::count = 0;

Worker::Worker(const Worker &_someEmp)
{
	/*this->fio->setName(_someEmp.fio->getName());
	this->fio->setSecondName(_someEmp.fio->getSecondName());*/
	//FIO *fio = new FIO(_someEmp.fio);
	FIO* someFIO(_someEmp.fio);
	this->fio = someFIO;
	this->setDepartment(_someEmp.getDepartment());
	this->setSalary(_someEmp.getSalary());
	//count++;			��� ��� ��������? count ��� ���������� ��� ������ ������������� � ������������
}

/*void Worker::initialize()
{
	name = "";
	fam = "";
	department = 0;
	salary = 0;
}*/

Worker::Worker(int var)
{
	//initialize();
	if (var == 0)
	{
		FIO* _fio = new FIO();
		fio = _fio;
		/*std::cout << "Enter name: ";
		//std::cin.clear();
		std::string _str;
		std::getline(std::cin, _str);
		fio->setName(_str);
		//setName(_str);
		std::cout << "Enter secondName: ";
		std::getline(std::cin, _str);
		fio->setSecondName(_str);*/
		//setFam(_str);
		std::cout << "Enter department: ";
		setDepartment(getIntNumber());
		std::cout << "Enter salary: ";
		setSalary(getDoubleNumber());
		//count++;
	}
}

Worker::Worker (char* _name, char* _secondName, int _department, double _salary)
{
	this->fio->setName(_name);
	this->fio->setSecondName(_secondName);
	department = _department;
	salary = _salary;
	//count++;
}

Worker::~Worker()
{
	//count--;
}

//��� �������� - ������������� ��� ����������. ��, � ��� ���� ����� ���-�� �������� ������ ���� =)
//��, ��� *0**0*0* (--* --- *-- -* --- -*- --- -**), ��� ��� � ������������