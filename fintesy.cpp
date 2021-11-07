#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int random(int min, int max);
void DisArray(int ar[][6]);
void sort(int ar[][6],int row, int col);

int main(){
    int count;
    int min = 38,max = 83;
    int row = 6, column = 6;
    int ar[6][6];
    for (int i = 0;i < 6;i++)
    {
        for (int j = 0; j < 6; j++)
        {
            ar[i][j] = random(min,max);
        }    
    }
    cout <<"Display Data in Array Before Sorting" << endl<<endl;
    DisArray(ar);
    sort(ar,6,6);
    cout <<"Display Data in Array After Sorting" << endl<<endl;
    DisArray(ar);
}
void sort(int ar[][6],int row,int col){
    int i,j,temp;
    for(i = 0;i < row * col - 1;++i){
        for(j = 0;j < row * col - 1 -i;++j){
            if(ar[j/col][j%col] > ar[(j+1)/col][(j+1)%col]){
                temp = ar[(j+1)/col][j+1%col];
                ar[(j+1)/col][(j+1)%col] = ar[j/col][j%col];
                ar[j/col][j%col] = temp;
            }
        }
    }
}
void DisArray(int ar[][6]){
    int count;
      for (int i = 0;i < 6;i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout<<"[" << ar[i][j]<<"]"<<" ";
            count++;
            if ((count % 6) == 0)
            {
                cout << endl<< endl;
            }
            
        }    
    }
}
int random(int min, int max){
    static bool first = true;
    if (first)
    {
        srand(time(NULL));
        first = false;
    }
    return min + rand() % ((max + 1) - min);
    
}