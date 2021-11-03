#include <cstring>
#include <iostream>
#include <string.h>
using namespace std;
void isPalindrome(char number[]);
int main() {
 int x;
 char text[100] = {};
 cout << "Enter your text : ";
 cin >> text;
 x = strlen(text) - 1;
 for (int i = 0; i <= strlen(text)-1; i++) {
 cout << text[i] << " = " << text[x] << endl;
 x--;
 }
 isPalindrome(text);
 return 0;
}
void isPalindrome(char number[]) {
 bool flag = true;
 int x = (strlen(number) - 1);
 for (int i = 0; i <= x; i++) {
 if (number[i] != number[x]) {
 flag = false;
 }
 x--;
 }
 if (flag == false) {
 cout << "This is not palindrome text " << endl;
 } else {
 cout << "This is palindrome text ";
 }
}