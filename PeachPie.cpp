#include <iostream>
#include <random>
using namespace std;

int main () {

        
    const int   minDelivery = 5,
                maxDelivery = 100;            
            
    int peachesAvail,
            numPies,
            leftoverPeaches,
            totalSugar,
            totalFlour,
            totalButter,
            totalCinnamon,
            totalVanilla;

        const int peachesPerPie = 5,
                  sugarPerPie = 24,
                  flourPerPie = 16,
                  butterPerPie = 8,
                  cinnamonPerPie = 1,
                  vanillaPerPie = 1,
                  saltPerPie = 1,
                  lemonJuicePerPie = 2;

        const int tbspsPerCup = 16;
        const int tspsPerTbsp = 3;

        random_device myEngine;
        uniform_int_distribution<int> randomInt(minDelivery, maxDelivery);
        
        int randomPeaches = randomInt(myEngine);

        cout << randomPeaches << endl;

    return 0;
}