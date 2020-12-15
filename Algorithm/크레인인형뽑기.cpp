#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
	int answer = 0;
	stack<int> bucket;

	for (int i = 0; i < moves.size(); i++)
	{
		int check = moves[i] - 1;
		for (int j = 0; j < board[0].size(); j++)
		{
			if (board[j][check - 1] != 0)
			{
				int a = board[j][check - 1];
				if (!bucket.empty() && bucket.top() == a)
				{
					answer += 2;
					bucket.pop();
				}
				else
					bucket.push(a);
				bucket.push(a);
				board[j][check - 1] = 0;
				break;
 			}
		}
	}

	return answer;
}