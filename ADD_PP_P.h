DM_P ADD_P_PP(DM_P first_p, DM_P second_p)//�������� �����������
{
	DM_P result;
	result.c = NULL;
	int k = 0;

	if (first_p.m >= second_p.m)                                             //���� ������� ������� ���������� ������ �������
	{
		result.m = first_p.m;                                                //������������ ������� ���������� ����� ����� ����� ������������ ������� ������� ����������
		result.c = new DM_Q[first_p.m];                                      //������ ����� ��� ��������������� ����������
		for (int i = 0; i < second_p.m; i++)
		{
			result.c[i] = ADD_QQ_Q(first_p.c[i], second_p.c[i]);            //��������� ����������� �����������
			k = i;
		}
		for (int i = k; i < first_p.m; i++)
		{
			result.c[i] = first_p.c[i];                                      //����������� ����������� ��� �������� ������� ������� �������� ����������
		}
	}
	else                                                                    //���� ������� ������� ���������� ������ ������� ������� ����������
	{
		result.m = second_p.m;                                              //������� ���������� ����� ����� ����� ������������ ������� ������� ����������
		result.c = new DM_Q[second_p.m];

		for (int i = 0; i < first_p.m; i++)
		{
			result.c[i] = ADD_QQ_Q(first_p.c[i], second_p.c[i]);           //��������� ����������� ���� �����������
			k = i;
		}
		for (int i = k; i < second_p.m; i++)                               //����������� ����������� ��� �������� ������� ������� �������� ����������
		{
			result.c[i] = second_p.c[i];
		}
	}
	return result;                                                         //���������� ��������� ���������
}