/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

@Author: fetaxyu
@Date: 2018-11-14
Email: fetaxyu@gmail.com
===============================================================*/
#ifndef DESIGN_PATTERNS_ALGORITHMS_H_
#define DESIGN_PATTERNS_ALGORITHMS_H_

#include <vector>

namespace solution {

	struct ListNode {
		int val;
		struct ListNode *next;
		ListNode(int x) : val(x), next(NULL) { }
	};


	// 在一个二维数组中（每个一维数组的长度相同），每一行都按照从左
	// 到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
	// 请完成一个函数，输入这样的一个二维数组和一个整数，判断数组
	// 中是否含有该整数。
	bool Find(int target, std::vector<std::vector<int>> array);

	// 请实现一个函数，将一个字符串中的每个空格替换成“%20”。
	// 例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。
	void ReplaceSpace(char *str, int length);

	// 输入一个链表，按链表值从尾到头的顺序返回一个ArrayList。
	std::vector<int> PrintListFromTailToHead(ListNode* head);

}

#endif