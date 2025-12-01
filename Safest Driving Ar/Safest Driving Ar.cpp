#include <iostream>
using namespace std;

// this function gives judge score and we loop if it a negtive
double getScore() {
    double score;
    cout << "Enter judge's score (0-10): ";
    cin >> score;

    while (score < 0 || score > 10) {
        cout << "NO Negetive: ";
        cin >> score;
    }
    return score;
}

// this function determ
bool Lower(double test, double currentMin) {
    return test <= currentMin;
}


bool Higher(double test, double currentMax) {
    return test >= currentMax;
}


double calcAverage(double total, int numScores, double minScore, double maxScore) {
    return (total - minScore - maxScore) / (numScores - 2);
}


int main() {
    double score, minScore, maxScore, total;
    int judges = 5; // number of judges

    // we diplay everything
    score = getScore();
    minScore = score;
    maxScore = score;
    total = score;

    // Remaining judges
    for (int i = 1; i < judges; i++) {
        score = getScore();
        total += score;

        // if score is using bollean we get smallest num
        if (Lower(score, minScore)) {
            minScore = score;
        }
        // if score is using bollean we get smallest num
        if (Higher(score, maxScore)) {
            maxScore = score;
        }
    }

    // Calculate average using google formula
    double average = calcAverage(total, judges, minScore, maxScore);

    // Display result
    cout << "\nFinal performer score: " << average << endl;

    return 0;
}
