#include <iostream>
using namespace std;

int main() {
    double costPricePerDozen, sellingPricePerDozen;
    double costPricePerBanana, sellingPricePerBanana;
    int bananasSold = 25;
    double totalCost, totalRevenue, profitOrLoss;

    cout << "Enter cost price per dozen bananas: ";
    cin >> costPricePerDozen;

    cout << "Enter selling price per dozen bananas: ";
    cin >> sellingPricePerDozen;

    costPricePerBanana = costPricePerDozen / 12.0;
    sellingPricePerBanana = sellingPricePerDozen / 12.0;

    totalCost = costPricePerBanana * bananasSold;
    totalRevenue = sellingPricePerBanana * bananasSold;

    profitOrLoss = totalRevenue - totalCost;

    if (profitOrLoss > 0) {
        cout << "Profit earned: " << profitOrLoss << endl;
    } 
    else if (profitOrLoss < 0) {
        cout << "Loss incurred: " << -profitOrLoss << endl;
    } 
    else {
        cout << "No profit, no loss." << endl;
    }

    return 0;
}