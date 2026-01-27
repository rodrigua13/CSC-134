// CSC 134
// M1HW1 - Movie Talk
// 01/21/26
// Adrian Rodriguez

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
string movieName = "Challengers";
int releaseYear = 2024;
double boxOffice = 96.1;

cout << fixed << setprecision(2);

cout << "Movie: " << movieName << endl;
cout << "Released in: " << releaseYear << endl;
cout << "Box office gross : $" << boxOffice << " million" << endl;
cout << endl;
}