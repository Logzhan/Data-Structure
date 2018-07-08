#include <string>
#include <iostream>
#include "Permutation.h"

using namespace std;

/*************************************************************
 * Author     : Zhanli@UESTC
 * Time       : 2018-6-30
 * Descrption : 对输入的字符串进行全排列，该算法采用递归方法。
                原理： 让第一个字符跟所有字符轮流交换，得到
				abcd, bacd, cbad, dbca四种情况
				对每一种情况继续递归，以bcd为例子：
				bcd, cbd, dcb 有三种情况。以bcd为例子，
				bcd, bdc, 两种情况。所以对于abcd一共又24中排列方
				法。
				算法核心：让每一个字符和后面的字符进行交换。包括与
				自身的交换。对于长度为n的字符串，交换方式有n种，
				对n种的每一个取1~n-1进行n-1次交换。一次类推。
				一共得到n！种。
				如果两个不同位置的元素是相同的，那么交换没有意义。
				例如 abad 元素1和元素3的交换就没有意义。			      
*************************************************************/
void Permuation(string str, int st){
	if (st == str.length() - 1){
		cout << str.c_str() << endl;
		return;
	}
	for (unsigned int i = st; i < str.length(); i++){
		string s = str;
		/* 如果两个元素位置不同，但是相等，那么不进行交换*/
		if (i != st && s[i] == s[st])continue;
		char tmp = s[st];
		s[st] = s[i];
		s[i] = tmp;

		Permuation(s, st + 1);
	}
}
