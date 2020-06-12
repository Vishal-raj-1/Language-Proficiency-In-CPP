#include<iostream>
using namespace std;

//Declare Function Pointer in Struct
typedef struct Student
{
    int age,standard;
    string first_name,last_name;

    void (*ptr)(Student *st);
} Student;

void input(Student *st)
{
    cin >> st->age >> st->first_name >> st->last_name >> st->standard;
}

void output(Student *st)
{
    cout << st->age << " " << st->first_name << " " << st->last_name << " " << st->standard;
}

int main()
{
    Student st;
    input(&st);
    output(&st);
    
    return 0;
}