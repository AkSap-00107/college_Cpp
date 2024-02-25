#include <iostream>
using namespace std;

class college
{
    int collegeId;
    string collegeName;
    int establishmentYear;
    string universityName;

public:
    college() {}
    college(int cI, string cN, int eY, string uN)
    {
        collegeId = cI;
        collegeName = cN;
        establishmentYear = eY;
        universityName = uN;
    }
    void displayCollege(string university)
    {
        if (universityName == university)
        {
            cout << "colleg Id=" << collegeId << endl;
            cout << "colleg Name=" << collegeName << endl;
            cout << "colleg Establish Year=" << establishmentYear << endl;
            cout << "Associate University Name=" << universityName << endl;
        }
    }
    void displayCollege(int estaYear)
    {
        if (establishmentYear == estaYear)
        {
            cout << "colleg Id=" << collegeId << endl;
            cout << "colleg Name=" << collegeName << endl;
            cout << "colleg Establish Year=" << establishmentYear << endl;
            cout << "Associate University Name=" << universityName << endl;
        }
    }
};
int main()
{
    int collegeid;
    string collegename;
    int establishmentyear;
    string universityname;

    college C1[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter College Id:" << endl;
        cin >> collegeid;
        cout << "Enter College Name:" << endl;
        cin >> collegename;
        cout << "Enter Established Year:" << endl;
        cin >> establishmentyear;
        cout << "Enter University Name:" << endl;
        cin >> universityname;
        C1[i] = college(collegeid, collegename, establishmentyear, universityname);
    }

    cout << "Enter Established Year:" << endl;
    cin >> establishmentyear;
    cout << "Enter University Name:" << endl;
    cin >> universityname;
    for (int i = 0; i < 3; i++)
    {
        C1[i].displayCollege(establishmentyear);
        C1[i].displayCollege(universityname);
    }
    return 0;
}