/**
 * cookies.cpp
 * Project UID 1a8f9f9f446a857007e46689a8f3ab54
 *
 * <#Justin Brown#>
 * <#brjustin#>
 *
 * EECS 183: Project 1
 * Fall 2019
 *
 * <#description#>
 */
 
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/**
 * Returns the singular or plural form of a word, based on number
 *
 * Requires: singular is the singular form of the word.
 *           plural is the plural form of the word.
 *           number determines how many things there are; must be >= 1.
 * Modifies: Nothing.
 * Effects:  Returns return the singular form of the word if number == 1.
 *           Otherwise, returns the plural form.
 *
 * Examples:
 *           // prints "bag"
 *           cout << pluralize("bag", "bags", 1);
 *
 *           // prints "pounds"
 *           string temp = pluralize("pound", "pounds", 3);
 *           cout << temp;
 */
string pluralize(string singular, string plural, int number);


//constants
const int NUMBER_OF_PEOPLE_PER_BATCH = 14;

int main() {
    double numPeople;
    double numBatches;
    double totalCost;



    cout << "How many people do you need to serve? ";
    cin >> numPeople;
    cout << endl;
    numBatches = ceil(numPeople / NUMBER_OF_PEOPLE_PER_BATCH);

    cout << "You need to make: " << numBatches
        << pluralize(" batch", " batches", numBatches) << " of cookies" << endl;
    cout << endl;
   std::cout << R"_(Shopping List for "Best Ever" M&M's Brownie Cookies)_" << endl;
   cout << "---------------------------------------------------" << endl;

   //first conversions


   double bagsOfFlour;
   double cupsOfFlour;
   //20 cups of flour in one bag of flour
   cupsOfFlour = numBatches * 3.5;
   bagsOfFlour = ceil(cupsOfFlour / 20);

   double bagsOfSugar;
   double cupsOfSugar;
   //10 cups of sugar in one bag
   cupsOfSugar = numBatches * 2;
   bagsOfSugar = ceil(cupsOfSugar / 10);

   double bagsOfBrownSugar;
   double cupsOfBrownSugar;
   //4.5 cups of brown sugar in one bag
   cupsOfBrownSugar = numBatches * 1.5;
   bagsOfBrownSugar = ceil(cupsOfBrownSugar / 4.5);

   //2 cups per lb of butter
   double poundsOfButter;
   double cupsOfButter;
   cupsOfButter = numBatches * 2;
   poundsOfButter = ceil(cupsOfButter / 2);

   //1.9 cups per container
   double cupsOfCocoa;
   double containersOfCocoa;
   cupsOfCocoa = numBatches * 2.5;
   containersOfCocoa = ceil(cupsOfCocoa / 1.9);

   //12 eggs in a dozen
   double eggs;
   double dozenEggs;
   eggs = numBatches * 4;
   dozenEggs = ceil(eggs / 12);
    
   //12 tsp in 2 oz bottle of vanilla
   double teaspoonsOfVanilla;
   double bottlesOfVanilla;
   teaspoonsOfVanilla = numBatches * 3.5;
   bottlesOfVanilla = ceil(teaspoonsOfVanilla / 12);

   //2 cups of chocolate chips in 1 bag
   double cupsOfChocalteChips;
   double bagsOfChocolateChips;
   cupsOfChocalteChips = numBatches * 1.5;
   bagsOfChocolateChips = ceil(cupsOfChocalteChips / 2);

   //2 cups in one bag of m&m
   double cupsOfMandM;
   double bagsOfMandM;
   cupsOfMandM = numBatches * 2;
   bagsOfMandM = ceil(cupsOfMandM / 2);

   cout << "   " << bagsOfFlour << pluralize(" bag", " bags", bagsOfFlour) << " of flour" << endl;
   cout << "   " << bagsOfSugar << pluralize(" bag", " bags", bagsOfSugar) << " of granulated sugar" << endl;
   cout << "   " << bagsOfBrownSugar << pluralize(" bag", " bags", bagsOfBrownSugar) << " of brown sugar" << endl;
   cout << "   " << poundsOfButter << pluralize(" pound", " pounds", poundsOfButter) << " of butter" << endl;
   cout << "   " << containersOfCocoa << pluralize(" container", " containers", containersOfCocoa) << " of cocoa powder" << endl;
   cout << "   " << dozenEggs << " dozen eggs" << endl;
   cout << "   " << bottlesOfVanilla << pluralize(" bottle", " bottles", bottlesOfVanilla) << " of vanilla" << endl;
   cout << "   " << bagsOfChocolateChips << pluralize(" bag", " bags", bagsOfChocolateChips) << " of chocolate chips" << endl;
   cout << "   " << bagsOfMandM << pluralize(" bag", " bags", bagsOfMandM);
   std::cout << R"_( of mini baking M&M's)_" << endl;
   cout << endl;

   //calculate cost

   double flourCost = bagsOfFlour * 2.69;
   double sugarCost = bagsOfSugar * 3.99;
   double brownSugarCost = bagsOfBrownSugar * 1.99;
   double butterCost = poundsOfButter * 2.79;
   double cocoaPowderCost = containersOfCocoa * 3.29;
   double eggCost = dozenEggs * 1.99;
   double vanillaCost = bottlesOfVanilla * 6.79;
   double chocolateChipsCost = bagsOfChocolateChips * 2.39;
   double MandMCost = bagsOfMandM * 2.79;

   totalCost = flourCost + sugarCost + brownSugarCost + butterCost + cocoaPowderCost + eggCost + vanillaCost + chocolateChipsCost + MandMCost;

   cout << "Total expected cost of ingredients: $" << totalCost << endl;
   cout << endl;
   cout << "Have a great party!";
    
    return 0;
}

string pluralize(string singular, string plural, int number) {
    if (number == 1) {
        return singular;
    }
    return plural;
}


