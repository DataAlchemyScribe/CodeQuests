//Aim - calulate the total sales, average sales and best selling products 
//using the sales transactions of a vegetables store.

//sales_transactions = Product_Name - Price - Quantity Sold

// sales_transactions = [(Apple,2.0,10), (Banana,3.5,20), (Orange,4.0,10), (Banana,2.0,5), (Orange,3.5,15)]

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void Evaluate_Sales(int n)
{
    string best_selling_item = "";
    double total_sales = 0, avg_sales = 0, best_sell = INT_MIN;

    //string (key) - double (value) pairs 
    map<string,double> Sales;

    // collecting input data and generating map
    for(int i=0;i<n;i++)
    {
        string product;
        double price, product_sell;
        int quantity_sold;

        cout<<endl<<"Enter the product "<<(i+1)<<" details : ";

        cout<<endl<<"Name : ";
        fflush(stdin);
        cin>>product;

        cout<<"Price : ";
        fflush(stdin);
        cin>>price;

        cout<<"Quantity Sold : ";
        fflush(stdin);
        cin>>quantity_sold;

        cout<<endl;

        product_sell = (price * quantity_sold);

        Sales[product] += product_sell;

        total_sales += product_sell;
    }

    //traversing into map to calculate best selling product
    for(auto &pair:Sales)
    {
        if(pair.second > best_sell)
        {
            best_selling_item = pair.first;
            best_sell = pair.second;
        }
    }

    //calculating average sales
    avg_sales = (total_sales / n);

    cout<<endl<<"-> Total Sales : "<<fixed<<setprecision(2)<<total_sales;
    cout<<endl<<"-> Average Sales : "<<fixed<<setprecision(2)<<avg_sales;
    cout<<endl<<"-> Best selling product : "<<best_selling_item<<endl;

}

int main()
{
    int total_items=0;
    cout<<"Enter total number of items : ";
    fflush(stdin);
    cin>>total_items;
    Evaluate_Sales(total_items);
    return 0;
}