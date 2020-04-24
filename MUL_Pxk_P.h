DM_P MUL_Pxk_P(DM_P obj, unsigned short k)//Домножение многочлена на x^k
{
	DM_P* result;		//результирующий многочлен
	result = new DM_P;

	result->m = obj.m + k;				//Степень результирующего многочлена увеличится
	result->c = new DM_Q[result->m + 2];

	for (short i = 0; i < k; ++i)		//Новые члены заполняем нулями
		result->c[i] = { 0, 1 };

	for (short i = 0; i < obj.m + 1; ++i)	//Вносим старые члены
		result->c[i + k] = obj.c[i];

	return *result;//отправляем результат
}