//e24076035簡成翰
//lab1
//Mar 4 2019

#include<iostream>

using namespace std;

int main()
{
	int user;
	cin >> user;
	cout << user << " ";
	int borrow;
	if (user == 0) {
		cout << "I'm not gullible！！！Bye～\n";
		return 0;
	}
	if (user == 1) {
		cout << "1" << " ";
		return 0;
	}
	else if (user % 2 != 0)	{
		borrow = user * 3 + 1;
		cout << borrow << " ";
	}
	else if (user % 2 == 0)	{
		borrow = user / 2;
		cout << borrow << " ";
	}
	if (borrow == 1) {
		return 1;
	}
	//auto-circuit by "while" loop～～
	while (borrow != 1) {
			if (borrow % 2 != 0) {
				borrow = borrow * 3 + 1;
				cout << borrow << " ";
			}
			else if (borrow % 2 == 0) {
				borrow = borrow / 2;
				cout << borrow << " ";
			}
		 if (borrow == 1) {
			 system("pause");
			 return 1;
			 break;
		 }
	}
	
	system("pause");
	return 0;
}
