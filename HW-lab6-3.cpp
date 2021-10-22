#include <iomanip>
#include <ios>
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
struct student {
 int Id;
 string Name;
 float test1,test2,test3,TotalScore; 
};
bool compareTotalScore(student TotalScoreA,student TotalScoreB){
 if (TotalScoreA.TotalScore > TotalScoreB.TotalScore){
 return true;
 } return false;
}
int main() {
 struct student Info[20];
 int highScore;
 int Id,countSumTest = 0,count = 1;
 float
Score,averageTotalScore,TotalScore2,sumTest1,sumTest2,sumTest3,averageSumTest1,averageSumTest2,averageSumTest3;
 float countStdTotalScore = 0;
 for (int i = 0; i <= 5; i++) {
 cout << "Enter your student id : ";
 cin >> Info[i].Id;
 cout << "Enter your student name : ";
 cin >> Info[i].Name;
 cout << "Enter your student test1 (25%) : ";
 cin >> Info[i].test1;
 cout << "Enter your student test2 (25%) : ";
 cin >> Info[i].test2;
 cout << "Enter your student test3 (50%) : ";
 cin >> Info[i].test3;
 }
 for (int i = 0; i <= 5; i++) {
 sumTest1 += Info[i].test1;
 sumTest2 += Info[i].test2;
 sumTest3 += Info[i].test3;
 countSumTest++;
 }
 averageSumTest1 = sumTest1/countSumTest;
 averageSumTest2 = sumTest2/countSumTest;
 averageSumTest3 = sumTest3/countSumTest;
 for (int i = 0; i <= 5; i++) {
 Info[i].TotalScore = (Info[i].test1 + Info[i].test2 +Info[i].test3);
 TotalScore2 += (Info[i].test1 + Info[i].test2 + Info[i].test3);
 countStdTotalScore++;
 }
 averageTotalScore = TotalScore2/countStdTotalScore;
 sort(Info, Info + 6, compareTotalScore);
 cout << "----------------------------------------------------------------------------------------------------" << endl;
 cout << "No.\t" << "Id\t" << "Name\t" << "test1(25%)\t" << "test2(25%)\t" <<
"test3(50%)\t" << "total(100%)" << endl;
 cout << "----------------------------------------------------------------------------------------------------" << endl;
 for (int i = 0; i <= 5; i++) {
 cout << fixed << setprecision(2);
 cout << count << "\t" << Info[i].Id << "\t" << Info[i].Name
<< "\t" << Info[i].test1 << "\t\t" << Info[i].test2 << "\t\t" << Info[i].test3
<< "\t\t" << Info[i].TotalScore << endl;
 count++;
 }
 cout << "----------------------------------------------------------------------------------------------------" << endl;
 cout << "Average of mark" << "\t\t" << averageSumTest1 << "\t\t" <<
averageSumTest2 << "\t\t" << averageSumTest3 << "\t\t" << averageTotalScore;
 return 0;
}