#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const short minValue = 1;
    const short maxValue = 6;
    srand(time(0));
    short firstDie = (rand() % (maxValue - minValue + 1)) + minValue;
    short secondDie = (rand() % (maxValue - minValue + 1)) + minValue;
    cout << firstDie << ", " << secondDie;
    return 0;
}