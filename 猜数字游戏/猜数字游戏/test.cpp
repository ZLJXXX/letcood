#define _CRT_SECURE_NO_WARNINGS
//示例 1：
//
//输入：guess = [1, 2, 3], answer = [1, 2, 3]
//输出：3
//解释：小A 每次都猜对了。
//
//
//示例 2：
//
//输入：guess = [2, 2, 3], answer = [3, 2, 1]
//输出：1
//解释：小A 只猜对了第二次。
//
//
//限制：
//
//guess的长度 = 3
//answer的长度 = 3
//guess的元素取值为{ 1, 2, 3 } 之一。
//answer的元素取值为{ 1, 2, 3 } 之一。
//
//来源：力扣（LeetCode）
//链接：https ://leetcode-cn.com/problems/guess-numbers
class Solution {
public:
	int game(vector<int>& guess, vector<int>& answer) {
		int count = 0;
		for (int i = 0; i<3; i++)
		{
			if (guess[i] == answer[i])
			{
				count++;
			}
		}
		return count;
	}
};