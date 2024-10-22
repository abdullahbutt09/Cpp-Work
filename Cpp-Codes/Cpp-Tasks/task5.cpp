#include <iostream>
using namespace std;
class Employee
{
protected:
    string name;
    int id;
    double salary;

public:
    void GetData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter salary: ";
        cin >> salary;
        cout << endl;
    }
    virtual void DisplayData()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
    virtual double CalculatePay()
    {
        return salary;
    }
};
class RegularEmployee : public Employee
{
protected:
    double bonus = 100;

public:
    void DisplayData()
    {
        cout << "------> REGULAR EMPLOYEE <------" << endl;
        Employee::DisplayData();
        cout << "Bonus: " << bonus << endl;
    }
    double CalculatePay()
    {
        return salary + bonus;
    }
};
class ContractEmployee : public Employee
{
protected:
    int contract_duration = 5;

public:
    void DisplayData()
    {
        cout << "------> CONTRACT EMPLOYEE <------" << endl;
        Employee::DisplayData();
        cout << "Contract Duration: " << contract_duration << " months" << endl;
    }
    double CalculatePay()
    {
        return salary * contract_duration;
    }
};
void PrintEmployeeDetails(Employee *emp)
{
    emp->GetData();
    emp->DisplayData();
    cout << "Pay: " << emp->CalculatePay() << endl;
}
int main()
{
    cout << endl;
    cout << "Name : Abdullah Bin Mughira" << endl;
    cout << "ROLL NUMBER : 2023 - BS - SE - 082" << endl;
    cout << "-----------------------------------------" << endl;
    RegularEmployee r1;
    ContractEmployee c1;
    PrintEmployeeDetails(&r1);
    cout << endl;
    PrintEmployeeDetails(&c1);
    cout << endl;
    return 0;
}