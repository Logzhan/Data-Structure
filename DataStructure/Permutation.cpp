#include <string>
#include <iostream>
#include "Permutation.h"

using namespace std;

/*************************************************************
 * Author     : Zhanli@UESTC
 * Time       : 2018-6-30
 * Descrption : ��������ַ�������ȫ���У����㷨���õݹ鷽����
                ԭ�� �õ�һ���ַ��������ַ������������õ�
				abcd, bacd, cbad, dbca�������
				��ÿһ����������ݹ飬��bcdΪ���ӣ�
				bcd, cbd, dcb �������������bcdΪ���ӣ�
				bcd, bdc, ������������Զ���abcdһ����24�����з�
				����
				�㷨���ģ���ÿһ���ַ��ͺ�����ַ����н�����������
				����Ľ��������ڳ���Ϊn���ַ�����������ʽ��n�֣�
				��n�ֵ�ÿһ��ȡ1~n-1����n-1�ν�����һ�����ơ�
				һ���õ�n���֡�
				���������ͬλ�õ�Ԫ������ͬ�ģ���ô����û�����塣
				���� abad Ԫ��1��Ԫ��3�Ľ�����û�����塣			      
*************************************************************/
void Permuation(string str, int st){
	if (st == str.length() - 1){
		cout << str.c_str() << endl;
		return;
	}
	for (unsigned int i = st; i < str.length(); i++){
		string s = str;
		/* �������Ԫ��λ�ò�ͬ��������ȣ���ô�����н���*/
		if (i != st && s[i] == s[st])continue;
		char tmp = s[st];
		s[st] = s[i];
		s[i] = tmp;

		Permuation(s, st + 1);
	}
}
