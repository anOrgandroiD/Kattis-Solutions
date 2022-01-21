#include <iostream>
#include <climits>

using namespace std;

int main() {
    // Declaring this constants for use with declaring array boundaries below
    const int MAX_INGREDIENTS = 100000;

    // Important variables, the first stores the number of ingredients, the second the number of
    // recipes, and the third is the max profit that can be made. Profit must be set to zero for
    // comparason reasons down below
    int numIngredients, recipes, profit = 0;

    // An array to store the amount of ingredients currently on hand
    int ingredients[MAX_INGREDIENTS];

    // One of the things I actually quite like about c++ is the cin command. No need to import a
    // scanner, drop the correct syntax and you're rockin
    cin >> numIngredients;
    cin >> recipes;

    // For each ingredient specified, the user must enter in the amount on hand that they have
    // for each. All of this is stored in the ingredient array declared above
    for(int i = 0; i < numIngredients; i++) {
        cin >> ingredients[i];
    }

    // This for loop is pretty meaty, so let's walk through it one step at a time. First we
    // iterate for each recipe on hand
    for(int i = 0; i < recipes; i++) {

        // Set an empty price and a count set to the maximum integer value (again, for
        // comparison reasons)
        int price, count = INT_MAX;

        // A for loop within a for loop, surely this won't unnecessarily jack up the execution
        // time! Must do this for every ingredient we have
        for(int j = 0; j < numIngredients; j++) {

            // Now we need to get the amount of a select ingredient necessary for the recipe to
            // turn out
            int ingredient;
            cin >> ingredient;

            // Considering this number will be the divisor later on, we need to check if it is zero
            // before progressing onwards. If this is the case, we can immediately move onto the
            // next ingredient, since the recipe doesn't call for this ingredient!
            if(ingredient == 0) continue;

            // Get strapped in for the most important comparison of this entire program! This will
            // determine whether or not the number of ingredients on hand divided by the number of
            // ingredients needed for the recipe is less than the current count value. If it is, the
            // count will now be equal to the result of that equation. Because integer division will
            // always truncate, it is not needed to round down
            if(ingredients[j] / ingredient < count) {
                count = ingredients[j] / ingredient;
            }
        }

        // The final parameter of the recipe is the price, so we will take that in now
        cin >> price;

        // Since count represents the maximum amount of a certain recipe we can make, we multiply that
        // by the price and see if it turns out greater than the current profit. If it does, the profit
        // variable is set to the result of that equation
        if(count * price > profit) {
            profit = count * price;
        }
    }

    // Finally, print out the final profit amount to the user
    cout << profit;
}
