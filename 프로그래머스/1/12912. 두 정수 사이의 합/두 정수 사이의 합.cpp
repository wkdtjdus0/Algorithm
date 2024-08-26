#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    long long minX=0, maxX=0;
    
    if(a<b){
        minX=a;
        maxX=b;
    }
    else{
        minX=b;
        maxX=a;
    }
    
    if(abs(a-b)>=1){
        for(int i=minX;i<=maxX;i++){
            answer+=i;
        }
    }
    else if(a==b){
        answer=a;
    }
    
    return answer;
}