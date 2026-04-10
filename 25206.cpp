#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<string, double> scoreMap = {{"A+", 4.5}, {"A0", 4.0}, {"B+", 3.5}, {"B0", 3.0}, {"C+", 2.5}, {"C0", 2.0}, {"D+", 1.5}, {"D0", 1.0}, {"F", 0.0}};

    const int numOfCourse = 20;

    double sumOfCredit = 0; // 학점의 총합
    double sumOfGrade = 0;  // 학점 * 과목평점의 합
    for (int i = 0; i < numOfCourse; i++) {
        string courses; double score; string grade;
        cin >> courses >> score >> grade;

        // 등급이 P인 과목은 계산에서 제외
        if (grade == "P") continue;

        sumOfCredit += score;
        sumOfGrade += score * scoreMap[grade];
    }

    double result = sumOfGrade / sumOfCredit;

    cout << result;

    return 0;
}
