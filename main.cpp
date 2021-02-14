#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char** argv) {
	long long int num;
	
	cout << "Maximum number = ";
	cin >> num;
	
	srand (time(NULL));
	cout << rand () % num + 1;
	
	
	return 0;
}
