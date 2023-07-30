#include <iostream>
using namespace std;
struct student_info
{
    string name;
    float marks;
};
int main()
{
    int n;
    float sum = 0, avg = 0, min = 0, max = 0;
    cout << "Enter the number of students : ";
    cin >> n;
    struct student_info student[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the name of " << i+1 << " student: ";
        cin >> student[i].name;
        cout << "Enter the marks of " << i+1 << " student: ";
        cin >> student[i].marks;
    }
    min = student[0].marks;
    max = student[0].marks;
    cout << "\tYour entries are";
    for (int i = 0; i < n; i++)
    {
        cout << "\n"
                  << i << ". " << student[i].name << ", " << student[i].marks;
        if (student[i].marks < min)
        {
            min = student[i].marks;
        }
        if (student[i].marks > max)
        {
            max = student[i].marks;
        }
        sum += student[i].marks;
    }
    for (int i = 0; i < n; i++)
    {
        if (student[i].marks == min)
        {
            cout << "\nThe minimum marks obtained are " << min << " by " << student[i].name;
        }
        if (student[i].marks == max)
        {
            cout << "\nThe maximum marks obtained are " << max << " by " << student[i].name;
        }
    }
    avg = sum / n;
    cout << "\nThe average marks are " << avg;
}