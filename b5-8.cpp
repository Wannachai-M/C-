#include <iostream>
using namespace std;
int power2( int ); 
int main()
{
int x = 1;
while ( x <= 10) {
	cout<<power2(x) << "\n";
	x = x + 1;
}
	return(0);
}
int power2 (int n)
{
	return(n * n);
}
	
