#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;


#include <iomanip>

using std::setw;
using std::setprecision;


int main()
{	
	int count;
	int x;
	double charge;
	double a;
	double b;
	double c;

	cout<< "Enter the number of Hours:\n ";
	cin >> a >> b >> c;

	
	cout<< setw(5)<< "Car" << setw(10)<< "Hours" << setw(15)<< "Charge\n";		

	//	cout << fixed << setprecision (1);

	count = 1;
	while ( count <=3 ) {
		
		if (count == 3)
			x = c;

		else if (count == 2)
			x = b;

		else if (count == 1)
			x = a;

	if (x <= 3)
		charge = 2000 * x;

		else if (x >7)
			charge = 10000;
		else if (x > 3)
			charge = 6000 + (x - 3) * (1000);

		cout <<setw(5) << count<< setw(9) << x << setw(12)<< "Rp"<<charge <<"\n";

count = count + 1;}
	
	return 0;

}