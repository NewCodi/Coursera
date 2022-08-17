#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int sides = 6;
inline int r_sides() { return (rand() % sides + 1); }

int main(void)
{
    const int n_dice = 2;
    srand(clock());
    // by using system clock to set the seed of random function
    // to make the random function looks like random

    cout << "\nEnter number of trials: ";
    int trials = 5;
    // cin >> trials;
    // get user input

    cout << "\nNumber of trials: " << trials;

    int *outcomes = new int[n_dice * sides + 1];

    for (int j = 0; j < trials; j++)
    {
        int roll = 0;
        for (int i = 0; i < n_dice; i++)
        {
            roll += r_sides();
        }
        //increment the rolled number
        outcomes[roll]++;
    }

    cout << "\nprobability\n";
    for (int j = 2; j < n_dice * sides + 1; j++)
    {
        cout << "j = " << j << " p = "
        //cast the number into double for dividing into trials
             << static_cast<double>(outcomes[j]) / trials
             << endl;
    }

    return 0;
}