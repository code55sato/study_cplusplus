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
+   加算
-   減算
*   乗算
/   除算
%   除算余　剰余
~   補数
&   ビット論理積
|   ビット論理和
^   ビット排他的論理和
<<  左シフト
>>  右シフト
++  インクリメント
--  デクリメント
>   より大きい
>=  以上
<   未満
<=  以上
==  等価
!=  非等価
!   論理否定
&&  論理積
||  論理和
*   間接参照　ポインタ
,   順次
()  関数
[]  配列
::  スコープ
.   メンバ参照

->  メンバ間接参照　　
構造体を扱うときに，構造体型変数を直接扱うのではなくて，構造体型変数へのポインタを介して，間接的に扱うことがよくある。
そのようなときのために，構造体型を指すポインタ値からそれが指す構造体のメンバを参照するための演算子 "->" がある

構造体を指すポインタ -> 構造体のメンバ名
↑↓同じ
(* 構造体を指すポインタ).構造体のメンバ名

?:  条件
new 動的メモリ確保
delete 動的メモリ解放
sizeof サイズ
*/

/*
+=
-=
*=
/=
%=
&=   論理積代入
^=   排他的論理和代入
|=   論理和代入
<<=  左シフト代入
>>=  右シフト代入
*/

