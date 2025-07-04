#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    for(int j=0;j<s.length()-1;j++)
        for(int i=0;i<s.length()-j-1;i++){
            if(s[i]<s[i+1]){
                char temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
            }
    }
    answer=s;
    return answer;
}