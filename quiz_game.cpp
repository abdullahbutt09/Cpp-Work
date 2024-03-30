#include <iostream>
using namespace std;
void rules();
int questions();

int main()
{
    string name;
    char choice1;
    char choice2;
    char choice3;
    int score;
    cout << endl;
    cout << "WELCOME TO THE QUIZ GAME OF C++ THIS GAME QUIZ INCLUDE SOME BASIC QUESTIONS OF C++" << endl;
    cout << endl;

    cout << "PRESS R OR r TO CHECK THE RULES OF THE GAME :: ";
    cin >> choice1;

    while (choice1 != 'r' && choice1 != 'R')
    {
        cout << "PLEASE PRESS CAPITAL R TO SMALL r TO CHECK THE RULES OF THE GAME! :: ";
        cin >> choice1;
    }

    if (choice1 == 'R' || choice1 == 'r')
    {
        rules();
    }

    cout << "PRESS AND TYPE S OR s TO START THE GAME :: ";
    cin >> choice2;

    while (choice2 != 's' && choice2 != 'S')
    {
        cout << "PLEASE PRESS CAPITAL S TO SMALL s TO START THE GAME! :: ";
        cin >> choice2;
    }

    if (choice2 == 's' || choice2 == 'S')
    {
        cout << endl;
        cout << "ENTER YOUR NAME :: ";
        cin >> name;
        score = questions();
    }

    if (score >= 5)
    {
        cout << name << " YOUR SCORE IS " << score << endl;
        cout << endl;
        cout << name << " CONGRATULATIONS YOU HAVE PASSED THE QUIZ" << endl;
        cout << endl;
    }

    else if (score <= 0 || score <= 4)
    {
        cout << name << " YOUR SCORE IS " << score << endl;
        cout << endl;
        cout << name << " YOU HAVE FAILED THE QUIZ" << endl;
        cout << endl;
    }

    cout << name << " DO YOU WANT TO PLAY THE QUIZ GAME AGAIN ?" << endl;
    cout << endl;
    cout << "PRESS AND TYPE Y OR y TO START THE QUIZ AGAIN!" << endl;
    cout << endl;
    cout << "PRESS AND TYPE N OR n TO EXIT FROM THE GAME!" << endl;
    cout << endl;
    cout << name << " NOW TYPE YOUR CHOICE :: ";
    cin >> choice3;
    cout << endl;

    while (choice3 != 'n' && choice3 != 'N' && choice3 != 'y' && choice3 != 'Y')
    {
        cout << name << " PLEASE PRESS CAPITAL N OR SMALL n | CAPITAL Y OR SMALL Y TO PROCEED :: ";
        cin >> choice3;
    }

    if (choice3 == 'N' || choice3 == 'n')
    {
        cout << endl;
        cout << "THANKS FOR PLAYING THE GAME " << name << endl;
        cout << endl;
        cout << name << " YOUR LAST QUIZ SCORE IS :: " << score << endl;
        cout << endl;
    }
    else if (choice3 == 'Y' || choice3 == 'y')
    {
        rules();
        questions();
    }

    return 0;
}

void rules()
{
    cout << endl;
    cout << "----> GAME INCLUDE 10 QUESTIONS <----" << endl;
    cout << endl;
    cout << "YOU HAVE TO SCORE ATLEAST 5 POINTS OR GREARTER THEN 5 POINTS TO PASS THE QUIZ" << endl;
    cout << endl;
    cout << "THERE WILL BE 4 OPTIONS A,B,C,D" << endl;
    cout << endl;
    cout << "YOU HAVE TO SELECT ONE OPTION FROM THEM BY JUST TYPING A,B,C,D | a,b,c,d EITHER CAPITAL OR SMALL" << endl;
    cout << endl;
}

