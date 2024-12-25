

#include <iostream>
using namespace std;



/*
* Function:meterConvert
* Usage: meterConvert(double m,double i double f);
* --------------------------
* call with reference;
*/

void merterConvert(double &m, double &i, double &f);

int main()
{
	double m;
	double i;
	double f;
	cout << "Convert meter to feet and inches" << endl;
	cout << "Meters: ";
	cin >> m;
	merterConvert(m, i, f);
	cout << f << " feet and " << i << " inches" << endl;
}

void merterConvert(double& m, double& i, double& f)
{
	i = m / 0.0254;
	f = (int)i / 12;
	i = i - f * 12;
}
