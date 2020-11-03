#include <iostream>
#include <iomanip>
using namespace  std;

void showDollars(double); //prototype
double showWages(double, double);

int main() {

    double hours, payRate, wages;

    cout << "How many hours did you work? " << endl;
    cin >> hours;
    cout << "What is your wage rate? " << endl;
    cin >> payRate;

    wages = showWages(hours, payRate);

    showDollars(wages);

    return 0;
}

double showWages(double hours, double payRate) {
    double wages;
    wages = hours * payRate;
    return wages;
}

void showDollars(double wage) {
    cout << "Your wages are $" << fixed << setprecision(2) << wage << endl;
}