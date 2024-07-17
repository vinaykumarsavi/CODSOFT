#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
class todolist
{
private:
    vector<string> task;

public:
    void view();
    void add_task();
    void done_task();
    void remove_task();
};
void todolist::add_task()
{
    cout << "New Task-> ";
    string input;
    cin.ignore();
    getline(cin, input);
    task.push_back(input);
    cout << "add more tasks (y/n) : ";
    char p;
    cin >> p;
    if (p == 'y')
        add_task();
}
void todolist::done_task()
{
    int num;
    cout << "Enter the Done Task No: ";
    cin >> num;
    if (num > 0 && num <= task.size())
        task[num - 1] += "  (\xfb)";
    else
    {
        cout << "Enter a valid No:" << endl;
        done_task();
    }
           cout << "to mark more tasks (y/n) : ";
    char p;
    cin >> p;
    if (p == 'y')
        done_task();
}
void todolist ::view()
{
    cout << endl<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    if (task.empty())
        cout <<   "      ######  Your List is empty ######      " << endl;
    else
    {
        cout <<   "This is your tasks List   (\xfb)shows done tasks" << endl;
    cout << endl<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        int n = 1;
        for (auto i : task)
        {
            cout << n << ") " << i << endl;
            n++;
        }
    }
    cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl<<endl;
}
void todolist::remove_task()
{
    int rem;
    cout << "Enter to remove Task No:";
    cin >> rem;
    if (rem > 0 && rem <= task.size())
    task.erase(task.begin() + rem - 1);
     else
    {
        cout << "Enter a valid No:" << endl;
        remove_task();
    }
    view();
       cout << "remove more tasks (y/n) : ";
    char p;
    cin >> p;
    if (p == 'y')
        remove_task();
}

int main()
{
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Welcome to Your To Do List " << endl;
    cout << "Lets start your days by prioritising the goals" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Shortcuts for operation :" << endl;
    cout << "a -> Add task" << endl
         << "d -> Mark the task as done" << endl
         << "r -> Remove the task" << endl
         << "e -> Exit from the list" << endl;
    todolist mylist;
    while (1)
    {
       
        mylist.view();
        char chr;
        cout << "Enter the operation :";
        cin >> chr;
        if (chr == 'a')
            mylist.add_task();
        else if (chr == 'd')
            mylist.done_task();
        else if (chr == 'r')
            mylist.remove_task();
        else if (chr == 'e')
           break;
        else
            cout << "Enter a valid character" << endl;
    }
    cout << "Thanks for managing you goals " << endl;
    return 0;
}