#include "MainHeader.h"

void pr_001() {
	//�͂��߂ɏ����Ă������n���[���[���h
	cout << "!!!Hello World!!!" << endl;
}

void pr_002() {
	//�n���[���[���h std��unsigne���Ă���̂ŏȗ��ł���
	std::cout << "std::cout Hello World!!!" << endl;
}

void pr_003() {
	//printf���g��
	printf("printf��������HelloWorld");
}

void pr_004() {
	//endl������Ȃ�
	cout << "endl������Ȃ�.\n";
}

void pr_005() {
	//�ϐ��\��
	cout << test << endl;
}

void pr_006() {
	//�ϐ��\��
	cout << flotest << endl;
}

void pr_007() {
	//�ϐ��\��
	cout << testChar << endl;
}

void pr_008() {
	//�ϐ��\��
	cout << unchtest << endl;
}

void pr_009() {
	//�ϐ��\��
	cout << testStr << endl;
}

void pr_010() {
	/*�G�X�P�[�v
	�x����  �o�b�N�X�y�[�X ���y�[�W ���s  */
	cout << '\a' << '\b' << '\f' << '\n' << endl;
	/*�G�X�P�[�v
	���A  �����^�u �����^�u ��  */
	cout << '\r' << '\t' << '\v' << '\\' << endl;
	/*�G�X�P�[�v
	'       "        ?       8�i��   16�^��  */
	cout << '\'' << '\"' << '\?' << '\000' << '\x00' << endl;
}

void pr_011() {
	//8�i�� 16�i��
	cout << "8�i��8�̕����R�[�h����������" << '\008' << endl;
	cout << "16�i��10�̕����R�[�h����������" << '\x10' << endl;
}

void pr_012() {
	//8�i�� 16�i��
	cout << "8�i��10��" << 010 << endl;
	cout << "16�i��10��" << 0x10 << endl;
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
		cout << i << "�Ԗ�" << endl;
	}
	return 0;
}

int sizeCheck(int checkNum) {
	returnNum = sizeof(checkNum);
	cout << returnNum << "�o�C�g" << endl;
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
	cout << "�����Z�̓���" << endl;
	cout << "�ЂƂ߂̐��������" << endl;
	cin >> x;
	cout << "�ӂ��߂̐��������" << endl;
	cin >> y;
	cout << "�����Z�̓���" << endl;
	answerNum = plusCalc(x, y);
	cout << answerNum << endl;

	cout << "=====================================================================" << endl;

	cout << "�����Z" << endl;
	cout << "�ЂƂ߂̐��������" << endl;
	cin >> x;
	cout << "�ӂ��߂̐��������" << endl;
	cin >> y;
	answerNum = minusCalc(x, y);
	cout << "�����Z�̓���" << endl;
	cout << answerNum << endl;
	*/

	//counterNum(5);

	//sizeCheck(10);	

	//castNum(2.5);
	if (castNum(-5) == false)
	{
		cout << "minus" << endl;
	}

	//�R���\�[���ł��������~
	getchar();
	return 0;
}