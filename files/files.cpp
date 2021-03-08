#include "dir.h"

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "rus");

	cout << "Command line arguments:" << endl;
	for (int i = 0; i < argc; i++) cout << i << " " << argv[i] << endl;
	cout << "======================================" << endl;

	string str = (const char*)argv[1];

	fs::create_directories(str + "\\media");
	fs::create_directories(str + "\\txt");
	fs::create_directories(str + "\\code");

	for (const auto& name : get_filenames(str)) cout << name << '\n';

	system("pause");
}
