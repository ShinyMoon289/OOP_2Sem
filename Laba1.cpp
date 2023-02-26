#include <iostream>
#include<string>
#include<vector>
using namespace std;

class PostalAddress
{
public:
	string city, street;
	int strNum, postInd;
	PostalAddress()
	{
		cout << "Enter the city: ";
		getline(cin, city);
		cout << "Enter the street: ";
		getline(cin, street);
		cout << "Enter house number: ";
		do
		{
			cin >> strNum;
		} while (strNum < 1);
		cout << "Enter local postal number: ";
		do
		{
			cin >> postInd;
		} while (postInd < 1);
		cout << "Postal adress created!"<<endl;
	}
	~PostalAddress()
	{
		cout << "Postal adress deleted.";
	}
	void ChangeAddress()
	{
		int clicker;
		cout << "What part do you wanna edit?"<<endl;
		cout << "1 - City" << endl;
		cout << "2 - Street" << endl;
		cout << "3 - Postal Number" << endl;
		cout << "4 - House number" << endl;
		cout << "0 - Cancel" << endl;
		
		do
		{
			cin >> clicker;
		} while (clicker > 5 && clicker < 0);

		switch (clicker)
		{
		case 1:
		{
			cout<< "Enter the new city: ";
			cin.ignore();
			getline(cin, city);
			break;
		}
		case 2:
		{
			cout << "Enter the new street: ";
			cin.ignore();
			getline(cin, street);
			break;
		}
		case 3:
		{
			cout << "Enter the new postal number: ";
			do
			{
				cin >> postInd;
			} while (postInd < 1);
			
			break;
		}
		case 4:
		{
			cout << "Enter the new house number: ";
			do
			{
				cin >> strNum;
			} while (strNum < 1);
			
			break;
		}
		case 0:
		{
			break;
		}
		}
	}
	void DisplayAddress()
	{
		cout << city << ", " << street << ", " << strNum << ". " << "Postal number: " << postInd;
	}
};

int main()
{
	PostalAddress address;
	while (true)
	{
		int clicker;
		cout << "MENU:" << endl;
		cout << "1 - Display the address" << endl;
		cout << "2 - Edit the address" << endl;
		cout << "0 - Exit the program" << endl;
		do
		{
			cin >> clicker;
		} while (clicker > 2 && clicker < 0);
		switch (clicker)
		{
		case 1:
		{
			address.DisplayAddress();
			break;
		}
		case 2:
		{
			address.ChangeAddress();
			break;
		}
		case 0:
		{
			return 0;
		}
		}
	}

	return 0;

}
