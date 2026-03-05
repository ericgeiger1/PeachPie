#include <iostream>
#include <random>
using namespace std;

/*
 * Improvement checklist:
 * 1) Remove unused variables/constants (peachesAvail, tbspsPerCup, tspsPerTbsp).
 * 2) Use int for count-based values (numPies, leftoverPeaches, ingredient totals).
 * 3) Use clearer names for RNG parts (e.g., rd, dist, peachesDelivered).
 * 4) Format output into sections (delivery, pie count, leftovers, ingredients).
 * 5) Convert tbsp/tsp totals to cups+tbsp where helpful for readability.
 * 6) Replace "using namespace std;" with explicit std:: qualifiers.
 * 7) Add input option (or fixed seed mode) for easier testing/demos.
 * 8) Expand README with purpose, formulas, constants, and sample output.
 */

/*
 * Flowchart + code alignment checklist:
 * 1) Label each flowchart box with exact variable names used in code.
 * 2) Show data types in flowchart inputs/outputs (int vs double).
 * 3) Keep one flowchart box = one code block in the same order.
 * 4) Add formulas to chart labels:
 *      pies = peaches / peachesPerPie
 *      leftovers = peaches % peachesPerPie
 *      ingredientTotal = pies * ingredientPerPie
 * 5) Add explicit I/O symbols for "Generate Random Peaches" and "Output Results".
 * 6) Add decision branch for edge case: peaches < peachesPerPie (0 pies).
 * 7) Include units in chart text (tbsp/tsp) to match printed output.
 * 8) Add step numbers to flowchart and mirror those numbers in code comments.
 * 9) Update chart whenever constants change (range, per-pie amounts).
 * 10) Keep naming consistent across both (e.g., peachesDelivered, numPies).
 */

int main () {

        
    const int   minDelivery = 5,
                maxDelivery = 100;            
            
    double  peachesAvail,
            numPies,
            leftoverPeaches,
            totalSugar,
            totalFlour,
            totalButter,
            totalCinnamon,
            totalVanilla,
            totalSalt,
            totalLemonJuice;

        const int peachesPerPie = 5,
                  sugarPerPie = 12, //tbsps
                  flourPerPie = 8, //tbsps
                  butterPerPie = 4, //tbsps
                  cinnamonPerPie = 1, //tsps
                  vanillaPerPie = 1, //tsps
                  saltPerPie = 1, //tsps
                  lemonJuicePerPie = 2; //tsps

    

        random_device myEngine;
        uniform_int_distribution<int> randomInt(minDelivery, maxDelivery);
        
        int randomPeaches = randomInt(myEngine);

        cout << "Peaches Delivered: " << randomPeaches << endl << endl;

        //Calculate the number of pies that can be made with the random number of peaches
        numPies = randomPeaches / peachesPerPie;
        leftoverPeaches = randomPeaches % peachesPerPie;

        cout << "Number of pies that can be made: " << numPies << endl;
        
        // Remainder when divided by 5
        cout << "Leftover peaches: " << leftoverPeaches << endl << endl;

        //Calculate the total amount of each ingredient needed to make the number of pies
        totalSugar = numPies * sugarPerPie;
        totalFlour = numPies * flourPerPie;
        totalButter = numPies * butterPerPie;
        totalCinnamon = numPies * cinnamonPerPie;
        totalVanilla = numPies * vanillaPerPie;
        totalSalt = numPies * saltPerPie;
        totalLemonJuice = numPies * lemonJuicePerPie;

        cout << "Total Sugar: " << totalSugar << " tbsps" << endl;
        cout << "Total Flour: " << totalFlour << " tbsps" << endl;
        cout << "Total Butter: " << totalButter << " tbsps" << endl;
        cout << "Total Cinnamon: " << totalCinnamon << " tsps" << endl;
        cout << "Total Vanilla: " << totalVanilla << " tsps" << endl;
        cout << "Total Salt: " << totalSalt << " tsps" << endl;
        cout << "Total Lemon Juice: " << totalLemonJuice << " tbsps" << endl;

  

    return 0;
}