int questions()
{
    int score = 0;
    char choice;

    cout << endl;
    cout << "-----> QUESTION NUMBER 1 <----- " << endl;
    cout << endl;
    cout << "1. What is the name of the author of C++?" << endl;
    cout << endl;
    cout << "A. John stroustrup" << endl;
    cout << "B. Bill gates" << endl;
    cout << "C. Mr abdullah butt" << endl;
    cout << "D. none of these" << endl;
    cout << endl;
    cout << "YOUR ANSWER :: ";
    cin >> choice;
    cout << endl;

    while (choice != 'a' && choice != 'A' && choice != 'b' && choice != 'B' && choice != 'c' && choice != 'C' && choice != 'd' && choice != 'D')
    {
        cout << "PLEASE PRESS CAPITAL A,B,C,D OR SMALL a,b,c,d TO PROCEED!" << endl;
        cout << "YOUR ANSWER :: ";
        cin >> choice;
        cout << endl;
    }

    if (choice == 'a' || choice == 'A')
    {
        score++;
    }
    else
    {
        score = score + 0;
    }

    cout << "-----> QUESTION NUMBER 2 <----- " << endl;
    cout << endl;
    cout << "2. What is the purpose of the 'using namespace std;' statement in C++?" << endl;
    cout << endl;
    cout << "A. It imports the standard C++ library" << endl;
    cout << "B. It declares a namespace for standard C++ functions" << endl;
    cout << "C. It simplifies the use of standard C++ functions without prefixing 'std::'" << endl;
    cout << "D. It has no purpose" << endl;
    cout << endl;
    cout << "YOUR ANSWER :: ";
    cin >> choice;
    cout << endl;

    while (choice != 'a' && choice != 'A' && choice != 'b' && choice != 'B' && choice != 'c' && choice != 'C' && choice != 'd' && choice != 'D')
    {
        cout << "PLEASE PRESS CAPITAL A,B,C,D OR SMALL a,b,c,d TO PROCEED!" << endl;
        cout << "YOUR ANSWER :: ";
        cin >> choice;
        cout << endl;
    }

    if (choice == 'c' || choice == 'C')
    {
        score++;
    }

    else
    {
        score = score + 0;
    }

    cout << "-----> QUESTION NUMBER 3 <----- " << endl;
    cout << endl;
    cout << "3. What is the output of the following code snippet?" << endl;
    cout << endl;
    cout << "int x = 5;" << endl;
    cout << "cout << x++ << endl;" << endl;
    cout << endl;
    cout << "A. 5" << endl;
    cout << "B. 6" << endl;
    cout << "C. Compiler error" << endl;
    cout << "D. Undefined behavior" << endl;
    cout << endl;
    cout << "YOUR ANSWER :: ";
    cin >> choice;
    cout << endl;

    while (choice != 'a' && choice != 'A' && choice != 'b' && choice != 'B' && choice != 'c' && choice != 'C' && choice != 'd' && choice != 'D')
    {
        cout << "PLEASE PRESS CAPITAL A,B,C,D OR SMALL a,b,c,d TO PROCEED!" << endl;
        cout << "YOUR ANSWER :: ";
        cin >> choice;
        cout << endl;
    }

    if (choice == 'a' || choice == 'A')
    {
        score++;
    }

    else
    {
        score = score + 0;
    }

    cout << "-----> QUESTION NUMBER 4 <----- " << endl;
    cout << endl;
    cout << "4. What is the correct syntax to declare a pointer in C++?" << endl;
    cout << endl;
    cout << "A. int ptr;" << endl;
    cout << "B. ptr int;" << endl;
    cout << "C. int *ptr;'" << endl;
    cout << "D. ptr *int;" << endl;
    cout << endl;
    cout << "YOUR ANSWER :: ";
    cin >> choice;
    cout << endl;

    while (choice != 'a' && choice != 'A' && choice != 'b' && choice != 'B' && choice != 'c' && choice != 'C' && choice != 'd' && choice != 'D')
    {
        cout << "PLEASE PRESS CAPITAL A,B,C,D OR SMALL a,b,c,d TO PROCEED!" << endl;
        cout << "YOUR ANSWER :: ";
        cin >> choice;
        cout << endl;
    }

    if (choice == 'c' || choice == 'C')
    {
        score++;
    }

    else
    {
        score = score + 0;
    }

    cout << "-----> QUESTION NUMBER 5 <----- " << endl;
    cout << endl;
    cout << "5. What does the 'break' statement do in a switch-case statement?" << endl;
    cout << endl;
    cout << "A. Exits the switch-case statement and continues with the next case" << endl;
    cout << "B. Exits the switch-case statement entirely" << endl;
    cout << "C. Skips the current case and continues with the next case" << endl;
    cout << "D. None of the above" << endl;
    cout << endl;
    cout << "YOUR ANSWER :: ";
    cin >> choice;
    cout << endl;

    while (choice != 'a' && choice != 'A' && choice != 'b' && choice != 'B' && choice != 'c' && choice != 'C' && choice != 'd' && choice != 'D')
    {
        cout << "PLEASE PRESS CAPITAL A,B,C,D OR SMALL a,b,c,d TO PROCEED!" << endl;
        cout << "YOUR ANSWER :: ";
        cin >> choice;
        cout << endl;
    }

    if (choice == 'b' || choice == 'B')
    {
        score++;
    }

    else
    {
        score = score + 0;
    }

    cout << "-----> QUESTION NUMBER 6 <----- " << endl;
    cout << endl;
    cout << "6. What is the difference between pass by value and pass by reference in C++?" << endl;
    cout << endl;
    cout << "A. Pass by value is the default method of passing arguments in C++." << endl;
    cout << "B. Pass by value is faster than pass by reference." << endl;
    cout << "C. Pass by reference is used for primitive data types, while pass by value is used for objects." << endl;
    cout << "D. Pass by value makes a copy of the argument, while pass by reference does not. " << endl;
    cout << endl;
    cout << "YOUR ANSWER :: ";
    cin >> choice;
    cout << endl;

    while (choice != 'a' && choice != 'A' && choice != 'b' && choice != 'B' && choice != 'c' && choice != 'C' && choice != 'd' && choice != 'D')
    {
        cout << "PLEASE PRESS CAPITAL A,B,C,D OR SMALL a,b,c,d TO PROCEED!" << endl;
        cout << "YOUR ANSWER :: ";
        cin >> choice;
        cout << endl;
    }

    if (choice == 'D' || choice == 'd')
    {
        score++;
    }

    else
    {
        score = score + 0;
    }

    cout << "-----> QUESTION NUMBER 7 <----- " << endl;
    cout << endl;
    cout << "7. How do you declare a constant variable in C++?" << endl;
    cout << endl;
    cout << "A. Using the 'constant' keyword before the variable name." << endl;
    cout << "B. Using the 'const' keyword before the data type." << endl;
    cout << "C. Using the 'readonly' keyword before the variable name." << endl;
    cout << "D. Constants cannot be declared in C++." << endl;
    cout << endl;
    cout << "YOUR ANSWER :: ";
    cin >> choice;
    cout << endl;

    while (choice != 'a' && choice != 'A' && choice != 'b' && choice != 'B' && choice != 'c' && choice != 'C' && choice != 'd' && choice != 'D')
    {
        cout << "PLEASE PRESS CAPITAL A,B,C,D OR SMALL a,b,c,d TO PROCEED!" << endl;
        cout << "YOUR ANSWER :: ";
        cin >> choice;
        cout << endl;
    }

    if (choice == 'b' || choice == 'B')
    {
        score++;
    }

    else
    {
        score = score + 0;
    }

    cout << "-----> QUESTION NUMBER 8 <----- " << endl;
    cout << endl;
    cout << "8. What is the difference between a class and an object in C++?" << endl;
    cout << endl;
    cout << "A. A class is a blueprint for creating objects, while an object is an instance of a class." << endl;
    cout << "B. A class contains member functions, while an object does not." << endl;
    cout << "C. An object is a type of data structure, while a class is a type of control structure." << endl;
    cout << "D. A class is used for input/output operations, while an object is used for arithmetic operations." << endl;
    cout << endl;
    cout << "YOUR ANSWER :: ";
    cin >> choice;
    cout << endl;

    while (choice != 'a' && choice != 'A' && choice != 'b' && choice != 'B' && choice != 'c' && choice != 'C' && choice != 'd' && choice != 'D')
    {
        cout << "PLEASE PRESS CAPITAL A,B,C,D OR SMALL a,b,c,d TO PROCEED!" << endl;
        cout << "YOUR ANSWER :: ";
        cin >> choice;
        cout << endl;
    }

    if (choice == 'a' || choice == 'A')
    {
        score++;
    }

    else
    {
        score = score + 0;
    }

    cout << "-----> QUESTION NUMBER 9 <----- " << endl;
    cout << endl;
    cout << "9. How do you define a destructor in a C++ class?" << endl;
    cout << endl;
    cout << "A. Using the keyword 'destroy' followed by the class name." << endl;
    cout << "B. Using the keyword 'finalize' followed by the class name." << endl;
    cout << "C. Using the '~' symbol followed by the class name." << endl;
    cout << "D. Destructors are automatically defined and cannot be explicitly declared." << endl;
    cout << endl;
    cout << "YOUR ANSWER :: ";
    cin >> choice;
    cout << endl;

    while (choice != 'a' && choice != 'A' && choice != 'b' && choice != 'B' && choice != 'c' && choice != 'C' && choice != 'd' && choice != 'D')
    {
        cout << "PLEASE PRESS CAPITAL A,B,C,D OR SMALL a,b,c,d TO PROCEED!" << endl;
        cout << "YOUR ANSWER :: ";
        cin >> choice;
        cout << endl;
    }

    if (choice == 'c' || choice == 'C')
    {
        score++;
    }

    else
    {
        score = score + 0;
    }

    cout << "-----> QUESTION NUMBER 10 <----- " << endl;
    cout << endl;
    cout << "10. How do you access a private member variable of a class from outside the class?" << endl;
    cout << endl;
    cout << "A. By using the 'friend' keyword to declare a function as a friend." << endl;
    cout << "B. By using the 'public' access specifier. " << endl;
    cout << "C. By using inheritance." << endl;
    cout << "D. Private member variables cannot be accessed from outside the class." << endl;
    cout << endl;
    cout << "YOUR ANSWER :: ";
    cin >> choice;
    cout << endl;

    while (choice != 'a' && choice != 'A' && choice != 'b' && choice != 'B' && choice != 'c' && choice != 'C' && choice != 'd' && choice != 'D')
    {
        cout << "PLEASE PRESS CAPITAL A,B,C,D OR SMALL a,b,c,d TO PROCEED!" << endl;
        cout << "YOUR ANSWER :: ";
        cin >> choice;
        cout << endl;
    }

    if (choice == 'a' || choice == 'A')
    {
        score++;
    }

    else
    {
        score = score + 0;
    }

    return score;
}