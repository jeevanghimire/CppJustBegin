#include <bits/stdc++.h>
using namespace std;

int getDigit(const int number){
    return number %10 +(number/10%10);
}
int sumOddDigit(const string cardNumber){
    int sum=0;
    for (int i = cardNumber.size()-2;i>=0 ; i-=2)
    {
        sum += getDigit((cardNumber[i]- '0')*2);
    }
    return sum;
}
int sumEvenDigit(const string cardNumber){

    int sum=0;
    for (int i = cardNumber.size()-1;i>=0 ; i-=2)
    {
        sum += cardNumber[i]- '0';
    }
    return sum;
}

int main(){
    string CreditCardNumber;
    int result = 0;
    cout<<"Enter the Credit Card Number:"<<'\n';
    cin>>CreditCardNumber;

    result = sumEvenDigit(CreditCardNumber) + sumOddDigit(CreditCardNumber);
    if(result%10==0){
        cout<<"Your Credit Card is Valid:) "<<'\n';
    }else{
        cout<<"The Credit Card is Not Valid:("<<'\n';
    }

return 0;
}