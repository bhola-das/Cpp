#include<bits/stdc++.h>
using namespace std;
class Employee{
    
    string name;
    int age;
    public:
    void setName(string ename)
    {
        name=ename;
    }
    void setAge(int eage)
    {
        age=eage;
    }

    string getName() 
    {
        return name;
    }

    int getAge() 
    {
        return age;
    }

};

int main()
{
    Employee obj;
    obj.setName("bhola das");
    obj.setAge(23);

    cout<<"name is"<<obj.getName();
    cout<<endl;
    cout<<"age is"<<obj.getAge();
}