#include<iostream>
#include<ctime>
#include<windows.h>
using namespace std;

int main() {
    srand(time(0));
    int num = (rand() % 100) + 1;
    int guess;

    for (int i = 0; i < 8; i++) {
        cout << "Enter the number: ";
        cin >> guess;

        if (guess == num) {
            cout << "Correct in " << i + 1 << " tries\n";
            break;
        } else if (guess > num) {
            cout << "High " << 7 - i << " tries left\n";
        } else {
            cout << "Low " << 7 - i << " tries left\n";
        }
    }

    Sleep(2000);
    return 0;
}
