#include <iostream>
using namespace std;

int main() {
    int days;
    long long seconds;

    // Ask user for number of days
    cout << "Enter number of days: ";
    cin >> days;

    // Convert days to seconds
    seconds = days * 24LL * 60 * 60;

    // Output result
    cout << "Seconds in " << days << " days = " << seconds << endl;

    return 0;
}