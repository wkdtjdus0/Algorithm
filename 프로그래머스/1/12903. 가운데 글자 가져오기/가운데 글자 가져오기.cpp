#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int str_len=s.length();
    int mid=str_len/2;
    if(str_len%2!=0) answer=s[mid];
    else answer=string(1, s[mid-1])+string(1, s[mid]);
    
    return answer;
}