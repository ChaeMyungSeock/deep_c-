#include <string>
#include <vector>
#include <algorithm>

using namespace std;



vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> answer1{ 1, 2, 3, 4, 5 };
    vector<int> answer2{ 2, 1, 2, 3, 2, 4, 2, 5 };
    vector<int> answer3{ 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };

    int count1 = 0;
    int count2 = 0; 
    int count3 = 0;


    int max_score = 0;

    for (int i = 0; i < answers.size(); i++) {
        if (answers[i] == answer1[i%5]) count1++;
        if (answers[i] == answer2[i % 8]) count2++;
        if (answers[i] == answer3[i % 10]) count3++;

    }
    max_score = max(count1, max(count2, count3));

    if (max_score == count1) answer.push_back(1);
    if (max_score == count2) answer.push_back(2);
    if (max_score == count3) answer.push_back(3);



    return answer;
}