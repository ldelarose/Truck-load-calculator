#include <iostream>

using namespace std;

int main()
{
	int gravel;
	int concrete;
	int sand;
	

	double materials, totalcostofgoods, total_loads ;

	cout << "Welcome To LD Gonzalez Trucking!\n";
	cout << "\n";


	cout << "How many loads gravel will you be needing?\n";
	cin >> gravel;

	cout << "How many loads concrete will you be needing?\n";
	cin >> concrete ;

	cout << "How many loads sand will you be needing??\n";
	cin >> sand;



	totalcostofgoods = (gravel * 150) + (concrete * 250) + (sand *100);
	total_loads = gravel + concrete + sand;
	
	cout << "Total cost of service will be $" << totalcostofgoods << "\nFor a total of: " << total_loads << " Loads" <<  endl;

	return 0;

}