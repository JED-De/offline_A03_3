#include <iostream>
using namespace std;

int main()
{
	int time;
	cout << "Bitte geben Sie die Stunde der aktuellen Uhrzeit ein: ? ";
	cin >> time;

	if ( time <= 5 && time >=0 || time == 23)
	{
		cout << "Gute Nacht." << endl;
	}

	else if (time >= 6 && time <= 10)
	{
		cout << "Guten Morgen." << endl;
	}

	else if (time >= 11 && time <= 13)
	{
		cout << "Mahlzeit." << endl;
	}

	else if (time >= 14 && time <= 17)
	{
		cout << "Guten Tag." << endl;
	}

	else if (time >= 18 && time <= 22)
	{
		cout << "Guten Abend." << endl;
	}

	else
	{
		cout << "Keine erlaubte Stundenangabe." << endl;
	}

	system("PAUSE");
	return 0;
}