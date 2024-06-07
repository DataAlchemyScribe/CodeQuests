/* You are given an array prices where prices[i] is the price of a given stock on the ith day. You want to maximize your profit by choosing 
a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from
 this transaction. */

 #include<iostream>
 using namespace std;

int Best_Time_To_Buy_and_Sell_Stock(int p[],int s)
{
    int buy_p=0, sell_p=0, buy_day=0, sell_day=0 , max_profit=0, check_max=0;
    for(int i=0;i<s;i++)
    {
        buy_p = p[i];
        for(int j=(i+1);j<s;j++)
        {
            sell_p = p[j];
            if(buy_p < sell_p)
            {
                check_max = sell_p - buy_p;
                if(max_profit < check_max)
                {                    
                    max_profit = check_max;
                    buy_day = i+1;
                    sell_day = j+1;
                }  
            }
        }
    }
    cout<<endl<<"Buy on Day "<<buy_day<<endl<<"Sell on Day "<<sell_day<<endl;
    return max_profit;
}


 int main()
 {
    int sze = 6, best_time = 0, prices[sze] = {7,1,5,3,6,4};
    best_time = Best_Time_To_Buy_and_Sell_Stock(prices,sze);
    cout<<"Max profit : "<<best_time;
    return 0;
 }