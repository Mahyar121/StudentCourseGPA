#include "Course.h"
#include "Node.h"
#include "Student.h"
#include "StudentVector.h"



int menuChoice() {
	cout << "1. Add Student" << endl;
	cout << "2. Remove Student" << endl;
	cout << "3. Add Course" << endl;
	cout << "4. Remove Course" << endl;
	cout << "5. Display Student's details" << endl;
	cout << "6. Exit" << endl;
	int choice;
	while (true) {
		cout << "Enter your choice: ";
		cin >> choice;
		if (choice < 1 || choice > 6) {
		cout << "Invalid choice. Try again!!" << endl;
		}
		else {
		return choice;
		}
	}
}

int main() {
	StudentVector list;
	vector<Student> students;
	int choice;
	while (true) {
		choice = menuChoice();
		switch (choice) {
		case 1:
			list.addS(students);
			break;
		case 2:
			list.removeS(students);
			break;
		case 3:
			list.addC(students);
			break;
		case 4:
			list.removeC(students);
			break;
		case 5:
			list.printS(students);
			break;
		case 6:
			return 0;
			break;
		}


		cout << endl << endl;
	}
	system("PAUSE");
}
