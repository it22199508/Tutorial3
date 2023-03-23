#include <iostream>
using namespace std;
int main() {
 float marks[] = {78.4, 90.6, 45.9, 72.2,54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
 cout << "No\t" << "Name\t\t" << "Marks" << endl;
 for (int r = 0; r < 5; r++) {
 cout << r+1 <<"\t"
 << names[r]<<"\t"
 << marks[r] << endl;
   for (int r = 0 ; r < 5; r++) {
     cout <<setw(5)<< setiosflags(ios::fixed)<< r+1<<
       setw(15)< setiosflags(ios::fixed)
       <<names[r]<<
       setw(10)<<setiosflags(ios::fixed)<< setprecision(2)
       <<marks[r]<< endl;
   }
 }
 
}

