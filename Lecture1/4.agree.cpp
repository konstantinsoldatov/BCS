#include<iostream>
#include<string>

using std::cout, std::cin, std::string;

int main()
{
    // && - логическое И 
    // || - логическое ИЛИ
    string c;
    cout<<"Please input y\\n for yes or no\n";
    cin>>c;
    if(c == "y" || c =="Y" || c =="Yes" || c =="yes")
    {
        cout<<"Your input "<<c<<" action confirmed\n";
    }
    else if(c == "n" || c == "N" || c == "No" || c == "no")
    {
        cout<<"Your input is "<<c<<" action canceled\n";
    }
    else
    {
        cout<<"Your input is incorrect\n";
    }
}