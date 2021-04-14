/*

Program 5 Extra Credit

Gibby, Ben

CSC119-142 Introduction to Programming C++ Spring 2021

Due 2/26/21

This is a simple game that gives you a riddle and provides a hint.

*/
//setting up headers
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//function declaration with prototypes
void riddle1();
string riddle1Question();
void riddle2();
string riddle2Question();
//global variables
string inputstring();
string answer,hint, answer2, hint2;
ofstream outputFile;
int main()
{
    outputFile.open("GameFile.txt");

//function call
   riddle1();

    riddle2();

    outputFile.close();
    return 0;
}
//function definition
void riddle1()
{
    string answer, hint;

answer=riddle1Question();

if (answer=="candle"||answer=="Candle")
{
    cout<<endl<<endl<<"good job!"<<endl<<endl;
    return;
}

    while (answer!="candle"&&answer!="Candle")
    {
        cout<<"incorrect would you like a hint? Y/N";
        hint=inputstring();

        if (hint=="y"||hint=="Y")
        {
            cout<<"You set it on fire and put in on mantles and dinner tables"<<endl;
            cout<<"Would you like another hint? Y/N";
            hint=inputstring();
            if (hint=="y"||hint=="Y")
            {
                cout<<"it comes in different fragerances"<<endl<<endl;
            }

        }
        answer=riddle1Question();
        hint="N";// reset hint to No

        if (answer=="candle"||answer=="Candle")
        {
            cout<<endl<<"Good Job!"<<endl;
            return;
        }
    }
}
string riddle1Question()
{
string answer;
//prompt user for input
cout<<"Answer this simple riddle:"<<endl<<endl;
cout<<"If i am tall when i am young and "<<endl;
cout<<"short when I am young what am I?"<<endl;
answer=inputstring();
return answer;

}
void riddle2()
{
    string answer2,hint2;

answer2= riddle2Question();
    if (answer2=="barber"||answer2=="Barber")
    {
        cout<<endl<<endl<<"Good job!"<<endl;
        return;
    }
    while (answer2!="barber"&&answer2!="Barber")
    {
        cout<<"Would you like a hint? Y/N";
        hint2=inputstring();

            if (hint2=="y"||hint2=="Y")
            {
                cout<<"it is a profession"<<endl;
                cout<<"Would you like another hint? Y/N";
                answer2=inputstring();
                    if (hint2=="y"||hint2=="Y")
                    {
                    cout<<"Barber"<<endl;
                    }
            }
            answer2=riddle2Question();
            hint2="N";
            if (answer2=="barber"||answer2=="Barber")
            {
                {
                cout<<endl<<"Good Job!"<<endl;
                return;//end the program
                }
            }

    }

}
string riddle2Question()
{
    cout<<"I cut hair everyday but it stays the same length.  What am I?"<<endl;
    answer2=inputstring();
    return answer2;
}
string inputstring()
{
    string s;
    cin>>s;
    outputFile<<s<<endl;

    return s;
}


