//целое число
#ifndef DM_Z_H
#define DM_Z_H

struct DM_Z
{
	unsighned short s; //знак числа, 1 = отрицательное, 0 = положительное.
	unsighned short *n; // указатель на массив цифр
	unsighned short l; //длинна числа
}

#endif
