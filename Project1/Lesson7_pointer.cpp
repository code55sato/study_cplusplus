#include "Lesson7_pointer.h"



Lesson7_pointer::Lesson7_pointer()
{
}


Lesson7_pointer::~Lesson7_pointer()
{
}

void Lesson7_pointer::pointerTestReturnIntNum()
{
	pointerTestIntNum1 = 10;

	cout << pointerTestIntNum1 << endl;
	cout << "�ϐ��̃A�h���X�F"  << &pointerTestIntNum1 << endl;
	cout << "�|�C���^p_pointerTestIntNum1�̒l�F" << p_pointerTestIntNum1 << endl;
	cout << "�|�C���^*p_pointerTestIntNum1�̒l�F" << *p_pointerTestIntNum1 << endl;
	//cout << p_pointerTestIntNum1 + 10 << endl;
	//cout << *p_pointerTestIntNum1 + 10 << endl;
	getchar();

}

void Lesson7_pointer::pointerTestReturnSwap()
{


	cout << "�|�C���^�e�X�g�p�̐���1�����" << endl;
	cin >> pointerTestIntNum1;
	cout << "�|�C���^�e�X�g�p�̐���2�����" << endl;
	cin >> pointerTestIntNum2;

	temp = *p_pointerTestIntNum2;
	*p_pointerTestIntNum2 = *p_pointerTestIntNum1;
	*p_pointerTestIntNum1 = temp;


	cout << "�|�C���^�e�X�g�p�̐���1:" << pointerTestIntNum1 << endl;
	getchar();
	cout << "�|�C���^�e�X�g�p�̐���2:" << pointerTestIntNum2 << endl;
	getchar();


}

int Lesson7_pointer::pointerTestReturnSwap(int* p_pointerTestIntNum1, int* p_pointerTestIntNum2)
{
	temp = *p_pointerTestIntNum2;
	*p_pointerTestIntNum2 = *p_pointerTestIntNum1;
	*p_pointerTestIntNum1 = temp;
	return *p_pointerTestIntNum1;
}

