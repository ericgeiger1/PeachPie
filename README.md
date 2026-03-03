# PeachPie
Peach Pie Project for Class

🍑  Peach Pie Case Study Project 🍑

1.	Setting constants
| Constants (Fixed Values) | Variables (User/Computed) |
|---|---|
| `peachesPerPie = 5` | `int peachesAvail` |
| `sugarPerPie = 24 tbsp` | `int numPies` |
| `flourPerPie = 16 tbsp` | `int leftoverPeaches` |
| `butterPerPie = 8 tbsp` | `int totalSugar` |
| `cinnamonPerPie = 1 tsp` | `int totalFlour` |
| `saltPerPie = 1 tsp` | `int totalButter` |
| `vanillaPerPie = 1 tsp` | `int totalCinnamon` |
| `lemonJuicePerPie = 2 tbsp` | `int totalVanilla` |
| `minDelivery = 5` | `int totalSalt` |
| `maxDelivery = 100` | `int totalLemonJuice` |

2.	Generating random peaches
Will need a random number engine: random_device randomPeach.
Will need a distribution object : uniform_int_distribution.
Assign random number to the peachOrder variable.
Display random number (peachOrder) to the console.

3.	Calculating:
o	Number of pies (division)
o	Leftover peaches (modulus)
4.	Printing:
o	Peaches delivered
o	Number of pies
o	Leftover peaches
o	Remainder when dividing by 5
o	Ingredient totals
