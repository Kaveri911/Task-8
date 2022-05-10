#include "Student.h"
#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");
    Student s;

    
    cout << "Введите количество студентов" << endl;
    int n;
    cin >> n;
    Student* sArr = new Student[n];
    for (int i = 0; i < n; i++)
    {
        cout << "======INSERT INFO======" << endl;
        cin >> sArr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << "======INFORMATION======" << endl;
        cout << sArr[i] << endl;
    }
}