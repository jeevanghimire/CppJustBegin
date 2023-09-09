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

return 0;
}