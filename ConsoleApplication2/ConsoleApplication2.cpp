#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int soO, sothoc=0;
	cout << "Nhap so O: "; cin >> soO;
	for (int i = 0; i < soO; i++)
	{
		cout << " O so " << i << " co so thoc la " <<pow (2 , i) << endl;
		sothoc += pow(2 , i);
	}
	cout << "Tong so thoc chua trong " << soO << " o la " << sothoc << "hat\n";
	return 0;
}
