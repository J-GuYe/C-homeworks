#include <stdio.h>
#include <stdlib.h>

#define N 10
int main()
{
    //4. 编程输入一行字符，运用指针找出其中的大写字母，空格，数字，及其他字符的个数。
    char character[N];
    char * ptr_char = character;
    int num_char = 0,num_blank = 0,num_num = 0,num_other = 0;
    int i;
    printf("请输入一串不多于10个字符的字符串：\n");
    for(i = 0;i < N;i++)
    {
        printf("请输入第%d个字符：",i + 1);
        scanf("%c",&character[i]);  // character + 1 ==> &character[i]
        fflush(stdin);
        printf("\n");
    }
    for(i = 0;i < N;i++)
    {
        if(*(ptr_char + i) >= 'A' && *(ptr_char + i) <= 'Z')
        {
            num_char++;
        }
        else
        {
            if(*(ptr_char + i) == ' ')
            {
                num_blank++;
            }
            else
            {
                if(*(ptr_char + i) >= '0' && *(ptr_char + i) <= '9')
                {
                    num_num++;
                }
                else
                {
                    num_other++;
                }

            }
        }

     }
    printf("num_char = %d\tnum_blank = %d\tnum_num = %d\tnum_other = %d\n",
           num_char,num_blank,num_num,num_other);















    /*3. 输入 10 个整数，将其中最小的数与第一个数对换，把最大的数与最后一数对换。
    int array[N];
    int i,n,m;
    int * ptr_array_start = array,* ptr_array_end = array + N - 1;
    int min,max,temp;
    printf("请输入10个整数：\n");
    for(i = 0;i < N;i++)
    {
        printf("请输入第%d个数：",i + 1);
        scanf("%d",array + i);
    }
    min = array[0];
    max = array[0];
    for(i = 0;i < N;i++)   //寻找最大值和最小值的下标
    {
        if(min > array[i])
        {
            min = array[i];
            n = i;
        }
        if(max < array[i])
        {
            max = array[i];
            m = i;
        }
    }
    //执行交换
    temp = *ptr_array_start;
    *ptr_array_start = *(array + n);
    *(array + n) = temp;

    temp = *ptr_array_end;
    *ptr_array_end = *(array + m);
    *(array + m) = temp;

    for(i = 0;i < N;i++)
    {
        printf("%d\t",*(array + i));
    }*/




    /*2. 定义 3 个整数及整数指针，仅用指针方法按由小到大的顺序输出。
    int temp;
    int num1,num2,num3;
    int * ptr_num1,* ptr_num2,* ptr_num3;
    ptr_num1 = &num1;
    ptr_num2 = &num2;
    ptr_num3 = &num3;
    printf("请输入三个整数：");
    scanf("%d,%d,%d",ptr_num1,ptr_num2,ptr_num3);
    printf("num1 = %d\tnum2 = %d\tnum3 = %d\n",num1,num2,num3);

    if(num1 > num2)
    {
        temp = *ptr_num1;
        *ptr_num1 = *ptr_num2;
        *ptr_num2 = temp;
    }
    if(num1 > num3)
    {
        temp = *ptr_num1;
        *ptr_num1 = *ptr_num3;
        *ptr_num3 = temp;
    }
    if(num2 > num3)
    {
        temp = *ptr_num2;
        *ptr_num2 = *ptr_num3;
        *ptr_num3 = temp;
    }
    printf("num1 = %d\tnum2 = %d\tnum3 = %d\n",*ptr_num1,*ptr_num2,*ptr_num3);*/



    /*1. 使用指针交换两个数的值。
    int num1 = 1,num2 = 2;
    int temp;
    int * ptr_num1,* ptr_num2;
    ptr_num1 = &num1;
    ptr_num2 = &num2;

    printf("num1 = %d\tnum2 = %d\n",num1,num2);

    //交换
    temp = *ptr_num1;
    *ptr_num1 = *ptr_num2;
    *ptr_num2 = temp;

    printf("num1 = %d\tnum2 = %d\n",*ptr_num1,*ptr_num2);*/


    return 0;
}
