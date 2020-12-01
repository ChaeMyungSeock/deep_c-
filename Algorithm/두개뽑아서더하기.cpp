#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    int i, j, sum;

    for(i = 0; i < numbers.size() - 1; i++) {
        for(j = i + 1; j < numbers.size(); j++) {
            sum = numbers[i] + numbers[j];
            if(find(answer.begin(), answer.end(), sum) == answer.end())
            //find() 함수는 만약 값을 찾았으면 해당 주소를 리턴하고, 
            //못 찾았다면 구간의 끝점 주소를 리턴합니다.
                answer.push_back(sum);
        }
    }
    
    sort(answer.begin(), answer.end());
    
    return answer;
}
