#include<bits/stdc++.h>
#define N 5

using namespace std;

class Student
{
    //Contains student details
    protected:
        string roll_no;
        string s_name;
        string f_name;
        string m_name;
        string contact;
        string address;

        void Student_Credentials()
        {
            //Check whether entries are valid or not
            cout<<"Enter Student Name :";
            cin >>s_name;
            cout<<"Enter Student Roll Number :";
            cin >>roll_no;
            cout<<"Enter Father's name :";
            cin >>f_name;
            cout<<"Enter Mother's Name :";
            cin >>m_name;
            cout<<"Enter Contact Number :";
            cin >>contact;
            cout<<"Enter Student Address :";
            cin.ignore();
            getline(cin,address);
        }
};

class Test : public Student
{
    //Contains details pertaining to the exams
    protected:
        string semester;
        string branch;
        string test_name;
        //  Format test name to read uppercase to 
        string Subject_name[N];
        string marks[N];

        void Test_Details()
        {
            //Check whether entries are valid or not
            cout<<"Enter Branch Name :";
            cin >>branch;      
            cout<<"Enter Semester Number :";
            cin >>semester;
            cout<<"Enter Test Name :";
            cin >> test_name;
        }

        void Mark_Details()
        {
            for(int i=0; i<N; i++)
            {
                cout<<"Enter name for subject code "<<branch<<semester<<to_string(int((stoi(semester-1)%2)*5)%10)<<i+1<<" :";
                cin>>Subject_name[i];
                cout<<"Enter marks obtained for subject code "<<branch<<semester<<to_string(int((stoi(semester-1)%2)*5)%10)<<i+1<<" :";
                cin>>marks[i];
            }
        }
    //Marks will be initialized to 0 in the constructor
};

class Result : public Test
{
    //Used Primarily for result calculations
    protected:
        int PassMarks[N];
        int PassStatus[N];
        int class_strength;
        
        void Pass_req()
        {
            for(int i=0; i<N; i++)
            {
                cout<<"Enter pass mark for "<<branch<<to_string(int((stoi(semester-1)%2)*5)%10)<<i+1<<" :";
                cin>>PassMarks[i];
            }
        }
        void CalculateResult()
        {
            for(int i=0; i<N; i++)
            {
                if(stof(marks[i]) >= PassMarks[i])
                {
                    PassStatus[i] = 1;
                }
                else
                {
                    PassStatus[i] = 0;
                }
            }
        }

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
    class Test tst;
}