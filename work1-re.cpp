
#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
int main()
{
    const float WIDTH = 9.5;
    int stdnum[15];
    string std_name[15];
    string std_surname[15];
    int room[15];
    int homework[15];
    int midterm[15];
    int final[15];
    int sum[15];
    int test[15];
    char grade[15];
    int i;
    int count = 1;
    int fun;
		cout <<"Enter Number(1=start//0=end) : ";
        cin >>fun;
    if(fun == 1){

    for(int i = 0;i <= 2;i++)
    {
        cout <<"["<<count<<"] " <<"Enter student name and surname : ";
        cin >> std_name[i] >> std_surname[i];

        cout << "Enter in room point :";
        cin >> room[i];

        while (room[i] < 0 || room[i] > 5)
        {
            cout << "Enter in room point :";
            cin >> room[i];
        }

        cout << "Enter in homework point :";
        cin >> homework[i];
        while (homework[i] < 0 || homework[i] > 15)
        {
            cout << "Enter in homework point :";
            cin >> homework[i];
        }

        cout << "Enter in test point :";
        cin >> test[i];
        while (test[i] < 0 || test[i] > 20)
        {
            cout << "Enter in test point :";
            cin >> test[i];
        }

        cout << "Enter in midterm point :";
        cin >> midterm[i];
        while (midterm[i] < 0 || midterm[i] > 30)
        {
            cout << "Enter in midterm point :";
            cin >> midterm[i];
        }

        cout << "Enter in final point :";
        cin >> final[i];
        while (final[i] < 0 || final[i] > 30)
        {
            cout << "Enter in final point :";
            cin >> final[i];
        }
        // cout << std_name[i]<<endl;
        // cout << room[i]<<endl;
        // cout << homework[i]<<endl;
        // cout << test[i]<<endl;
        // cout << midterm[i]<<endl;
        // cout << final[i]<<endl;

        sum[i] = room[i]+homework[i]+test[i]+midterm[i]+final[i];
        //cout << sum[i];
        if(sum[i] >= 80){
            grade[i] = 'A';
        }else if(sum[i] >= 70){
            grade[i] = 'B';
        }else if(sum[i] >= 60){
            grade[i] = 'c';
        }else if(sum[i] >=50){
            grade[i] = 'D';
        }else grade[i] = 'F';
   count++;
    }
    cout << "|=============================================================|\n";
    cout << "|\t|No.|\t|     Name-Surname     | |point| |Grade|\t\n";
    cout << "|=============================================================|\n";

    // loop table
    count -=15;
    count = 1;
    cout << setfill(' ');
    for(int i = 0;i <= 2; i++)
    {
        cout << "| " << setw(WIDTH) << count++;
        cout << " :" << setw(WIDTH+2) << std_name[i];
        cout << "  " << setw(WIDTH) << std_surname[i];
        cout << "  " << setw(WIDTH) << sum[i];
        cout << "  " << setw(WIDTH-4) << grade[i];
        cout << setw(WIDTH+1) << " |";
        cout << "  " << endl;
    cout << "|=============================================================|\n";
}
}
else if(fun == 0)
{
	cout <<"End of Program ";
        
}
}
