DM_P ADD_P_PP(DM_P first_p, DM_P second_p)//сложение многочленов
{
	DM_P result;
	result.c = NULL;
	int k = 0;

	if (first_p.m >= second_p.m)                                             //Если степень первого многочлена больше второго
	{
		result.m = first_p.m;                                                //Максимальная степень многочлена суммы будет равна максимальной степени первого многочлена
		result.c = new DM_Q[first_p.m];                                      //Выдаем место для результирующего многочлена
		for (int i = 0; i < second_p.m; i++)
		{
			result.c[i] = ADD_QQ_Q(first_p.c[i], second_p.c[i]);            //Суммируем коэффиценты многочленов
			k = i;
		}
		for (int i = k; i < first_p.m; i++)
		{
			result.c[i] = first_p.c[i];                                      //Подставляем коэффиценты при степенях старшей степени меньшего многочлена
		}
	}
	else                                                                    //Если степень второго многочлена больше степени первого многочлена
	{
		result.m = second_p.m;                                              //Степень многочлена суммы будет равна максимальной степени второго многочлена
		result.c = new DM_Q[second_p.m];

		for (int i = 0; i < first_p.m; i++)
		{
			result.c[i] = ADD_QQ_Q(first_p.c[i], second_p.c[i]);           //Суммируем коэффиценты двух многочленов
			k = i;
		}
		for (int i = k; i < second_p.m; i++)                               //Подставляем коэффиценты при степенях старшей степени меньшего многочлена
		{
			result.c[i] = second_p.c[i];
		}
	}
	return result;                                                         //Отправляем результат результат
}