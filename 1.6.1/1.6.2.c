#define _CRT_SECURE_NO_WARNINGS 1

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//struct stu//����ṹ������
//{
//	//��Ա�б�
//	char name[20];
//	short age;
//	int arr[20];
//	char sex[5];
//}; //s1, s2, s3;//3��ȫ�ֽṹ����
// typedef struct stu//����ṹ������
//{
//	//��Ա�б�
//	char name[20];
//	short age;
//	int arr[20];
//	char sex[5];
//}Stu;//�ṹ������ΪStu
//int main()
//{
//	//struct stu s;//�����ṹ����� �ֲ�����
//	struct stu s = { "����",20,2018575,"��" };
//	return 0;
//}
struct S
{
	int a;
	char c;
	char arr[20];
	double d;
};
typedef struct
{
	int f;
	struct S v;
	char* pc;
}A;
int main()
{
	char arr[] = "hello";
	A Y = { 2,{100,'w',"hello",5.20},arr };
	printf("%s\n", Y.v.arr);
	return 0;
}
//����n��k�η�
//double Pow(int n, int k)
//{
//	if (k < 0)
//		return (1.0 / (Pow(n, -k)));
//	else if (k == 0)
//		return 1;
//	else
//		return n * Pow(n, k - 1);//n*n^��k-1��
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf", ret);
//	return 0;
//}
//int DigitSum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	else
//		return num;
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int count=DigitSum(num);
//	printf("%d\n", count);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if(my_strlen(arr+1)>=2)
//	   reverse(arr + 1);
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	//sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}
////����������������ʹ�õ���������
//void exe(int* pa, int* pb)                   
//{
//	*pa = *pa ^ *pb;
//	*pb = *pa ^ *pb;
//	*pa = *pa ^ *pb;
//}
//int main()
//{
//
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("����ǰa=%d b=%d\n", a, b);
//	exe(&a, &b);
//	printf("������a=%d b=%d", a, b);
//	return 0;
//}
//��ȡ����������λ��ż��λ����ӡ
//void print(int m)
//{
//	int i = 0;
//	printf("����λ\n");
//	int count = 0;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);//����λ
//	}
//	printf("\n");
//	printf("ż��λ\n");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);//����λ
//	}
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}
//�������������ж���λ����ͬ
//int count_1(int a,int b)
//int count_1(int num)
//{
//
//	int count = 0;
//	while (num)
//	{
//		num = num & (num - 1);
//		count++;
//	}
//	return count;
//}
//int get_diff_bit(int m, int n)
//{
//	int tmp = m ^ n;
//	return count_1(tmp);
//
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count=get_diff_bit(m, n);
//	printf("count=%d", count);
//	return 0;
//}
//{
//	int i = 0;
//	int count = 0;
//	
//	for (i = 0; i < 32; i++)
//	{
//		int x = (a >> i) & 1;
//		int y = (b >> i) & 1;
//		if ( x!=y )
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a,&b);
//	int count = count_1(a,b);
//	printf("%d", count);
//	return 0;
//}
//ͳ�ƶ���������1����
//	//n=n&(n-1)
//int count_1(int num)
//{
//
//	int count=0;
//	while (num)
//	{
//		num = num & (num - 1);
//		count++;
//	}
//	return count;
//}

//int count_1(int num)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		if ((num >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//
//	return count;
//}
//    %2��/2
//int count_1( unsigned int num)
//{
//	int count=0;
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num = num / 2;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//    int count=count_1(num);
//	printf("%d", count);
//	//û�е���̨����system("pause");
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a; //c=6,a=6
//	b = ++c, c++, ++a, a++;  //c=7,c=8,a=7,//b=7 a=8 c=8  //����b=++c    c++ 
//	b += a++ + c;//b=b+ a++ +c //b=23 a=9 c=8
//	printf("a=%d b=%d c=%d ", a, b, c);//9 23 8
//	return 0;
//}
////��������Ԫ��
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int tmp = 0;//������ʱ������Ԫ�ؽ���
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
//����Ԫ�ص���
////���������鴫��
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
////	Init(arr,sz);//�����ʼ��Ϊ0
//	Reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}