#include <iostream>
using namespace std;
int main()
{
    string questions[] = {"who invent c++?",
                          "what is the level of c++ language?",
                          "why c++ is used for?",
                          "which language is the extented version of c++?",
                          "before c++ whats language is used?"};
    string options[][4] = {
        {"A. Abdullah Butt",
         "B. Bjarne Stroustrup",
         "C. Zain-ul-Abedeen",
         "D. No-one"},
        {"A. High-level programming language",
         "B. Assembly language",
         "C. Low-level programming language",
         "D. Markup language"},
        {"A. Web development",
         "B. System programming and applications",
         "C. Data analysis",
         "D. Scripting and automation"},
        {"A. C#",
         "B. Objective-C",
         "C. Java",
         "D. C++"},
        {"A. Assembly",
         "B. Pascal",
         "C. C",
         "D. Fortran"}};

    char Answers[] = {
        'B',
        'A',
        'B',
        'D',
        'C',
    };

    char guess;
    int score = 0;

    int size = sizeof(questions) / sizeof(string);

    cout << "**************** QUIZ GAME ************************" << endl;
    cout << endl;
    for (auto i = 0; i < size; i++)
    {
        cout << "*********************************" << endl;
        cout << "QUESTION NUMBER # " << i + 1 << endl;
        cout << questions[i] << endl;
        cout << "*********************************" << endl;

        for (auto j = 0; j < sizeof(options[i]) / sizeof(options[i][j]); j++)
        {
            cout << options[i][j] << endl;
        }
        cout << endl;
        cout << "ENTER YOUR GUESS :: ";
        cin >> guess;
        guess = toupper(guess);

        if (guess == Answers[i])
        {
            cout << "CORRECT. WELL DONE!" << endl;
            score++;
        }
        else
        {
            cout << "SORRY YOU ARE WRONG. HAHA!" << endl;
            cout << "THE CORRECT ANSWER IS " << Answers[i] << endl;
        }
    }
    cout << "***********************************" << endl;
    cout << "********** RESULT *****************" << endl;
    cout << "***********************************" << endl;

    cout << "CORRECT GUESSES " << score << endl;
    cout << "YOUR SCORE IS " << (score / (double)size) * 100 << "%" << endl;

    return 0;
}