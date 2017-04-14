#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*某商城有如下优惠政策：
    所有的本商城的会员购物享受 9 折优惠。
    对于非会员的顾客购物满 100 元，也可以享受 9 折优惠。
    本身是会员，并且购物满 100 元可以享受 8 折优惠。
    假如某顾客从该商城购买了三件商品，请计算该顾客可得到的折扣额（如果有），以及打折后需支付的金额。*/

    char VIP;
    double cost1,cost2,cost3,discount,total,pay;  //定义变量，三种物品价格，折扣，总金额，实际付款

    printf("用户是否为VIP?y/n\n");
    scanf("%c",&VIP);
    fflush(stdin);
    printf("请输入3件物品的价格：\n");
    scanf("%lf %lf %lf",&cost1,&cost2,&cost3);

    total = cost1 + cost2 +cost3;
    if(VIP == 'y')                               //判断是否是会员
    {
        if(total >= 100)
        {
            discount = total * 0.2;
            pay = total * 0.8;
        }
        else
        {
            discount = total * 0.1;
            pay = total * 0.9;
        }
    }
    else
    {
        if(total >= 100)
        {
            discount = total * 0.1;
            pay = total * 0.9;
        }
        else
        {
            discount = 0;
            pay = total;
        }
    }
    printf("discount=%.2lf\tpay=%.2lf\n",discount,pay);





    /*输入 3 个整数 x、y 以及 z，请把这三个数从小到大输出。
    int x,y,z,t;
    printf("请输入三个数字:\n");
    scanf("%d %d %d",&x,&y,&z);
    if(x > y)
    {
        t = x;
        x = y;
        y = t;
    }
    if(x > z)
    {
        t = x;
        x = z;
        z = t;
    }
    if(y > z)
    {
        t = y;
        y = z;
        z = t;
    }
    printf("从小到大的排列是：\n");
    printf("%d\t%d\t%d\n",x,y,z);*/

    return 0;
}
