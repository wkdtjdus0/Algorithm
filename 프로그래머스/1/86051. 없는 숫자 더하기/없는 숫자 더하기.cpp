#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 45;
    
    for(int n:numbers){
        answer-=n;
    }
    
    return answer;
}