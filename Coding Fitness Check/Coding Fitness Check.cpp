#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class MainThing {
public:
    void dice() {
        char answer;

        cout << "Are you ready to play? y/n:" << "\n";
        cin >> answer;

        if (answer == 'y') {
            srand(time(0));
            int dice = rand() % 6;

            switch (dice) {
            case 0:
                cout << "DO FIVE JUMPING JACKS NOW\n";
                break;
            case 1:
                cout << "DO THREE PUSH UPS NOW\n";
                break;
            case 2:
                cout << "RUN IN PLACE FOR 30 SECONDS NOW\n";
                break;
            case 3:
                cout << "DO TWO SQUATS NOW\n";
                break;
            case 4:
                cout << "DO 2 FROG LEAPS NOW\n";
                break;
            case 5:
                cout << "DO 6 JUMPS NOW\n";
                break;
            }
        }
        else {
            cout << "You Lazy Shit\n";
        }
    }
};

int main() {
    MainThing myObj;

    myObj.dice();
    return 0;
}
