#include <iostream>
#include<string>

using namespace std;

struct Specialization {
    string val;
    explicit Specialization(string newv) {
        val = newv;
    }

};
struct Course {
    string val;
    explicit Course(string newv) {
        val = newv;
    }
};
struct Week {
    string val;
    explicit Week(string newv) {
        val = newv;
    }

};

struct LectureTitle {
    string specialization;
    string course;
    string week;

    LectureTitle(Specialization a, Course b, Week c) {
        specialization = a.val;
        course = b.val;
        week = c.val;
    }
};

int main()
{
    LectureTitle title(
        Specialization("C++"),
        Course("White belt"),
        Week("4th")
    );

    return 0;
}

