// Name: Eric Geiger
// Course: COSC - 1436 - 21004
// Date: 3/9/2026
// Purpose: Calculate ingredients needed for peach pies based on random delivery of peaches.


#include <iostream>
#include <random>
using namespace std;

int main() {
    
// 1. Setting constants.
    
    const int minDelivery = 5, maxDelivery = 100;

    const int peachesPerPie = 5;
    const int sugarPerPie = 12;      // tbsp
    const int flourPerPie = 8;       // tbsp
    const int butterPerPie = 4;      // tbsp
    const int cinnamonPerPie = 1;    // tsp
    const int vanillaPerPie = 1;     // tsp
    const int saltPerPie = 1;        // tsp
    const int lemonJuicePerPie = 2;  // tsp

    const int tbspPerCup = 16;
    const int tspPerTbsp = 3;

// 2. Generate random number of peaches delivered

   random_device rd;
   uniform_int_distribution<int> dist(minDelivery, maxDelivery);
    int randomPeaches = dist(rd);
//    int randomPeaches = 200; // for testing purposes.

    // a) Pie counts
    int numPies = randomPeaches / peachesPerPie;
    int leftoverPeaches = randomPeaches % peachesPerPie;

    // b) Ingredient totals in original units
    int totalSugar = numPies * sugarPerPie;           // tbsp
    int totalFlour = numPies * flourPerPie;           // tbsp
    int totalButter = numPies * butterPerPie;         // tbsp
    int totalCinnamon = numPies * cinnamonPerPie;     // tsp
    int totalVanilla = numPies * vanillaPerPie;       // tsp
    int totalSalt = numPies * saltPerPie;             // tsp
    int totalLemonJuice = numPies * lemonJuicePerPie; // tsp

    // c) Convert tbsp -> cups + tbsp
    int sugarCups = totalSugar / tbspPerCup;
    int sugarTbspLeft = totalSugar % tbspPerCup;
    int flourCups = totalFlour / tbspPerCup;
    int flourTbspLeft = totalFlour % tbspPerCup;
    int butterCups = totalButter / tbspPerCup;
    int butterTbspLeft = totalButter % tbspPerCup;

    // d) Convert tsp -> tbsp + tsp
    int cinnamonTbsp = totalCinnamon / tspPerTbsp;
    int cinnamonTspLeft = totalCinnamon % tspPerTbsp;
    int vanillaTbsp = totalVanilla / tspPerTbsp;
    int vanillaTspLeft = totalVanilla % tspPerTbsp;
    int saltTbsp = totalSalt / tspPerTbsp;
    int saltTspLeft = totalSalt % tspPerTbsp;
    int lemonTbsp = totalLemonJuice / tspPerTbsp;
    int lemonTspLeft = totalLemonJuice % tspPerTbsp;

// 4. Printing
    cout << "Peaches Delivered: " << randomPeaches << endl;
    cout << "Number of pies: " << numPies << endl;
    // Remainder when dividing by 5
    cout << "Leftover peaches: " << leftoverPeaches << endl;
    cout << "Remainder when divided by 5: " << randomPeaches % 5 << endl << endl;

    cout << "Sugar Needed: " << sugarCups << " cups " << sugarTbspLeft << " tbsp" << endl;
    cout << "Flour Needed: " << flourCups << " cups " << flourTbspLeft << " tbsp" << endl;
    cout << "Butter Needed: " << butterCups << " cups " << butterTbspLeft << " tbsp" << endl;

    cout << "Cinnamon Needed: " << cinnamonTbsp << " tbsp " << cinnamonTspLeft << " tsp" << endl;
    cout << "Vanilla Needed: " << vanillaTbsp << " tbsp " << vanillaTspLeft << " tsp" << endl;
    cout << "Salt Needed: " << saltTbsp << " tbsp " << saltTspLeft << " tsp" << endl;
    cout << "Lemon Juice Needed: " << lemonTbsp << " tbsp " << lemonTspLeft << " tsp" << endl;
    cout << endl << endl;

    return 0;
}