#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int cntp = 0, cnty = 0;

    for(char str:s){
        if(str == 'p' || str == 'P')
            cntp++;
        else if(str == 'y' || str == 'Y')
            cnty++;
    }
    
    if(cntp==cnty)
        answer = true;
    else
        answer = false;

    return answer;
}