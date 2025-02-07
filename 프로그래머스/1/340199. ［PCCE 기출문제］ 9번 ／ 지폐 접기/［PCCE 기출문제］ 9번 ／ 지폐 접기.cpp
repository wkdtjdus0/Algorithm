#include <string>
#include <vector>

using namespace std;

bool isBillIn(vector<int> wallet, vector<int>bill){
    bool result=false;
    if (wallet[0]>=bill[0] && wallet[1]>=bill[1])
        result=true;
    if (wallet[0]>=bill[1] && wallet[1]>=bill[0])
        result=true;
    
    return result;
}

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    
    while(isBillIn(wallet, bill)==false){
        if(bill[0]>bill[1]){
            bill[0]/=2;
        }
        else{
            bill[1]/=2;
        }
        answer++;
    }
    
    return answer;
}