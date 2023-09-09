#include <iostream>
#include <cmath>
using namespace std;


int main(){

int perpenducular,Hypotenous,base;

cout<<"Enter the side of trangle"<<'\n';
cout<<"First Perpendicluar: ";
cin >> perpenducular;
cout<<"Second Base: ";
cin>> base;
cout<<"Third Hypotenous: ";
cin>> Hypotenous;

Hypotenous = sqrt(pow(perpenducular,2)+pow(base,2));

cout<<"Hypo is :"<<Hypotenous<<'\n';

base= sqrt(pow(Hypotenous,2)+pow(perpenducular,2));

cout<<"Base:"<<base<<'\n';

perpenducular = sqrt(pow(base,2)+pow(Hypotenous,2));

cout<<"Perpenducular"<<perpenducular<<'\n';

return 0;


}