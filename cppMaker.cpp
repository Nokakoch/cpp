#include <iostream>
#include <fstream>

using namespace std;

int main() {
	string name;
	cout << "Enter your file Name: ";
	cin >> name;
	ofstream File(name+".cpp");

	File<<"#include <iostream>\nusing namespace std;\n\nint main() {\n\n\n}";
	File.open(name+".cpp");
	
}
