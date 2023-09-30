#include<bits/stdc++.h>

using namespace std ;

class Student
{
public:
    string name;
    int roll;
    int mark;
    Student(string name, int roll, int mark)
    {
        this->mark = mark;
        this->roll = roll;
        this->name = name;
    }
};
class compare
{
public:
    bool operator()(Student std1, Student std2)
    {
        if (std1.mark < std2.mark)
        {
            return true;
        }
        else if (std1.mark > std2.mark)
        {
            return false;
        }
        else
        {
            if (std1.roll > std2.roll)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};

int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, compare> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        cin>>name ;
        int roll, mark;
        cin>>roll>>mark;
        Student student(name, roll, mark);
        pq.push(student);
    }
    
    int q; cin>>q;
    while(q--)
    {
        int m ; cin>>m;
        if(m==0)
        {
            string nam ; cin>>nam ;
            int rol, markk;
            cin>>rol>>markk;
            Student studentt(nam, rol, markk);
            pq.push(studentt);
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().mark<<endl;
        }
        else if(m==1)
        {
            if(pq.empty()) 
            {
                cout<<"Empty"<<endl;
            }
            else 
            {
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().mark<<endl;
            }
        }
        else if(m==2)
        {
            if(!pq.empty())
            {
                pq.pop();
            }
            if(pq.empty())
            {
                cout<<"Empty"<<endl;
            }
            else 
            {
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().mark<<endl;
            }
        }
    }


    return 0 ;
}