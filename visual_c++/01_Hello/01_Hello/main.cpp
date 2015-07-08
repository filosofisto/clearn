#include <iostream> // include (‘‘impor t’’) the declarations for the I/O stream librar y

using namespace std; // make names from std visible without std:: (§3.3)

double square(double x)
{
	return x*x;
}

void print_square(double x)
{
	cout << "the square of " << x << " is " << square(x) << "\n";
}

void print_sizeof()
{
	//sizeof
	cout << "sizeof(char): " << sizeof(char) << "\n";
	cout << "sizeof(int): " << sizeof(int) << "\n";
	cout << "sizeof(long): " << sizeof(long) << "\n";
	cout << "sizeof(float): " << sizeof(float) << "\n";
	cout << "sizeof(double): " << sizeof(double) << "\n";
}

int main()
{
	cout << "Hello World!\n";
	print_square(2.0);
	print_sizeof();

}
