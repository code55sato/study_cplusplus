#include "Lesson1_output.h"

Lesson1_output::Lesson1_output()
{
}

Lesson1_output::~Lesson1_output()
{
}

void  Lesson1_output::pr_001() {
	//�͂��߂ɏ����Ă������n���[���[���h
	cout << "!!!Hello World!!!" << endl;
}

void  Lesson1_output::pr_002() {
	//�n���[���[���h std��using���Ă���̂ŏȗ��ł���
	std::cout << "std::cout Hello World!!!" << endl;
}

void  Lesson1_output::pr_003() {
	//printf���g��
	printf("printf��������HelloWorld");
}

void  Lesson1_output::pr_004() {
	//endl������Ȃ�
	cout << "endl������Ȃ�.\n";
}

void  Lesson1_output::pr_005() {
	int test = 1;
	//�ϐ��\��
	cout << test << endl;
}

void  Lesson1_output::pr_006() {
	float flotest = 2.5;
	//�ϐ��\��
	cout << flotest << endl;
}

void  Lesson1_output::pr_007() {
	char testChar = 'T';
	//�ϐ��\��
	cout << testChar << endl;
}

void  Lesson1_output::pr_008() {
	unsigned char unchtest = 'U';
	//�ϐ��\��
	cout << unchtest << endl;
}

void  Lesson1_output::pr_009() {
	string testStr = "string testStr";
	//�ϐ��\��
	cout << testStr << endl;
}

void  Lesson1_output::pr_010() {
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

void  Lesson1_output::pr_011() {
	//8�i�� 16�i��
	cout << "8�i��8�̕����R�[�h����������" << '\008' << endl;
	cout << "16�i��10�̕����R�[�h����������" << '\x10' << endl;
}

void  Lesson1_output::pr_012() {
	//8�i�� 16�i��
	cout << "8�i��10��" << 010 << endl;
	cout << "16�i��10��" << 0x10 << endl;
}