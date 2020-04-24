DM_P MUL_Pxk_P(DM_P obj, unsigned short k)//���������� ���������� �� x^k
{
	DM_P* result;		//�������������� ���������
	result = new DM_P;

	result->m = obj.m + k;				//������� ��������������� ���������� ����������
	result->c = new DM_Q[result->m + 2];

	for (short i = 0; i < k; ++i)		//����� ����� ��������� ������
		result->c[i] = { 0, 1 };

	for (short i = 0; i < obj.m + 1; ++i)	//������ ������ �����
		result->c[i + k] = obj.c[i];

	return *result;//���������� ���������
}