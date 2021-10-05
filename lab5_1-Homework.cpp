#include <iostream>
using namespace std;
int main()
{
    char Ch;
    cout << "Enter character : ";
    cin >> Ch;
    cout << endl; 
    int ascii_Ch = Ch;

    if(ascii_Ch >= 48 && ascii_Ch <= 57){
        cout << "'\'" << Ch << "'\'" " is digit\n";
        }
    else if(ascii_Ch >= 65 && ascii_Ch <= 90){
        cout << "'\'" << Ch << "'\'" << "is Upper character.\n";
        cout << "'\'" << Ch << "'\'" " convert to lower ";
        Ch = Ch+32;
        cout << "'\'" << Ch << "'\'";
    }

    else if(ascii_Ch >= 97 && ascii_Ch <= 122){
        cout << "'\'" << Ch << "'\'" << "is lower character.\n";
        cout << "'\'" << Ch << "'\'" " convert to Upper ";
        Ch = Ch-32;
        cout << "'\'" << Ch << "'\'";

    }else cout << "special character.";
}
