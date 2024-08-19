#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>

using namespace std;

void displayMainMenu();
void handleCalculator();
void handleCyberwarfare();

int main() {
	const char username[] = "admin";
	const char password[] = "admin123";
	char inputUsername [50];
	char inputPassword[50];	
	
	time_t now = time(0);
	cout << ctime(&now);
	cout << "____________________\n";
	cout << "	Cyberscape beta OS v.1.0\n\n";	
	cout << "____________________\n";

	while (true) {
		cout << "_____________n";
		cout << "Authentication\n";
		cout << "_____________\n";
		cout << "Username: ";
		cin >> inputUsername;
		cout << "Password: ";
		cin >> inputPassword;
		
		if (strcmp(inputUsername, username) == 0 && strcmp(inputPassword, password) == 0) {
			cout << "Logged in as superuser\n";
			cout << "Welcome to PL OS\n";
			break;
		} else {
			cout << "Invalid credentials, please try again.\n";
	}
}
// Main command loop
while (true) {
	char command[50];
	cout << "Command: ";
	cin >> command;
	
	if (strcmp(command, "Calc") == 0) {
		handleCalculator();
	} else if (strcmp(command, "Game") == 0) {
		handleCyberwarfare();
	} else {
		cout << "Unknown command. Please try again.\n";
	}
}
	return 0; 
}
void handleCalculator() { 
	float num1, num2;
	int choice;

	cout << "Welcome to simple calculator\n";
	cout << "1. Addition\n";
	cout << "2. Subtraction\n";
	cout << "3. Multiplication\n";
	cout << "4. Division\n";
	cout << "5. About calculator\n";
	cout << "Choose an option: ";
	cin >> choice;
	
	switch (choice) {
		
	case 1:
		cout << "Enter 1st number: ";
		cin >> num1;
		cout << "Enter 2nd number: ";
		cin >> num2;
		cout << "Your answer is: " << num1 + num2 << endl; 
		break;
	case 2:
		cout << "Enter 1st number: ";
		cin >> num1;
		cout << "Enter 2nd number: ";
		cin >> num2;
		cout << "Your answer is: " << num1 - num2 << endl;
		break;
	case 3:
		cout << "Enter 1st number: ";
		cin >> num1;
		cout << "Enter 2nd number: ";
		cin >> num2;
		cout << "Your answer is: " << num1 * num2 << endl;
		break;
	case 4:
		cout << "Enter 1st number: ";
		cin >> num1;
		cout << "Enter 2nd number: ";
		cin >> num2;
		if (num2 != 0) {
			cout << "Your answer is:" << num1 / num2 << endl;
		} else {
			cout << "Error: Division by zero!" << endl;
			 }
		break;
	case 5:
		cout << "Fundamentals of idea. \n";
		break;
	default:
		cout << "Invalid option selected.\n";
		break;
	}
	
}
void handleCyberwarfare() {
	int choice;
	char command[50];

	cout <<"_____________________ \n";
	cout <<"***Welcome to Cyber World*** \n";
	cout <<"_________________________\n";

	cout << "1. Start\n";
	cout << "2. Credits\n";
	cout << "Choose an option: ";
	cin >> choice;

	switch (choice) {
		case 1:
			cout << "Enter command: ";
			cin >> command;
			
			if (strcmp(command, "Quit") == 0) {
				cout << "Network connection closed.\n";
			} else {
			cout << "Unknown command.\n";
			}
			break;
		case 2:
			cout << "This game is under development, please report any bugs to the creator.\n";
			break;
		default:
			cout << "Invalid option.\n";
			break;
		}
	}

