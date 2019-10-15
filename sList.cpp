#include <iostream>
#include <vector>
//#include "Ingredients.h"
#include "sList.h"
using namespace std;


/*
The user can search for ingredients that are not in their virtual cabinet and add it to a virtual shopping lis\
t. This shopping list will also give an estimated total for all the ingredients in the shopping list. With a c\
lick of the button by the user, all of the ingredients in the shopping list will be added to their virtual cab\
inet. With these added ingredients, the user can create more cocktails.
*/


sList::sList(){ }

sList::~sList(){}


// add ingredient to shopping list
void sList::addIngredient(Ingredient name){
    list.push_back(name);  // add ingredient into shopping list
}

/*
// get an indredient from shopping list
void sList::getItem(Ingredient){
}
*/

// display the price of all items
void sList::removeIngredient(Ingredient name){

    for(int i = 0; i < list.size(); i++)
    {
        // find specified ingredient and erase it from vector
        if( list[i].name )
       list.erase(list.begin()+i); // earise i+1 element
    }
}


// display all items in list
void sList::display(){

    double totalCost = 0; // add up the costs of all ingredients
    for(int i = 0; i < list.size(); i++ ) // for loop goes through vectore and print the info
    {
        cout << list[i].name << "  " << list[i].cost; // display ingredient name + cost
        totalCost += list[i].cost; // add cost of each ingredient to totalCost
    }
    
    cout << "The total cost of the igredients: $" << totalCost;
}
