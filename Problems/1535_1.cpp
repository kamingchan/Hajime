#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	if (a+b==c||abs(a-b)==c) cout << "Yes" << endl;
	else cout << "No" << endl;
	
	
	return 0;
}
