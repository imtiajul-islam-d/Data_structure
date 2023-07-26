#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int roll;
        int marks;
    Student(string n, int r, int m)
    {
        this->name = n;
        this->roll = r;
        this->marks = m;
    }
};
class cmp
{
    public:
        bool operator()(Student a, Student b)
        {
            if(a.marks < b.marks) return true;
            else if(a.marks > b.marks) return false;
            else
            {
                if(a.roll < b.roll) return true;
                else return false;
            }
        }
};
int main()
{
    int n; cin >> n;
    priority_queue<Student, vector<Student>,cmp > pq;
    for(int i = 0; i<n; i++)
    {
        string s;
        int r;
        int m;
        cin >> s >> r >> m;
        Student obj(s, r, m);
        pq.push(obj);
    }
    while(!pq.empty())
    {
        cout << pq.top().name << pq.top().marks << endl;
        pq.pop();
    }
    return 0;
}   