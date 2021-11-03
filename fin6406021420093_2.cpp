#include <iostream>
using namespace std;
void insertnum(int num[], int numx,int amo);
int main()
{
    
    int number,num[20],amo;
    cout << "How many numbers in array A: ";
    cin >> number;
    cout << "Enter "<<number<< " integers for array A:  ";
    for (int i = 0; i <= number; i++)
    {
    cin >> num[i];
    }
    
    cout << "Enter x : ";
    cin >> amo;
    cout <<endl;
    insertnum(num,number+1,amo);
    cout<<"The final array A: ";
     for (int i = 0; i <= number+1; i++)
    {
    cout<<num[i]<<" ";
    }

    cout <<endl;
    return 0;
}
void insertnum(int num[], int numx,int amo){
    num[numx-1]=amo;
    for (int i = 0; i <= numx; i++)
    {
    for(int n = i;i<numx;i++){
        if(num[i]>num[n]){
            int read;
            read = num[i];
            num[i] = num[n];
            num[n] = read;
        }
    }
    }

    
    
}