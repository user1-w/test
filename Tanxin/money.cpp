/* 假设1元、2元、5元、10元、20元、50元、100元的纸币分别有

c0, c1, c2, c3, c4, c5, c6张。现在要用这些钱来支付K元，至少要用多少张纸币？ */
#include<iostream>
using namespace std;

int tanxin(int money)
{
    int signal_money[7] = {1,2,5,10,20,50,100};//钱币的数值
    int num_money[7] = {2,5,1,3,4,0,4};//每种钱币有多少
    int count = 0;//计算总数
    if(money>=0)
    {
        for(int i=6;i>=0;i--)
        {
           int num = min(num_money[i],money/signal_money[i]);
           money -= num * signal_money[i];
           count += num;
        }
        return count;
    }
    else
    {
        return 0;
    }
}

int main()
{
    cout<<tanxin(101)<<endl;
    return 0;
}