#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string str=to_string(n);
    
    for(int i=0;i<str.size();i++){
        for(int j=0;j<str.size()-1-i;j++){
            if(str[j]<str[j+1]){
                char temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    
    answer=stol(str);
    
    return answer;
}