#include<iostream>


using namespace std;

void replaceSpace(char *str, int length) {
	if (str == NULL)return;
	int maxLength = strlen(str);

	int BlankNum = 0;
	for (int i = 0; i < length; i++){
		if (str[i] == ' '){
			BlankNum++;
		}
	}
	int ReplaceNum = length + 2 * BlankNum;
	cout << ReplaceNum << endl;

	int RealLength = length;
	while (ReplaceNum && RealLength >= 0){

		if (str[RealLength] == ' '){
			str[ReplaceNum--] = '0';
			str[ReplaceNum--] = '2';
			str[ReplaceNum--] = '%';
		}
		else{
			str[ReplaceNum--] = str[RealLength];
		}
		RealLength--;
	}
	cout << str << endl;
}

int relaceblank(){
	char str[20] = " helloworld";
	cout << strlen(str) << endl;
	replaceSpace(str, 11);
	cout << str << endl;
	system("pause");
	return 0;
}