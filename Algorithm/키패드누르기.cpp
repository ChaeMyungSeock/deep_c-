#include <stdio.h>
#include <string>
#include <vector>

using namespace std;


string solution(vector<int> numbers, string hand) {
    string answer = "";
    int left_hand = 10, right_hand = 12, left_dis = 0, right_dis = 0;

    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7)
        {
            answer += "L";
            left_hand = numbers[i];

        }
        else if (numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9)
        {
            answer += "R";
            right_hand = numbers[i];

        }
        else
        {
            if (numbers[i] == 0)
            {
                numbers[i] = 11;
            }
            int tmp_L = abs(left_hand - numbers[i]);
            int tmp_R = abs(right_hand - numbers[i]);

            left_dis = tmp_L / 3 + tmp_L % 3;
            right_dis = tmp_R / 3 + tmp_R % 3;

            if (left_dis == right_dis)
            {
                if (hand == "right")
                {
                    answer += "R";
                    right_hand = numbers[i];
                }
                else
                {
                    answer += "L";
                    left_hand = numbers[i];
                }
            }
            else if (left_dis < right_dis)
            {

                answer += "L";
                left_hand = numbers[i];
            }
            else
            {
                answer += "R";
                right_hand = numbers[i];

            }
        }
    }

    return answer;
}


int main()
{

    return 0;
}