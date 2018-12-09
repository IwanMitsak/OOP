#include<iostream>

using namespace std;

class Employee {
	private:
		string Name, Familie;
		int Salary;
		
	public: 
		Employee () {
		Name = "Vasya";
		Familie = "Pupkin";
		Salary;
		}
		string GetName () {
			return Name;
		}
		string SetName () {
			return Name;
		} 
		string GetFamilie () {
			return Familie;
		}
		string SetFamilie () {
			return Familie;
		}
		int GetSalary () {
			return Salary;
		}
		int SetSalary (int Salary) {
			if (Salary >=0)
				this->Salary = Salary;
		}
			void data() {
	    cout << "Name: " << Name << endl << "Familie: " << Familie << endl << "Salary: " << Salary << endl;
	}
};

  int main () {
  Employee Men;
  Men.SetSalary(5000);
  Men.data();
}