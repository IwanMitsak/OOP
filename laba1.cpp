#include <iostream>
#include <cstring>

using namespace std;

int main() {

	string n;

	cout << "Enter five-digit number: ";
	cin >> n;

	if(n.size()==5) {
		if((n[0]==n[4])&&(n[1]==n[3]))
			cout << "This is number polinom" << endl;
    	else 
        	cout << "!NO POLINOM!";
	}
    else
       	cout << "You entered a non-five-digit number!";

    return 0;

}