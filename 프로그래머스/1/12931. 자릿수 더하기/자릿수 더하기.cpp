#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0, m = 0;

    while(true){
        m += n%10;
        n /= 10;
        if(n==0)
            break;
    }
    
    answer = m;

    return answer;
}