#include <io.h>
#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>

using namespace std;

int test = 1;
float flotest = 2.5;
char testChar = 'T';
unsigned char unchtest = 'U';
string testStr = "string testStr";

int x;
int y;
int result;
int answerNum;
int requestNum;
int checkNum;
int returnNum;
int castTest_int_Num;
double castTest_double_Num;

/*
+   ���Z
-   ���Y 
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

