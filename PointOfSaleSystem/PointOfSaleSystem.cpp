// PointOfSaleSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main() {

	int menuChoice;

	string userName = "", passWord = "", confirmPassword = "";
	string newPassword = "", confirmNewPassword = "";
	bool isLogin = true;

	string mobileNumber = "", aMobileNumber = "";;
	int verificationCode;


	while (isLogin) {
		cout << "Point Of Sale System\n";
		cout << "[1] Login\n[2] Sign up\n[3] Forget Password\n[4] Exit\n";
		cout << "Enter Choice: ";
		cin >> menuChoice;

		while (true) {
			if (menuChoice == 2) { // Sign up
				cout << "---------------------------------\n";
				cout << "Sign Up Account\n";
				cout << "Enter Mobile Number: ";
				cin >> mobileNumber;

				cout << "Create Username    : ";
				cin >> userName;

				cout << "Create Password    : ";
				cin >> passWord;

				cout << "Confirm Password   : ";
				cin >> confirmPassword;

				if (passWord == confirmPassword) {
					cout << "Account Successfully Created!\n";
					cout << "Back To Main Menu\n";
					cout << "---------------------------------\n";
					break;
				}
				else {
					cout << "Password Do Not Match\n";
				}
			}
			else if (menuChoice == 3) { // Forget Password
				cout << "---------------------------------\n";
				cout << "Forget Password\n";
				cout << "Enter Mobile Number: ";
				cin >> aMobileNumber;

				if (aMobileNumber == mobileNumber) {
					cout << "Input Verification Code:";
					cin >> verificationCode;
					if (verificationCode == 123) {
						cout << "Enter New Password     : ";
						cin >> newPassword;

						cout << "Confirm New Password   : ";
						cin >> confirmNewPassword;
						if (newPassword == confirmNewPassword) {
							passWord = newPassword;
							cout << "Account Successfully Changed Password!\n";
							cout << "---------------------------------\n";
							break;
						}
						else cout << "Password Do Not Match!\n";
					}
					else cout << "Verification Code Does Not Match!\n";
				}
				else cout << "Mobile Number Does Not Match!\n";
			}
			else if (menuChoice == 4) {
				break;
			}
			else if (menuChoice == 1) { // Log in
				string enterUsername, enterPassword;
				cout << "Enter Username: ";
				cin >> enterUsername;

				cout << "Enter Password: ";
				cin >> enterPassword;

				if (enterUsername == userName && enterPassword == passWord) {
					cout << "---------------------------------\n";
					cout << "Login Successful\n";
					cout << "Welcome " << userName << endl;
					isLogin = false;
					break;
				}
				else {
					cout << "Account Do Not Match!\n";
				}
			}
			else {
				cout << "Invalid Choice 1 to 4 nga lang e, bobo!";
				break;
			}

		}
	}

	cout << "Welcome TO Menu Item\n";

	return 0;
}
