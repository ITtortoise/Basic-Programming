#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ifstream fin;
    char ch;
    fin.open("my file.data");
    ch>>fin.get();
    while(!fin.eof())
    {
        cout<<ch;
        ch>>fin.get();
    }
    fin.close();
}

