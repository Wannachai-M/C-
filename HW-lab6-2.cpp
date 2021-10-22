#include <ios>
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;
void random(int random1[4], int &votenums);
int main()
{
 int random1[4];
 int votenums = 0;
 int totalVote;
 int chairmannumber;
 int percentVotenum,percentVotenums, votenum = 0, notVote, 
percentNotVote;
 const float numberOfRightStd = 500;
 cout << "Enter number student chairman : ";
 cin >> chairmannumber;
 cout << "Number of right student : " << numberOfRightStd << endl;
 srand((unsigned int)time(0));
 votenum = (rand() % 500);
 votenums = votenum;
 percentVotenums = votenum;
 percentVotenum = ((votenum * 100) / numberOfRightStd);
 cout << "Number of Votes : " << votenum << " = " << fixed <<
setprecision(1) << percentVotenum << "%" << endl;
 notVote = numberOfRightStd - votenum;
 percentNotVote = ((notVote * 100) / numberOfRightStd);
 cout << "Number of not Votes : " << notVote << " = " << percentNotVote 
<< "%" << endl;
 cout << "Result of election chairman" << endl;
 cout << "---------------------------" << endl;
 cout << "No.\tVotes\tPercent (%)" << endl;
 random(random1,votenums);
 totalVote = random1[4] + votenums;
 cout << "1" << "\t" << random1[0] << "\t" << float(((random1[0] *
100)/percentVotenums)) << "%" << endl;
 cout << "2" << "\t"<< random1[1] << "\t" << float(((random1[1] *
100)/percentVotenums)) << "%" << endl;
 cout << "3" << "\t"<< random1[2] << "\t" << float(((random1[2] *
100)/percentVotenums)) << "%" <<endl;
 cout << "4" << "\t"<< random1[3] << "\t" << float(((random1[3] *
100)/percentVotenums)) << "%" << endl;
 cout << "5" << "\t"<< totalVote << "\t" << float(((totalVote *
100)/percentVotenums)) << "%" << endl;
 cout << "---------------------------" << endl;
 cout << "Total\t" << percentVotenums << "\t" <<
((percentVotenums * 100)/percentVotenums) << "%" << endl;
 return 0;
}
void random(int random1[4], int &votenums) {
 for (int i = 0; i < 5; i++) {
 random1[i] = ((rand()) % votenums);
 votenums = votenums - random1[i];
 }
}

