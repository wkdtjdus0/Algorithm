#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min_idx=min_element(arr.begin(), arr.end())-arr.begin();
    
    if(arr.size()==1){
        answer.push_back(-1);
        return answer;
    }
    
    for(int i=0;i<arr.size();i++){
        if(i==min_idx) continue;
        answer.push_back(arr[i]);
    }
    
    return answer;
}