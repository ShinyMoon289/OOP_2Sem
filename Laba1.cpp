#include <iostream>
#include<string>
#include<vector>
using namespace std;

class PostalAddress
{
private:
	string cityName, streetName;
	int strNum, postInd;
public:
	
	string getCityName()		//for city name
	{
		return cityName;
	}
	void setCityName(string ct)
	{
		cityName=ct;
	}

	string getStreetName()		//for street name
	{
		return streetName;
	}
	void setStreetName(string str)
	{
		streetName = str;
	}

	int getStreetNum()		//for street number
	{
		return strNum;
	}
	void setStreetNum(int num)
	{
		strNum = num;
	}

	int getPostIndex()		//for postal index
	{
		return postInd;
	}
	void setPostIndex(int index)
	{
		postInd = index;
	}
	
	PostalAddress()			//automatic constructor
	{
		string cityName, streetName;
		int postIndex, streetNum;

		cout << "Enter the city: ";
		cin.ignore();
		getline(cin, cityName);
		setCityName(cityName);

		cout << "Enter the street name: ";
		getline(cin, streetName);
		setStreetName(streetName);

		cout << "Enter house number: ";
		do
		{
			cin >> streetNum;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(INT_MAX, '\n');
			}
		} while (streetNum < 1);
		setStreetNum(streetNum);

		cout << "Enter local postal number: ";
		do
		{
			cin >> postIndex;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(INT_MAX, '\n');
			}
		} while (postIndex < 1);
		setPostIndex(postIndex);

	}

	~PostalAddress(){}

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
			string city;
			cout << "Enter the new city: ";
			cin.ignore();
			getline(cin, city);
			setCityName(city);
			break;
		}
		case 2:
		{
			string street;
			cout << "Enter the new street: ";
			cin.ignore();
			getline(cin, street);
			setStreetName(street);
			break;
		}
		case 3:
		{
			int index;
			cout << "Enter the new postal number: ";
			do
			{
				cin >> index;
				while (cin.fail())
				{
					cin.clear();
					cin.ignore(INT_MAX, '\n');
				}
			} while (index < 1);
			setPostIndex(index);
			break;
		}
		case 4:
		{
			int number;
			cout << "Enter the new house number: ";
			do
			{
				cin >> number;
				while (cin.fail())
				{
					cin.clear();
					cin.ignore(INT_MAX, '\n');
				}
			} while (number < 1);
			setStreetNum(number);
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
		cout << getCityName() << ", " << getStreetName() << ", " << getStreetNum() << ". " << "Postal number: " << getPostIndex() << endl;
	}
};

vector<PostalAddress> listOfAdresses;

int main()
{
	
	
	while (true)
	{
		int clicker;
		cout << endl << "MENU:" << endl;
		cout << "1 - Display the address" << endl;
		cout << "2 - Edit the address" << endl;
		cout << "3 - Exit the program" << endl;
		cout << "4 - Add an address" << endl;
		cout << "5 - Delete an address" << endl;
		do
		{
			cin >> clicker;
			
		} while (clicker > 5 && clicker < 1);
		switch (clicker)
		{
		case 1:
		{
			for (int m = 0; m < listOfAdresses.size(); m++)
			{
				
				for (int i = 0; i < 31; i++)cout << "-";
				cout << endl;
				listOfAdresses[m].DisplayAddress();
			}
			for (int i = 0; i < 31; i++)cout << "-";
			break;
		}
		case 2:
		{
			cout << "Which address do you want to change?";
			int chooser;
			cin >> chooser;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(INT_MAX, '\n');
			}
			if (chooser > listOfAdresses.size() || chooser < 0)
			{
				cout << "Incorrect number!";
				break;
			}
			listOfAdresses[chooser].ChangeAddress();
			break;
		}
		case 3:
		{
			return 0;
		}
		case 4:
		{
			PostalAddress newaddress;
			listOfAdresses.push_back(newaddress);
			break;
		}
		case 5:
		{
			cout << "Which address do you want to delete?";
			int chooser;
			cin >> chooser;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(INT_MAX, '\n');
			}
			if (chooser > listOfAdresses.size()-1 || chooser < 0)
			{
				cout << "Incorrect number!";
				break;
			}
			listOfAdresses.erase(listOfAdresses.begin() + chooser);
			break;
		}
		}
	}
	return 0;

}
