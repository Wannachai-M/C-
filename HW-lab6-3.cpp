#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
struct student {
 int stdId;
 string stdName;
 float test1,test2,test3,stdTotalScore; 
};
bool compareTotalScore(student stdTotalScoreA,student stdTotalScoreB){
 if (stdTotalScoreA.stdTotalScore > stdTotalScoreB.stdTotalScore){
 return true;
 } return false;
}
int main() {
 struct student stdInfo[20];
 int highScore;
 int stdId,countSumTest = 0,count = 1;
 float
stdScore,averageTotalScore,stdTotalScore2,sumTest1,sumTest2,sumTest3,averag
eSumTest1,averageSumTest2,averageSumTest3;
 float countStdTotalScore = 0;
 for (int i = 0; i <= 5; i++) {
 cout << "Enter your student id : ";
 cin >> stdInfo[i].stdId;
 cout << "Enter your student name : ";
 cin >> stdInfo[i].stdName;
 cout << "Enter your student test1 (25%) : ";
 cin >> stdInfo[i].test1;
 cout << "Enter your student test2 (25%) : ";
 cin >> stdInfo[i].test2;
 cout << "Enter your student test3 (50%) : ";
 cin >> stdInfo[i].test3;
 }
 for (int i = 0; i <= 5; i++) {
 sumTest1 += stdInfo[i].test1;
 sumTest2 += stdInfo[i].test2;
 sumTest3 += stdInfo[i].test3;
 countSumTest++;
 }
 averageSumTest1 = sumTest1/countSumTest;
 averageSumTest2 = sumTest2/countSumTest;
 averageSumTest3 = sumTest3/countSumTest;
 for (int i = 0; i <= 5; i++) {
 stdInfo[i].stdTotalScore = (stdInfo[i].test1 + stdInfo[i].test2 +
stdInfo[i].test3);
 stdTotalScore2 += (stdInfo[i].test1 + stdInfo[i].test2 + stdInfo[i].test3);
 countStdTotalScore++;
 }
 averageTotalScore = stdTotalScore2/countStdTotalScore;
 sort(stdInfo, stdInfo + 6, compareTotalScore);
 cout << "-------------------------------------------------------------------------------------------------
---" << endl;
 cout << "No.\t" << "Id\t" << "Name\t" << "test1(25%)\t" << "test2(25%)\t" <<
"test3(50%)\t" << "total(100%)" << endl;
 cout << "-------------------------------------------------------------------------------------------------
---" << endl;
 for (int i = 0; i <= 5; i++) {
 cout << fixed << setprecision(2);
 cout << count << "\t" << stdInfo[i].stdId << "\t" << stdInfo[i].stdName
<< "\t" << stdInfo[i].test1 << "\t\t" << stdInfo[i].test2 << "\t\t" << stdInfo[i].test3
<< "\t\t" << stdInfo[i].stdTotalScore << endl;
 count++;
 }
 cout << "-------------------------------------------------------------------------------------------------
---" << endl;
 cout << "Average of mark" << "\t\t" << averageSumTest1 << "\t\t" <<
averageSumTest2 << "\t\t" << averageSumTest3 << "\t\t" << averageTotalScore;
 return 0;
}