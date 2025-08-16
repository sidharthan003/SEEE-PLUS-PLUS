#include<iostream>
using namespace std;

class Employee {
private:
    string name;
    string employeeID;
    string position;
    double salary;

public:
    
    Employee(string n, string id, string pos, double sal)  {
		name = n;
		employeeID = id;
		position = pos;
		salary = sal;
	}

    
    void setSalary(double sal) { 
		salary = sal;
	 }
	 
    double getSalary()  {
	 	return salary;
	  }

    
    void raiseSalary(double percentage) {
        if (percentage > 0) {
            salary += salary * (percentage / 100);
        }
    }

    
    void displayEmployeeDetails()  {
        cout << "Name: " << name << ", Employee ID: " << employeeID << ", Position: " << position << ", Salary: $" << salary << endl;
    }
};
int main(){
	Employee employee("Charlie", "E123", "Developer", 60000.0);
    employee.displayEmployeeDetails();
    employee.raiseSalary(10);
    employee.displayEmployeeDetails();

}