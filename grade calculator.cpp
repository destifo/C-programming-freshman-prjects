#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double score;
    string subject;
    char grade;
    cout<< "Enter your Score and Subject: "<<endl;
    getline(cin, subject);
    cin>> score;
    if(score<=100 && score>=90)
    {
        grade= 'A+';
    }
    if(score<90 && score>=83)
    {
        grade= 'A';
    }
    if(score<83 && score>=80)
    {
        grade= 'A-';
    }
    if(score<80 && score>=75)
    {
        grade= 'B+';
    }
    if(score<75 && score>=70)
    {
        grade= 'B';
    }
    if(score<70 && score>=65)
    {
        grade= 'B-';
    }
    if(score<65 && score>= 60)
    {
        grade= 'C+';
    }
    if(score<60 && score>=50)
    {
        grade= 'C';
    }
    if(score<50 && score>= 45)
    {
        grade= 'C-';
    }
    if(score<45 && score>=40)
    {
        grade= 'D';
    }
    if(score<40)
    {
        grade= 'F';
    }
    cout<< "Your "<<subject<< " grade is "<<grade<<endl;
    if(grade== 'F')
    {
        cout<< "You should improve or It's an automatic Dismissal";
    }
    return 0;
}
