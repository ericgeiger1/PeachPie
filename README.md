# 🍑  Peach Pie Case Study Project 🍑

## Pseudocode

### START

#### SET constants:
  minDelivery = 5
  maxDelivery = 100
  peachesPerPie = 5

  sugarPerPie = 12 tbsp
  flourPerPie = 8 tbsp
  butterPerPie = 4 tbsp

  cinnamonPerPie = 1 tsp
  vanillaPerPie = 1 tsp
  saltPerPie = 1 tsp
  lemonJuicePerPie = 2 tsp

  tbspPerCup = 16
  tspPerTbsp = 3

### GENERATING randomPeaches between minDelivery and maxDelivery

#### CALCULATE:
  numPies = randomPeaches / peachesPerPie
  leftoverPeaches = randomPeaches % peachesPerPie

#### CALCULATE ingredient totals:
  totalSugar = numPies * sugarPerPie        // tbsp
  totalFlour = numPies * flourPerPie        // tbsp
  totalButter = numPies * butterPerPie      // tbsp

  totalCinnamon = numPies * cinnamonPerPie  // tsp
  totalVanilla = numPies * vanillaPerPie    // tsp
  totalSalt = numPies * saltPerPie          // tsp
  totalLemonJuice = numPies * lemonJuicePerPie // tsp

#### CONVERT tbsp totals to cups + tbsp:
  sugarCups = totalSugar / tbspPerCup
  sugarTbspLeft = totalSugar % tbspPerCup
  flourCups = totalFlour / tbspPerCup
  flourTbspLeft = totalFlour % tbspPerCup
  butterCups = totalButter / tbspPerCup
  butterTbspLeft = totalButter % tbspPerCup

#### CONVERT tsp totals to tbsp + tsp:
  cinnamonTbsp = totalCinnamon / tspPerTbsp
  cinnamonTspLeft = totalCinnamon % tspPerTbsp
  vanillaTbsp = totalVanilla / tspPerTbsp
  vanillaTspLeft = totalVanilla % tspPerTbsp
  saltTbsp = totalSalt / tspPerTbsp
  saltTspLeft = totalSalt % tspPerTbsp
  lemonTbsp = totalLemonJuice / tspPerTbsp
  lemonTspLeft = totalLemonJuice % tspPerTbsp

#### PRINT:
  Peaches delivered
  Number of pies
  Leftover peaches
  Sugar in cups + tbsp
  Flour in cups + tbsp
  Butter in cups + tbsp
  Cinnamon in tbsp + tsp
  Vanilla in tbsp + tsp
  Salt in tbsp + tsp
  Lemon juice in tbsp + tsp

## END
