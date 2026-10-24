//    this is a career ai that helps you choose your carrer in tech feild like:


// ai
// data science
// cyber security
// computer science
// software engineering

#include <iostream>

using namespace std;

class Info
{
public:
    int se = 0;
    int ai = 0;
    int cysec = 0;
    int ds = 0;
    int cs = 0;
    string name;
    int age;

    void details()
    {
        cout << "ENTER FULL NAME: ";
        getline(cin, name);
        cout << "AGE: ";
        cin >> age;
        cout << endl;
    }

    void questions()
    {
        char likes;
        cout << endl;
        cout << "ANSWER THE FOLLOWING QUESTIONS.ENTER Y FOR YES AND N FOR NO: " << endl;

        cout << "Do you enjoy logical problems?: ";
        cin >> likes;

        if (likes == 'y' || likes == 'Y')
        {
            se++;
        }

        cout << "Do you like math?: ";
        cin >> likes;

        if (likes == 'y' || likes == 'Y')
        {
            ai++;
        }

        cout << "Do you enjoy linux?: ";
        cin >> likes;

        if (likes == 'y' || likes == 'Y')
        {
            cysec++;
        }

        cout << "Are you interested in ai?: ";
        cin >> likes;

        if (likes == 'y' || likes == 'Y')
        {
            ai++;
        }

        cout << "Do you like working with databases?: ";
        cin >> likes;

        if (likes == 'y' || likes == 'Y')
        {
            se++;
            ds++;
        }

        cout << "Do you like problem solving?: ";
        cin >> likes;

        if (likes == 'y' || likes == 'Y')
        {
            se++;
        }

        cout << "Do you like working with hardware?: ";
        cin >> likes;

        if (likes == 'y' || likes == 'Y')
        {
            cs++;
        }

        cout << "Do you like networking?: ";
        cin >> likes;

        if (likes == 'y' || likes == 'Y')
        {
            se++;
            cysec++;
        }

        cout << endl;
        cout << "Thats enough for today. " << endl;
        cout << endl;
    }

    void aii()
    {
        cout << endl;
        cout << endl;
        cout << "TO BECOME A GOOD AI ENGINEER YOU NEED TO FOLLOW THE FOLLOWING ROADMAP\n"
             << endl;

        cout << "Learn Python and C++ (optional but useful)." << endl;
        cout << "Study Mathematics (Linear Algebra, Calculus, Probability, Statistics)." << endl;
        cout << "Learn Machine Learning and Deep Learning." << endl;
        cout << "Learn data handling and model training." << endl;
        cout << "Build AI projects like chatbots, image classifiers, and recommendation systems." << endl;
    }

    void see()
    {
        cout << endl;
        cout << endl;
        cout << "TO BECOME A GOOD SOFTWARE ENGINEER YOU NEED TO FOLLOW THE FOLLOWING ROADMAP\n"
             << endl;

        cout << "Master C and C++." << endl;
        cout << "Learn DSA, Operating Systems, Computer Networks, and DBMS." << endl;
        cout << "Become proficient with Linux and shell scripting." << endl;
        cout << "Study multithreading, memory management, and system design." << endl;
        cout << "Build projects like a shell, web server, file system, or mini OS." << endl;
    }

    void cysecy()
    {
        cout << endl;
        cout << endl;
        cout << "TO BECOME A GOOD CYBER SECURITY ENGINEER YOU NEED TO FOLLOW THE FOLLOWING ROADMAP\n"
             << endl;

        cout << "Learn Linux and Computer Networks." << endl;
        cout << "Study Operating Systems and system internals." << endl;
        cout << "Learn Python/Bash scripting and basic C/C++." << endl;
        cout << "Understand web security, cryptography, and penetration testing." << endl;
        cout << "Practice using CTFs and security labs." << endl;
    }

    void dss()
    {
        cout << endl;
        cout << endl;
        cout << "TO BECOME A GOOD DATA ENGINEER YOU NEED TO FOLLOW THE FOLLOWING ROADMAP\n"
             << endl;

        cout << "Learn Python and SQL." << endl;
        cout << "Study Statistics, Probability, and Mathematics." << endl;
        cout << "Learn data analysis with Pandas and NumPy." << endl;
        cout << "Learn Machine Learning and data visualization." << endl;
        cout << "Build projects using real-world datasets." << endl;
    }

    void css()
    {
        cout << endl;
        cout << endl;
        cout << "TO BECOME A GOOD COMPUTER ENGINEER YOU NEED TO FOLLOW THE FOLLOWING ROADMAP\n"
             << endl;

        cout << "Master DSA and algorithms." << endl;
        cout << "Study Operating Systems, DBMS, Computer Networks, and OOP." << endl;
        cout << "Learn programming in C++, Python, and Git." << endl;
        cout << "Understand software engineering and system design fundamentals." << endl;
        cout << "Build projects and explore different CS fields before specializing." << endl;
    }

    void decide()
    {
        if (se > ai && se > cs && se > cysec && se > ds)
        {
            cout << name << " You should become a software engineer" << endl;
            see();
        }

        if (ai > se && ai > cs && ai > cysec && ai > ds)
        {
            cout << name << " You should become an ai engineer" << endl;
            aii();
        }

        if (cs > ai && cs > se && cs > cysec && cs > ds)
        {
            cout << name << " You should becone a computer engineer." << endl;
            css();
        }

        if (ds > ai && ds > cs && ds > cysec && ds > se)
        {
            cout << name << " You should become data scientist>";
            dss();
        }

        if (cysec > ai && cysec > cs && cysec > se && cysec > ds)
        {
            cout << name << " You should become a cyber security engineer." << endl;
            cysecy();
        }
    }

    void distractions()
    {
        cout << endl;
        cout << "AVOID THE FOLLOWING DISTRACTIONS. " << endl;
        cout << endl;
        cout << "Don't jump from one programming language to another without mastering one." << endl;
        cout << "Don't keep switching career paths every week." << endl;
        cout << "Don't fall into tutorial hell; build projects." << endl;
        cout << "Don't compare your progress with others." << endl;
        cout << "Don't skip the fundamentals (DSA, OOP, OS, DBMS, CN)." << endl;
        cout << "Don't quit when a topic becomes difficult." << endl;
        cout << "Don't copy code without understanding it." << endl;
        cout << "Don't spend hours watching videos instead of coding." << endl;
        cout << "Don't try to learn everything at once." << endl;
        cout << "Stay consistent, practice daily, and be patient." << endl;
        cout << endl;
    }

    void thanks()
    {
        cout << "THANK YOU MR." << name << " FOR USING CAREER AI." << endl;
        cout << endl;
    }

    void greet()
    {
        char option;
        cout << "hello! " << name << " WELCOME TO CARRER AI." << endl;
        cout << "Mr." << name << " we will help you choose your carrer in tech feild." << endl;
        cout << "Before we choose your carrer in tech feild, I will ask some questions about your interests in tech feild. " << endl;
        cout << endl;
        cout << "ARE YOU READY FOR THE QUESTIONS " << name << " : ";
        cin >> option;

        if (option == 'y' || option == 'Y')
        {
            questions();
            decide();
            distractions();
            thanks();
        }
        else
        {
            cout << "TAKE YOUR TIME Mr." << name << endl;
        }

        cout << endl;
    }
};

int main()
{
    Info i;

    i.details();

    i.greet();

    return 0;
}