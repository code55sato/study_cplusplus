#include "MainHeader.h"

void pr_001() {
	//はじめに書いてあったハローワールド
	cout << "!!!Hello World!!!" << endl;
}

void pr_002() {
	//ハローワールド stdはunsigneしているので省略できる
	std::cout << "std::cout Hello World!!!" << endl;
}

void pr_003() {
	//printfを使う
	printf("printfをつかってHelloWorld");
}

void pr_004() {
	//endlをつかわない
	cout << "endlをつかわない.\n";
}

void pr_005() {
	//変数表示
	cout << test << endl;
}

void pr_006() {
	//変数表示
	cout << flotest << endl;
}

void pr_007() {
	//変数表示
	cout << testChar << endl;
}

void pr_008() {
	//変数表示
	cout << unchtest << endl;
}

void pr_009() {
	//変数表示
	cout << testStr << endl;
}

void pr_010() {
	/*エスケープ
	警告音  バックスペース 改ページ 改行  */
	cout << '\a' << '\b' << '\f' << '\n' << endl;
	/*エスケープ
	復帰  水平タブ 垂直タブ ￥  */
	cout << '\r' << '\t' << '\v' << '\\' << endl;
	/*エスケープ
	'       "        ?       8進数   16真数  */
	cout << '\'' << '\"' << '\?' << '\000' << '\x00' << endl;
}

void pr_011() {
	//8進数 16進数
	cout << "8進数8の文字コードを持つ文字は" << '\008' << endl;
	cout << "16進数10の文字コードを持つ文字は" << '\x10' << endl;
}

void pr_012() {
	//8進数 16進数
	cout << "8進数10は" << 010 << endl;
	cout << "16進数10は" << 0x10 << endl;
}

int plusCalc(int x,int y) {
	result = x + y;
	return result;
}

int minusCalc(int x, int y) {
	result = x - y;
	return result;
}

int counterNum(int requestNum) {
	for (size_t i = 0; i <= requestNum; i++)
	{
		cout << i << "番目" << endl;
	}
	return 0;
}

int sizeCheck(int checkNum) {
	returnNum = sizeof(checkNum);
	cout << returnNum << "バイト" << endl;
	return 0;
}

bool castNum(double castTest_double_Num) {
	if (castTest_double_Num >= 0)
	{
		castTest_int_Num = (double)castTest_double_Num;
		cout << castTest_int_Num << endl;
		return true;
	}
	else
	{
		return false;
	}

}


int main() {

	/*
	cout << "足し算の答え" << endl;
	cout << "ひとつめの数字を入力" << endl;
	cin >> x;
	cout << "ふたつめの数字を入力" << endl;
	cin >> y;
	cout << "足し算の答え" << endl;
	answerNum = plusCalc(x, y);
	cout << answerNum << endl;

	cout << "=====================================================================" << endl;

	cout << "引き算" << endl;
	cout << "ひとつめの数字を入力" << endl;
	cin >> x;
	cout << "ふたつめの数字を入力" << endl;
	cin >> y;
	answerNum = minusCalc(x, y);
	cout << "引き算の答え" << endl;
	cout << answerNum << endl;
	*/

	//counterNum(5);

	//sizeCheck(10);	

	//castNum(2.5);
	if (castNum(-5) == false)
	{
		cout << "minus" << endl;
	}

	//コンソールでいったん停止
	getchar();
	return 0;
}