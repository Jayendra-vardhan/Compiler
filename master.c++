// A C++ program that compiles and runs another C++
// program
#include <bits/stdc++.h>
using namespace std;
int main ()
{
	char filename[30] ="EX1.c";
	cout << "file name to compile : " << filename<<endl;
	
	// Build command to execute. For example if the input
	// file name is a.cpp, then str holds "gcc -o a.out a.cpp"
	// Here -o is used to specify executable file name
	//string str = "gcc ";
    //str = "a.out " + filename;
	char a[35]="./a ";
	strcat(a,filename);
	string str = a;
	// Convert string to const char * as system requires
	// parameter of type const char *
	const char *command = str.c_str();

	cout << "Compiling file using " << command << endl;
	system(command);

	cout << "\nRunning file ./a.out";
	system("./a.out");

	return 0;
}
