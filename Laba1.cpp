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
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(INT_MAX, '\n');
			}
		} while (strNum < 1);
		
		cout << "Enter local postal number: ";
		do
		{
			cin >> postInd;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(INT_MAX, '\n');
			}
		} while (postInd < 1);
		cout << "Postal adress created!"<<endl;
	}
	~PostalAddress()
	{
		cout << endl << "Postal adress deleted.";
	}
	void ChangeAddress()
	{
		int clicker;
		cout << "What part do you wanna edit?"<<endl;
		cout << "1 - City" << endl;
		cout << "2 - Street" << endl;
		cout << "3 - Postal Number" << endl;
		cout << "4 - House number" << endl;
		cout << "5 - Cancel" << endl;
		
		do
		{
			cin >> clicker;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(INT_MAX, '\n');
			}
		} while (clicker > 6 && clicker < 1);

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
				while (cin.fail())
				{
					cin.clear();
					cin.ignore(INT_MAX, '\n');
				}
			} while (postInd < 1);
			
			break;
		}
		case 4:
		{
			cout << "Enter the new house number: ";
			do
			{
				cin >> strNum;
				while (cin.fail())
				{
					cin.clear();
					cin.ignore(INT_MAX, '\n');
				}
			} while (strNum < 1);
			
			break;
		}
		case 5:
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
		cout << endl << "MENU:" << endl;
		cout << "1 - Display the address" << endl;
		cout << "2 - Edit the address" << endl;
		cout << "3 - Exit the program" << endl;
		do
		{
			cin >> clicker;
			
		} while (clicker > 3 && clicker < 1);
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
		case 3:
		{
			return 0;
		}
		}
	}

	return 0;

}
