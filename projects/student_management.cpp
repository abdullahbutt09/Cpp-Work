// Student Management System : Create a program to manage student information.Include features like adding new students, displaying student details, updating records, and calculating their grades

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student
{
protected:
    vector<string> stu_name;
    vector<string> stu_father;
    vector<string> stu_mother;
    vector<string> stu_roll;
    vector<int> stu_id;
    int count = 0;

public:
    virtual void input()
    {
        while (true)
        {
            string name, roll, father, mother;
            int id;
            cout << "Enter student name: ";
            cin >> name;
            cout << "Enter student roll number: ";
            cin >> roll;
            cout << "Enter student id: ";
            cin >> id;
            cout << "Enter student father's name: ";
            cin >> father;
            cout << "Enter student mother's name: ";
            cin >> mother;
            count++;

            stu_name.push_back(name);
            stu_roll.push_back(roll);
            stu_id.push_back(id);
            stu_father.push_back(father);
            stu_mother.push_back(mother);
            break;
        }
    }

    virtual void display()
    {
        if (stu_id.empty())
        {
            cout << "No students found." << endl;
            return;
        }

        for (size_t i = 0; i < stu_id.size(); ++i)
        {
            cout << endl;
            cout << "TOTAL NUMBER OF STUDENTS ACCORDING TO RECORD IS" << count << endl;
            cout << "Name: " << stu_name[i] << endl;
            cout << "Roll Number: " << stu_roll[i] << endl;
            cout << "ID: " << stu_id[i] << endl;
            cout << "Father's Name: " << stu_father[i] << endl;
            cout << "Mother's Name: " << stu_mother[i] << endl;
            cout << "-------------------------" << endl;
        }
    }
};

class Records : virtual public Student
{
protected:
    vector<double> eng_grades;
    vector<double> math_grades;
    vector<double> sci_grades;
    vector<double> comp_grades;
    vector<double> sst_grades;
    vector<double> urdu_grades;

    double eng, math, sci, comp, sst, urdu, total_grade, average_grade;

public:
    void inputGrades()
    {
        string subjects[] = {"eng", "math", "sci", "comp", "sst", "urdu"};
        int store = sizeof(subjects) / sizeof(string);
        while (true)
        {
            cout << "Now Enter grades of the student." << endl;
            cout << endl;
            cout << "Enter the grades for english : ";
            cin >> eng;
            cout << "Enter the grades for math : ";
            cin >> math;
            cout << "Enter the grades for science : ";
            cin >> sci;
            cout << "Enter the grades for computer : ";
            cin >> comp;
            cout << "Enter the grades for social studies : ";
            cin >> sst;
            cout << "Enter the grades for urdu : ";
            cin >> urdu;
            total_grade = eng + math + sci + comp + sst + urdu;
            average_grade = total_grade / store;
            eng_grades.push_back(eng);
            math_grades.push_back(math);
            sci_grades.push_back(sci);
            comp_grades.push_back(comp);
            sst_grades.push_back(sst);
            urdu_grades.push_back(urdu);

            cout << "Your marks details have been stored :" << endl;
            cout << endl;
            char choice;
            cout << "Do you want to add another student (y/n)? ";
            cin >> choice;
            if (choice == 'n' || choice == 'N')
            {
                cout << endl;
                cout << "Your Details Stored." << endl;
                cout << endl;
                break;
            }
            else if (choice == 'y' || choice == 'Y')
            {
                Student ::input();
                inputGrades();
            }
            break;
        }
    }

