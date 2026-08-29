#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;
    string course;
};

int main() {
    Student s1, s2, s3;

    s1.name = "Priyanshi";
    s1.age = 20;
    s1.course = "CSE AIML";

    s2.name = "Rahul";
    s2.age = 21;
    s2.course = "Computer Science";

    s3.name = "Anjali";
    s3.age = 20;
    s3.course = "Information Technology";

    cout << "Student 1: " << s1.name << ", "
         << s1.age << ", " << s1.course << endl;

    cout << "Student 2: " << s2.name << ", "
         << s2.age << ", " << s2.course << endl;

    cout << "Student 3: " << s3.name << ", "
         << s3.age << ", " << s3.course << endl;

    return 0;
}