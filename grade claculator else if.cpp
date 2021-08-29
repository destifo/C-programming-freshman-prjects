#include <iostream>
using namespace std;

int main()
{
    double score;
    char grade;
    string subject;
    cout<< "Enter your Subject: "<<endl;
    getline(cin, subject);
    cout<< "Enter your Score: "<<endl;
    cin>> score;
    while(score>100 || score<0)
    {
        cout<< "Invalid Input" <<endl<< "Please try again"<<endl;
        cin>>score;
    }
    if(score>=80)
    {
        grade= 'A';
    }
    else if(score>=65)
    {
        grade= 'B';
    }
    else if(score>=45)
    {
        grade= 'C';
    }
    else if(score>=40)
    {
        grade= 'D';
    }
   else
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
