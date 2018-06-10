#include "Lesson1_output.h"

Lesson1_output::Lesson1_output()
{
}

Lesson1_output::~Lesson1_output()
{
}

void  Lesson1_output::pr_001() {
	//はじめに書いてあったハローワールド
	cout << "!!!Hello World!!!" << endl;
}

void  Lesson1_output::pr_002() {
	//ハローワールド stdはusingしているので省略できる
	std::cout << "std::cout Hello World!!!" << endl;
}

void  Lesson1_output::pr_003() {
	//printfを使う
	printf("printfをつかってHelloWorld");
}

void  Lesson1_output::pr_004() {
	//endlをつかわない
	cout << "endlをつかわない.\n";
}

void  Lesson1_output::pr_005() {
	int test = 1;
	//変数表示
	cout << test << endl;
}

void  Lesson1_output::pr_006() {
	float flotest = 2.5;
	//変数表示
	cout << flotest << endl;
}

void  Lesson1_output::pr_007() {
	char testChar = 'T';
	//変数表示
	cout << testChar << endl;
}

void  Lesson1_output::pr_008() {
	unsigned char unchtest = 'U';
	//変数表示
	cout << unchtest << endl;
}

void  Lesson1_output::pr_009() {
	string testStr = "string testStr";
	//変数表示
	cout << testStr << endl;
}

void  Lesson1_output::pr_010() {
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

void  Lesson1_output::pr_011() {
	//8進数 16進数
	cout << "8進数8の文字コードを持つ文字は" << '\008' << endl;
	cout << "16進数10の文字コードを持つ文字は" << '\x10' << endl;
}

void  Lesson1_output::pr_012() {
	//8進数 16進数
	cout << "8進数10は" << 010 << endl;
	cout << "16進数10は" << 0x10 << endl;
}