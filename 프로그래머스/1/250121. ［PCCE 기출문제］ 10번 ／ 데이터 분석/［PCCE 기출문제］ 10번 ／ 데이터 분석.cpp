#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    int ext_idx = 0, sort_idx = 0;
    
    if(ext=="code")
        ext_idx=0;
    else if(ext=="date")
        ext_idx=1;
    else if(ext=="maximum")
        ext_idx=2;
    else
        ext_idx=3;
    
    if(sort_by=="code")
        sort_idx=0;
    else if(sort_by=="date")
        sort_idx=1;
    else if(sort_by=="maximum")
        sort_idx=2;
    else
        sort_idx=3;
    
    for(int i=0;i<data.size();i++){
        if(data[i][ext_idx] < val_ext){
            answer.push_back(data[i]);
        }
    }
    
    for(int i=0;i<answer.size()-1;i++){
        for(int j=0;j<answer.size()-i-1;j++){
            if(answer[j][sort_idx] > answer[j+1][sort_idx]){
                vector<int> temp=answer[j];
                answer[j]=answer[j+1];
                answer[j+1]=temp;
            }
        }
    }
    
    return answer;
}