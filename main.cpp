#include <iostream>
#include <string>
using namespace std;

int main() {
    const double BONUS = 1.10;

    string player;
    string rank;
    int games;
    double score = 0;
    double total = 0;
    double highscore = 0;

    cout << "Please enter the player's name:";
    cin >> player;
    cout << "Enter the number of games played:";
    cin >> games;
    cout << "Now, enter the score for the following " << games << " games.\n";
    for (int game = 1; game <= games; game++) {
        cout << "Enter score for game " << game << ":";
        cin >> score;
        total = total + score;
        if (score > highscore) {highscore = score;}
    }
    double average = total / games;
    double totalbonus = total * BONUS;

    if (average >= 90) {rank = "Elite";}
    else if (average >= 75) {rank = "Advanced";}
    else if (average >= 60) {rank = "Intermediate";}
    else {rank = "Beginner";}

    cout << "==================================\n";
    cout << "           GAMESTAT REPORT\n";
    cout << "==================================\n";
    cout << "Player: " << player << "\n";
    cout << "Games Played: " << games << "\n";
    cout << "Total Score: " << total << "\n";
    cout << "Average Score: " << average << "\n";
    cout << "Highest Score: " << highscore << "\n";
    cout << "Performance Rating: " << rank << "\n";
    cout << "Bonus Total: " << totalbonus << "\n";
    cout << "==================================\n";

    return 0;
}
