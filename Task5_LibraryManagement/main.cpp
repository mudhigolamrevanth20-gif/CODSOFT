#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Student
{
    int rollNo;
    string name;
    float marks;
};

vector<Student> students;

void addStudent()
{
    Student s;

    cout << "\nEnter Roll Number: ";
    cin >> s.rollNo;
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, s.name);

    cout << "Enter Marks: ";
    cin >> s.marks;

    students.push_back(s);

    cout << "\nStudent Added Successfully!\n";
}

void viewStudents()
{
    if(students.empty())
    {
        cout << "\nNo Student Records Found!\n";
        return;
    }

    cout << "\n===== Student Records =====\n";

    for(int i = 0; i < students.size(); i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll No : " << students[i].rollNo << endl;
        cout << "Name    : " << students[i].name << endl;
        cout << "Marks   : " << students[i].marks << endl;
    }
}

void searchStudent()
{
    int roll;
    cout << "\nEnter Roll Number to Search: ";
    cin >> roll;

    for(int i = 0; i < students.size(); i++)
    {
        if(students[i].rollNo == roll)
        {
            cout << "\nStudent Found\n";
            cout << "Roll No : " << students[i].rollNo << endl;
            cout << "Name    : " << students[i].name << endl;
            cout << "Marks   : " << students[i].marks << endl;
            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}

void updateStudent()
{
    int roll;

    cout << "\nEnter Roll Number to Update: ";
    cin >> roll;
    cin.ignore();

    for(int i = 0; i < students.size(); i++)
    {
        if(students[i].rollNo == roll)
        {
            cout << "Enter New Name: ";
            getline(cin, students[i].name);

            cout << "Enter New Marks: ";
            cin >> students[i].marks;

            cout << "\nStudent Updated Successfully!\n";
            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}

void deleteStudent()
{
    int roll;

    cout << "\nEnter Roll Number to Delete: ";
    cin >> roll;

    for(int i = 0; i < students.size(); i++)
    {
        if(students[i].rollNo == roll)
        {
            students.erase(students.begin() + i);
            cout << "\nStudent Deleted Successfully!\n";
            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n==============================";
        cout << "\n STUDENT MANAGEMENT SYSTEM";
        cout << "\n==============================";
        cout << "\n1. Add Student";
        cout << "\n2. View Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Student";
        cout << "\n5. Delete Student";
        cout << "\n6. Exit";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                viewStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 6);

    return 0;
}
