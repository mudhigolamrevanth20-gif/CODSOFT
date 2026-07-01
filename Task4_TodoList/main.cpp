#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task
{
    string name;
    bool completed;
};

int main()
{
    vector<Task> tasks;
    int choice;

    do
    {
        cout << "\n===================================";
        cout << "\n        TO-DO LIST MANAGER";
        cout << "\n===================================";
        cout << "\n1. Add Task";
        cout << "\n2. View Tasks";
        cout << "\n3. Mark Task as Completed";
        cout << "\n4. Delete Task";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice)
        {
            case 1:
            {
                Task t;
                cout << "Enter Task: ";
                getline(cin, t.name);
                t.completed = false;
                tasks.push_back(t);
                cout << "Task Added Successfully!\n";
                break;
            }

            case 2:
            {
                if(tasks.empty())
                {
                    cout << "No Tasks Available!\n";
                }
                else
                {
                    cout << "\n------ TASK LIST ------\n";
                    for(int i = 0; i < tasks.size(); i++)
                    {
                        cout << i + 1 << ". "
                             << tasks[i].name
                             << " ["
                             << (tasks[i].completed ? "Completed" : "Pending")
                             << "]\n";
                    }
                }
                break;
            }

            case 3:
            {
                int num;
                cout << "Enter Task Number: ";
                cin >> num;

                if(num >= 1 && num <= tasks.size())
                {
                    tasks[num - 1].completed = true;
                    cout << "Task Marked as Completed!\n";
                }
                else
                {
                    cout << "Invalid Task Number!\n";
                }
                break;
            }

            case 4:
            {
                int num;
                cout << "Enter Task Number to Delete: ";
                cin >> num;

                if(num >= 1 && num <= tasks.size())
                {
                    tasks.erase(tasks.begin() + num - 1);
                    cout << "Task Deleted Successfully!\n";
                }
                else
                {
                    cout << "Invalid Task Number!\n";
                }
                break;
            }

            case 5:
                cout << "Thank You for Using To-Do List Manager!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}
