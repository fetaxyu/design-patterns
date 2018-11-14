/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

@Author: fetaxyu
@Date: 2018-11-14
Email: fetaxyu@gmail.com
===============================================================*/
#include <iostream>

#include "design_patterns/algorithms/algorithm.h"


namespace solution {

bool Find(int target, std::vector<std::vector<int>> array) {
	bool found = false;
	int rows = array.size();
	int columns = array.at(0).size();
	int row = 0;
	int column = columns - 1;
	while (row < rows && column >= 0) {
		if (array[row][column] == target) {
			found = true;
			break;
		}
		if (array[row][column] > target) {
			--column;
		}
		else {
			++row;
		}
	}
	return found;
}

void ReplaceSpace(char * str, int length) {
	if (!str) {
		return;
	}
	int spaceCount = 0;
	for (int i = 0; i < length - 1; ++i) {
		if (str[i] == ' ') {
			++spaceCount;
		}
	}
	if (spaceCount > 0) {
		int newLength = length + spaceCount * 2;
		int newIndex = newLength;
		int oldIndex = length;
		while (oldIndex >= 0 && newIndex > oldIndex && spaceCount > 0) {
			if (str[oldIndex] == ' ') {
				str[newIndex--] = '0';
				str[newIndex--] = '2';
				str[newIndex--] = '%';
				--spaceCount;
			} else {
				str[newIndex--] = str[oldIndex];
			}
			--oldIndex;
		}

	}

	

	std::cout << str << std::endl;
}

std::vector<int> PrintListFromTailToHead(ListNode * head) {
	std::vector<int> rs;
	if (head) {
		while (head->next) {
			rs.push_back(head->val);
			head = head->next;
		}
		rs.push_back(head->val);
	}
	std::reverse(rs.begin(), rs.end());
	return  rs;
}

}