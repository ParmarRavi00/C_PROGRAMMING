// 18)   Calculate profit and loss on a transaction.

#include <stdio.h>

int main()
{
	printf("\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2 Calculate profit and loss on a transaction \xb2\xb2\xb2\xb2\xb2\xb2");
    
	int buy_price, sell_price, profit_loss;
    
    printf("\n\n\t\t Enter Product Buy Price :- ");
    scanf("%d", &buy_price);
    
    printf("\n\t\t Enter Product Sell Price :- ");
    scanf("%d", &sell_price);
    
    if (sell_price > buy_price)
	{
        profit_loss = sell_price - buy_price;
        printf("\n\t\t Profit  : Rs. +%d", profit_loss);
    }
	else if(sell_price < buy_price)
	{
        profit_loss = buy_price - sell_price;
        printf("\n\t\t Loss : Rs. -%d", profit_loss);
    }
	else
	{
        printf("\n\t\t No-Profit & No-Loss : Rs. 0");
    }

    return 0;
}