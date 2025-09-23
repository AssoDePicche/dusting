#include <iostream>
#include <vector>

class Student {
  private:
    int totalScore; 

    std::vector<int> scores;

  public:
    void input() {
      for (int i = 0; i < 5; i++) {
        int score;

        std::cin >> score;

        scores.push_back(score);

        totalScore += score;
      }
    }

    int calculateTotalScore() {
      return totalScore;
    }
};
