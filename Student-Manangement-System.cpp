#include <iostream>
#include <string>
using namespace std;
class Student {
private:
int rollNo;
string name;
float marks;
public:
// Parameterized constructor
Student(int r, string n, float m) {
rollNo = r;
name = n;
setMarks(m);
}
// Accessors (getters)
int getRollNo() {
return rollNo;
}
string getName() {
return name;
}
float getMarks() {
return marks;
}
void setMarks(float m) {
if (m >= 0 && m <= 100) {
marks = m;
} else {
cout << "Invalid marks for " << name
<< ", set to 0" << endl;
marks = 0;
}
}
void display() {
cout << rollNo << " | " << name
<< " | " << marks << endl;
}
};

void printResult(Student s) {
cout << s.getName() << ": ";
if (s.getMarks() >= 40) {
cout << "PASS" << endl;
} else {
cout << "FAIL" << endl;
}
}
int main() {
Student batch[3] = {
Student(10, "sona", 82),
Student(12, "anju", 35),
Student(14, "adheena", 105)
};
for (int i = 0; i < 3; i++) {
batch[i].display();
}
batch[1].setMarks(45);
for (int i = 0; i < 3; i++) {
printResult(batch[i]);
}
return 0;
}
