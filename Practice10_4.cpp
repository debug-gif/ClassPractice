#include <iostream>
#include <string>

struct Student {
    std::string name;
    std::string birthday;
};

bool compareBirthdays(const Student& a, const Student& b) {
    return a.birthday > b.birthday;
}

void quickSort(Student students[], int left, int right) {
    if (left >= right) return;
    int i = left, j = right;
    Student pivot = students[left];
    while (i < j) {
        while (i < j && compareBirthdays(students[j], pivot)) {
            j--;
        }
        while (i < j && !compareBirthdays(students[i], pivot)) {
            i++;
        }
        if (i < j) {
            std::swap(students[i], students[j]);
        }
    }
    std::swap(students[left], students[j]);
    quickSort(students, left, j - 1);
    quickSort(students, j + 1, right);
}

int main() {
    Student students[] = {
        {"张三", "2012-05-15"},
        {"李四", "2010-08-23"},
        {"王五", "2014-01-30"},
        {"赵六", "2013-11-12"}
    };
    int n = sizeof(students) / sizeof(students[0]);

    for (int i = 0; i < n; ++i) {
        std::cout << students[i].name << " - " << students[i].birthday << std::endl;
    }

    quickSort(students, 0, n - 1);

    std::cout << "\nAfter sorting:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << students[i].name << " - " << students[i].birthday << std::endl;
    }
    return 0;
}