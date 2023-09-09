#include <bits/stdc++.h>
using namespace std;

int main()
{   
    char op;
    double numb1,numb2,result;
    cout<<"************ Calculator **************"<<'\n';
    cout<<"Enter the First Number: ";
    cin>>numb1;
    cout<<"Enter the Second Number: ";
    cin>>numb2;
    cout<<"\n";
    std::cout << "Enter the Operator::" << std::endl;
    cin>>op;
    switch (op)
    {
    case '+':
        result = numb1+numb2;
        break;
    case '-':
        result = numb1-numb2;
        break;
    case '*':
        result = numb1*numb2;
        break;
    
    default:
        break;
    }
    cout<<"Result Is :: "<<result<<'\n';
    cout<<"**************************************"<<'\n';
    return 0;
}