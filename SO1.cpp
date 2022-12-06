#include<bits/stdc++.h>
#define N 5

using namespace std;

class Student
{
    //Contains student details
    int roll_no;
    string s_name;
    string f_name;
    string m_name;
    string contact;
    string address;

};

class Test : public Student
{
    //Contains details pertaining to the exams
    int semester;
    string branch;
    string test_name;
    int subjects;
    int marks[N];
    
    //Marks will be initialized to 0 in the constructor
};

class Result : public Test
{
    //Used Primarily for result calculations
    int PassMarks[N];
    int CGPA[N+1];
    //Initializing  is due
};

class Storage : public Result
{
    //Usage in storing data obtained from previous classes
};

class Retrieval
{
    //Will be used to retrieve the data
};

int main()
{

}