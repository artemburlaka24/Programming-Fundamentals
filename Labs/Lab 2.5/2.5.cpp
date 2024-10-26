#include <iostream>
using namespace std;

enum Names { YURIY, VASYL, KATERYNA, TETYANA, BOHDAN, LARYSA, OLEH };

struct Student {
    Names name;
    int birthDay;
    int birthMonth;
    int course;
    char gender;
};

string getName(Names name) {
    switch (name) {
    case YURIY: return "Юрій";
    case VASYL: return "Василь";
    case KATERYNA: return "Катерина";
    case TETYANA: return "Тетяна";
    case BOHDAN: return "Богдан";
    case LARYSA: return "Лариса";
    case OLEH: return "Олег";
    default: return "Невідомо";
    }
}

int main() {
    setlocale(LC_ALL, "uk-UA");

    Student students[7] = {
        {YURIY, 10, 8, 1, 'M'},
        {VASYL, 25, 11, 2, 'M'},
        {KATERYNA, 17, 4, 1, 'F'},
        {TETYANA, 29, 6, 3, 'F'},
        {BOHDAN, 3, 9, 1, 'M'},
        {LARYSA, 15, 10, 4, 'F'},
        {OLEH, 19, 2, 1, 'M'}
    };

    int autumnCount = 0;
    for (int i = 0; i < 7; i++) {
        if (students[i].birthMonth == 9 || students[i].birthMonth == 10 || students[i].birthMonth == 11) {
            autumnCount++;
        }
    }

    double autumnPercentage = (autumnCount / 7.0) * 100;
    cout << "Percentage of students born in autumn: " << autumnPercentage << "%" << endl;

    int maleFirstYearCount = 0;
    int totalFirstYearCount = 0;

    for (int i = 0; i < 7; i++) {
        if (students[i].course == 1) {
            totalFirstYearCount++;
            if (students[i].gender == 'M') {
                maleFirstYearCount++;
            }
        }
    }

    double malePercentage = (totalFirstYearCount > 0) ? (maleFirstYearCount / (double)totalFirstYearCount) * 100 : 0;
    cout << "The percentage of male students in the 1st year: " << malePercentage << "%" << endl;

    return 0;
}
