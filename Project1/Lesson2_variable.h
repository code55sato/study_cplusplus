#pragma once
#include <io.h>
#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>

using namespace std;

class Lesson2_variable
{
public:

	int x;
	int y;
	int result;
	int answerNum;
	int requestNum;
	int checkNum;
	int returnNum;

	double castTest_double_Num;

	Lesson2_variable();
	~Lesson2_variable();

	int plusCalc(int x, int y);
	int minusCalc(int x, int y);
	int counterNum(int requestNum);
	int sizeCheck(int checkNum);
	bool castNum(double castTest_double_Num);
};

/*
+   ���Z
-   ���Z
*   ��Z
/   ���Z
%   ���Z�]�@��]
~   �␔
&   �r�b�g�_����
|   �r�b�g�_���a
^   �r�b�g�r���I�_���a
<<  ���V�t�g
>>  �E�V�t�g
++  �C���N�������g
--  �f�N�������g
>   ���傫��
>=  �ȏ�
<   ����
<=  �ȏ�
==  ����
!=  �񓙉�
!   �_���ے�
&&  �_����
||  �_���a
*   �ԐڎQ�Ɓ@�|�C���^
,   ����
()  �֐�
[]  �z��
::  �X�R�[�v
.   �����o�Q��

->  �����o�ԐڎQ�Ɓ@�@
�\���̂������Ƃ��ɁC�\���̌^�ϐ��𒼐ڈ����̂ł͂Ȃ��āC�\���̌^�ϐ��ւ̃|�C���^����āC�ԐړI�Ɉ������Ƃ��悭����B
���̂悤�ȂƂ��̂��߂ɁC�\���̌^���w���|�C���^�l���炻�ꂪ�w���\���̂̃����o���Q�Ƃ��邽�߂̉��Z�q "->" ������

�\���̂��w���|�C���^ -> �\���̂̃����o��
��������
(* �\���̂��w���|�C���^).�\���̂̃����o��

?:  ����
new ���I�������m��
delete ���I���������
sizeof �T�C�Y
*/

/*
+=
-=
*=
/=
%=
&=   �_���ϑ��
^=   �r���I�_���a���
|=   �_���a���
<<=  ���V�t�g���
>>=  �E�V�t�g���
*/

