#include <iostream>
using namespace std;

void displayMessage() {
    cout << "This is the start of the function." << endl;
    return;  // Exit the function here
    cout << "This line will not be printed." << endl;  // This will not be executed
}

int main() {
    displayMessage();
    return 0;
}
