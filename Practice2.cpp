#include<iostream>
#include<math.h>
using namespace std;
int main() {
	cout << (2 * sin(20.0 / 180.0 * 3.14159) * cos(40.0 / 180.0 * 3.14159) - exp(-2.0)) /( 1 + 2 * cos(10.0 / 180.0 * 3.14159) * cos(10.0 / 180.0 * 3.14159)) << endl;
	return 0;
}