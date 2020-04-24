DM_P MUL_P_Q(DM_P plnm, DM_Q alpha)//умножение многочлена на рациональное число
{
	DM_P tempPlnm = new DM_P();
	for (int i; i < plnm.m; i++) {
		tempPlnm.c[i] = MUL_QQ_Q(plnm.c[i], alpha);//домножаем коэффициенты при степенях на число
	}
	return tempPlnm;//вывод результата
}