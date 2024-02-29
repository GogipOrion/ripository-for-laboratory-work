
#include "iostream"
#include "string"

using namespace std;

int main()
{
	int a, b, c, n;
	cin >> a;
	cin >> b;
	cin >> c;
	n = (a + b) * c;
	if (n < (a * (b + c)))
	{
		n = (a * (b + c));
	}
	if (n < (a * b * c))
	{
		n = (a * b * c);
	}
	cout << n;
}
