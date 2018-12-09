#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    int year;
    string gender;
public:
    Person(string name1, int year1, string gender1);
    Person();
    void input();
    void print();
        };


Person::Person(string name1, int year1, string gender1)
{
    name=name1;
    year=year1;
    gender=gender1;
}

Person::Person(){
	name=' ';
	year=0;
	gender=' ';
}

void Person::input() {
    cout<<"Ім'я: "<<endl;
    cin>>name;
    cout<<"Рік народження: "<<endl;
    cin>>year;
    cout<<"Стать: "<<endl;
    cin>>gender;
}
void Person::print() {
    cout<<"Ім'я: "<<name<<endl;
    cout<<"Рік народження: "<<year<<endl;
    cout<<"Стать: "<<gender<<endl;

}


class Employee: public Person
{
    int tabNumb;
    float endWork, startWork;
    string position;
public:
    Employee():Person() { tabNumb = 0; }
    ~Employee(){
	};

    Employee(int tabNumb1, float startWork1, float endWork1, string position1):Person(name, year, gender)
    {
	    tabNumb=tabNumb1;
        startWork=startWork1;
        endWork=endWork1;
        position=position1;
      }
      void input();
      void print();
      };

void Employee::input() {
    Person::input();
    cout<<"Табельний номер: "<<endl;
    cin>>tabNumb;
    cout<<"Початок роботи: "<<endl;
    cin>>startWork;
    cout<<"Кінець роботи: "<<endl;
    cin>>endWork;
    cout<<"Посада: "<<endl;
    cin>>position;
    cout<<endl;
}

void Employee::print() {
    Person::print();
    cout<<"Табельний номер: "<<tabNumb<<endl;
    cout<<"Початок роботи: "<<startWork<<endl;
    cout<<"Кінець роботи: "<<endWork<<endl;
    cout<<"Посада: "<<position<<endl;
}

int main()
{
    Person obj1;
    Employee obj2;
    obj2.input();
    
    obj2.print();
    return 0;
}