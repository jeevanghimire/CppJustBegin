#include <bits/stdc++.h>
using namespace std;
int main(){
    string questions[]={
        "A. What is the most fav Dish of mine:",
        "B. Who invented C: ",
        "C. What is My BirthDAte:",
        "D. Which is the first Programming Language Which I learned First:"
    };
    string Options_keys[][4]={
        {
            "A.MoMo" ,"B.Chawmin","C.Sukuti" ,"D.All Of the Above"
        },
        {
            "A.Dennis Ritchie","B.Jhon Von Numan" ,"C.Austa Loren" ,"D.MS Dhoni"
        },
        {
            "A.2003/11/27","B.2003/11/24" ,"C.2003/11/25" ,"D.2003/11/26"
        },
        {
            "A.Python" ,"B.C Language" ,"C.C++" ,"D.MatLab "
        }};
    
    char AnswerKey[] = {'D','A','D','A'};
    char guessAnswer;
    int Score=0;
    int size = sizeof(questions)/sizeof(questions[0]);

    for ( int i = 0; i <size; i++)
    {
        cout<<"********************************************"<<'\n';
        cout<<questions[i]<<'\n';
        cout<<"********************************************"<<'\n';
        for(int j = 0; j < sizeof(Options_keys[i])/sizeof(Options_keys[i][0]);j++)
        {
        cout<<Options_keys[i][j]<<'\n';
        }
        cin >> guessAnswer;
        guessAnswer = toupper(guessAnswer);
    if ( guessAnswer == AnswerKey[i]){
        cout<<"CORRECT CONGO!!!!:)"<<'\n';
        Score++;
    }else{
        cout<<"WRONG TRY AGAIN :>)"<<'\n';
        cout<<"ANSWER: "<<AnswerKey[i]<<'\n';
    }
    }
    cout<<"********************************************"<<'\n';
    cout<<"\t*RESULTS: "<<Score<<"*\t"<<'\n';
    cout<<"********************************************"<<'\n';
    cout<<"\t*Percentange = "<<((double)Score/size)*100<<"*\t"<<'\n';
    cout<<"********************************************"<<'\n';
    return 0;
}