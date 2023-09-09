#include <bits/stdc++.h>
using namespace std;
    class Human{
        public:
            string name,occupation;
            int age;

            void eat(){
                cout << "This Person in Hungry:\n"<<endl;
            }
            void drink(){
                cout<<"This Human is Drinking Alcohol ;)"<<endl;
            }
            void sleep(){
                cout<<"This Person is Sleeping"<<endl;
            }
    };
    class Student
    {
        public:
            string name;
            int Class;
            double gpa;
    Student(string name,int Class,double gpa)
    {
        this->name=name;
        this->Class=Class;
        this->gpa=gpa;
        
        cout<<"Name:"<<name<<endl;
        cout<<"Class:"<<Class<<endl;
        cout<<"GPA:"<<gpa<<endl;
    }
    };
int main()
{
    Human human1;
    human1.name = "Jeevan";
    human1.occupation= "Nothing Berojgar";
    human1.age = 70;

    cout<<human1.name<<endl;
    cout<<human1.occupation<<endl;
    cout<<human1.age<<endl;
    human1.eat();
    human1.drink();
    human1.sleep();
    cout<<"/******************************************/\n";
/*this line about the Constructor*/
    Student("Mike Tyson",11,3.33);

return 0;
}