    void searchById(int id)
    {
        bool found = false;
        for (size_t i = 0; i < stu_id.size(); ++i)
        {
            if (stu_id[i] == id)
            {
                cout << "---------PERSONAL DETAILS-------------" << endl;
                cout << endl;
                cout << "Name: " << stu_name[i] << endl;
                cout << "Roll Number: " << stu_roll[i] << endl;
                cout << "ID: " << stu_id[i] << endl;
                cout << "Father's Name: " << stu_father[i] << endl;
                cout << "Mother's Name: " << stu_mother[i] << endl;
                cout << endl;
                cout << "----------GRADES RECORD---------------" << endl;
                cout << endl;
                cout << "English: " << eng_grades[i] << endl;
                cout << "Math: " << math_grades[i] << endl;
                cout << "Science: " << sci_grades[i] << endl;
                cout << "Computer: " << comp_grades[i] << endl;
                cout << "Social Studies: " << sst_grades[i] << endl;
                cout << "Urdu: " << urdu_grades[i] << endl;
                cout << "Total Grade: " << total_grade << endl;
                cout << "Average Grade: " << average_grade << endl;
                cout << endl;
                cout << "-------------------------" << endl;
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "Student with ID " << id << " not found!" << endl;
        }
    }
};

class UpdateRecords : virtual public Records, virtual public Student
{
protected:
    int find_id;

public:
    void updateStudent()
    {
        cout << "Enter the unique id of the student : ";
        cin >> find_id;
        bool found = false;
        for (size_t i = 0; i < stu_id.size(); ++i)
        {
            if (stu_id[i] == find_id)
            {
                cout << "STUDENT FOUND!" << endl;
                found = true;
                cout << "-------------------------" << endl;
                cout << "Name: " << stu_name[i] << endl;
                cout << "Roll Number: " << stu_roll[i] << endl;
                cout << "ID: " << stu_id[i] << endl;
                cout << "Father's Name: " << stu_father[i] << endl;
                cout << "Mother's Name: " << stu_mother[i] << endl;
                cout << "-------------------------" << endl;
                cout << endl;
                cout << "WHAT TO YOU WANT TO UPDATE ? " << endl;
                cout << "Press 1 for personal details records and press 2 for student grades record.";
                int update_choice;
                cin >> update_choice;
                if (update_choice == 1)
                {
                    cout << "1. Name" << endl;
                    cout << "2. Roll Number" << endl;
                    cout << "3. ID" << endl;
                    cout << "4. Father's Name" << endl;
                    cout << "5. Mother's Name" << endl;

                    int update_sub_choice;
                    cout << "ENTER YOUR CHOICE :";
                    cin >> update_sub_choice;
                    switch (update_sub_choice)
                    {
                    case 1:
                        cout << "Enter new name: ";
                        cin.ignore();
                        getline(cin, stu_name[i]);
                        break;
                    case 2:
                        cout << "Enter new roll number: ";
                        cin.ignore();
                        getline(cin, stu_roll[i]);
                        break;
                    case 3:
                        cout << "Enter new id: ";
                        cin >> stu_id[i];
                        break;
                    case 4:
                        cout << "Enter new father's name: ";
                        cin.ignore();
                        getline(cin, stu_father[i]);
                        break;
                    case 5:
                        cout << "Enter new mother's name: ";
                        cin.ignore();
                        getline(cin, stu_mother[i]);
                        break;
                    default:
                        cout << "Invalid choice." << endl;
                    }
                    cout << "Student's personal details have been updated." << endl;
                    break;
                }
                else if (update_choice == 2)
                {
                    cout << "Press 1 For English" << endl;
                    cout << "Press 2 For Math" << endl;
                    cout << "Press 3 For Science" << endl;
                    cout << "Press 4 For Computer" << endl;
                    cout << "Press 5 For Social Studies" << endl;
                    cout << "Press 6 For Urdu" << endl;
                    cout << endl;
                    cout << "Enter the subject number you want to update: ";
                    int subject_choice;
                    cin >> subject_choice;
                    double new_grade;
                    cout << "Enter new grade: ";
                    cin >> new_grade;
                    switch (subject_choice)
                    {
                    case 1:
                        eng_grades[i] = new_grade;
                        break;
                    case 2:
                        math_grades[i] = new_grade;
                        break;
                    case 3:
                        sci_grades[i] = new_grade;
                        break;
                    case 4:
                        comp_grades[i] = new_grade;
                        break;
                    case 5:
                        sst_grades[i] = new_grade;
                        break;
                    case 6:
                        urdu_grades[i] = new_grade;
                        break;
                    default:
                        cout << "Invalid choice." << endl;
                    }
                    cout << "Student's grades have been updated." << endl;
                    break;
                }

                if (!found)
                {
                    cout << "Student with ID " << find_id << " not found!" << endl;
                }
                return;
            }
        }
    }
};

int main()
{
    UpdateRecords records;

    int choice = 0;

    while (choice != 3)
    {
        cout << endl;
        cout << "WELCOME TO STUDENT MANAGEMENT SYSTEM." << endl;
        cout << endl;
        cout << "PRESS 1 TO ADD A STUDENT" << endl;
        cout << "PRESS 2 TO DISPLAY OR SEARCH STUDENT RECORD" << endl;
        cout << "PRESS 3 TO UPDATE STUDENT RECORD" << endl;
        cout << "PRESS 4 TO EXIT" << endl;
        cout << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            records.input();
            records.inputGrades();
            break;
        case 2:
            cout << endl;
            cout << "PRESS 1 TO DISPLAY ALL STUDENTS" << endl;
            cout << "PRESS 2 TO SEARCH STUDENT BY ID" << endl;
            cout << endl;

            int subChoice;
            cout << "Enter your choice: ";
            cin >> subChoice;

            if (subChoice == 1)
            {
                records.display();
            }
            else if (subChoice == 2)
            {
                int id;
                cout << "Enter student unique id: ";
                cin >> id;
                records.searchById(id);
            }
            else
            {
                cout << "Invalid choice." << endl;
            }
            break;

        case 3:
            records.updateStudent();
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    }

    return 0;
}