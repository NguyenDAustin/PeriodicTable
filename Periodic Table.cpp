#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

struct info
{
    string symbol;
    int num;
    string name;
    double weight;
    string charge;
};    

struct ions
{
    string symbol;
    string name;
    double weight;
    string charge;
};

struct series
{
    string name;
    int num;
};


unordered_map<string, info> elements;
unordered_map<string, ions> polyatomic;
unordered_map<string, series> activity;

void elInfo()
{
    elements["h"] = {"H", 1, "Hydrogen", 1.00794, "+-1"};
    elements["he"] = {"He", 2, "Helium", 4.00260, "2"};
    elements["li"] = {"Li", 3, "Lithium", 6.941, "1"};
    elements["be"] = {"Be", 4, "Beryllium", 9.012182, "2"};
    elements["b"] = {"B", 5, "Boron", 10.811, "+-3"};
    elements["c"] = {"C", 6, "Carbon", 12.0107, "+-4"};
    elements["n"] = {"N", 7, "Nitrogen", 14.0067, "-3"};
    elements["o"] = {"O", 8, "Oxygen", 15.9994, "-2"};
    elements["f"] = {"F", 9, "Fluorine", 18.99840, "-1"};
    elements["ne"] = {"Ne", 10, "Neon", 20.1797, "n/a"};
    elements["na"] = {"Na", 11, "Sodium", 22.989770, "1"};
    elements["mg"] = {"Mg", 12, "Magnesium", 24.3050, "2"};
    elements["al"] = {"Al", 13, "Aluminum", 26.981538, "3"};
    elements["si"] = {"Si", 14, "Silicon", 28.0855, "-4"};
    elements["p"] = {"P", 15, "Phosphorus", 30.97375, "+5, -3, +3"};
    elements["s"]= {"S", 16, "Sulfur", 32.065, "-2, +4, +6"};
    elements["cl"] = {"Cl", 17, "Chlorine", 35.453, "+-1, +3, +5, +7"};
    elements["ar"] = {"Ar", 18, "Argon", 39.948, "n/a"};
    elements["k"] = {"K", 19, "Potassium", 39.0983, "1"};
    elements["ca"] = {"Ca", 20, "Calcium", 40.078, "2"};
    elements["sc"] = {"Sc", 21, "Scandium", 44.95591, "3"};
    elements["ti"] = {"Ti", 22, "Titanium", 47.867, "+2, +3, +4"};
    elements["v"] = {"V", 23, "Vanadium", 50.9415, "+2, +3, +4, +5"};
    elements["cr"] = {"Cr", 24, "Chromium", 51.996, "+2, +3, +6"};
    elements["mn"] = {"Mn", 25, "Manganese", 54.9380, "+2, +3, +4, +5, +6 +7"};
    elements["fe"] = {"Fe", 26, "Iron", 55.845, "+2, +3"};
    elements["co"] = {"Co", 27, "Cobalt", 58.9332, "+2, +4"};
    elements["ni"] = {"Ni", 28, "Nickel", 58.6934, "+2, +3"};
    elements["cu"] = {"Cu", 29, "Copper", 63.546, "+1, +2"};
    elements["zn"] = {"Zn", 30, "Zinc", 65.38, "+2"};
    elements["ga"] = {"Ga", 31, "Gallium", 69.723, "+3"};
    elements["ge"] = {"Ge", 32, "Germanium", 72.630, "+-4"};
    elements["as"] = {"As", 33, "Arsenic", 74.922, "+-3, +5"};
    elements["se"] = {"Se", 34, "Selenium", 78.971, "+6"};
    elements["br"] = {"Br", 35, "Bromine", 79.904, "+-1, +3, +5, +7"};
    elements["kr"] = {"Kr", 36, "Krypton", 83.798, "n/a"};
    elements["rb"] = {"Rb", 37, "Rubidium", 85.468, "+1"};
    elements["sr"] = {"Sr", 38, "Strontium", 87.62, "+2"};
    elements["y"] = {"Y", 39, "Yttrium", 88.906, "+3"};
    elements["zr"] = {"Zr", 40, "Zirconium", 91.224, "+4"};
    elements["nb"] = {"Nb", 41, "Niobium", 92.906, "+5"};
    elements["mo"] = {"Mo", 42, "Molybdenum", 95.95, "+6"};
    elements["tc"] = {"Tc", 43, "Technetium", 98, "+7"};
    elements["ru"] = {"Ru", 44, "Ruthenium", 101.07, "+3, +4, +7, +8"};
    elements["rh"] = {"Rh", 45, "Rhodium", 102.90550, "+1, +2, +3, +4"};
    elements["pd"] = {"Pd", 46, "Palladium", 106.42, "+2, +4"};
    elements["ag"] = {"Ag", 47, "Silver", 107.8682, "+1"};
    elements["cd"] = {"Cd", 48, "Cadmium", 112.41, "+2"};
    elements["in"] = {"In", 49, "Indium", 114.82, "+3"};
    elements["sn"] = {"Sn", 50, "Tin", 118.710, "+2, +4"};
    elements["sb"] = {"Sb", 51, "Antimony", 121.760, "+-3, +5"};
    elements["te"] = {"Te", 52, "Tellurium", 127.60, "-2, +4, +6"};
    elements["i"] = {"I", 53, "Iodine", 126.90447, "+-1, +3, +5, +7"};
    elements["xe"] = {"Xe", 54, "Xenon", 131.29, "n/a"};
    elements["cs"] = {"Cs", 55, "Cesium", 132.90545, "+1"};
    elements["ba"] = {"Ba", 56, "Barium", 137.327, "+2"};
    elements["la"] = {"La", 57, "Lanthan", 138.9055, "+3"};
    elements["ce"] = {"Ce", 58, "Cerium", 140.116, "+3, +4"};
    elements["pr"] = {"Pr", 59, "Praseodymium", 140.90765, "+3"};
    elements["nd"] = {"Nd", 60, "Neodymium", 144.24, "+3"};
    elements["pm"] = {"Pm", 61, "Promethium", 145, "+3"};
    elements["sm"] = {"Sm", 62, "Samarium", 150.36, "+3"};
    elements["eu"] = {"Eu", 63, "Europium", 151.964, "+3"};
    elements["gd"] = {"Gd", 64, "Gadolinium", 157.25, "+3"};
    elements["tb"] = {"Tb", 65, "Terbium", 158.92534, "+3"};
    elements["dy"] = {"Dy", 66, "Dysprosium", 162.50, "+3"};
    elements["ho"] = {"Ho", 67, "Holmium", 164.9303, "+3"};
    elements["er"] = {"Er", 68, "Erbium", 167.26, "+3"};
    elements["tm"] = {"Tm", 69, "Thulium", 168.9342, "+3"};
    elements["yb"] = {"Yb", 70, "Ytterbium", 173.04, "+3"};
    elements["lu"] = {"Lu", 71, "Lutetium", 174.967, "+3"};
    elements["hf"] = {"Hf", 72, "Hafnium", 178.49, "+4"};
    elements["ta"] = {"Ta", 73, "Tantal", 173.04, "+3"};
    elements["w"] = {"W", 74, "Tungsten", 183.84, "2, +3, +4, +5, +6"};
    elements["re"] = {"Re", 75, "Rhenium", 186.207, "+4, +5, +6, +7"};
    elements["os"] = {"Os", 76, "Osmium",190.23, "+4, +3"};
    elements["ir"] = {"Ir", 77, "Iridium", 192.217, "+3, +4"};
    elements["pt"] = {"Pt", 78, "Platinum", 195.08, "+2, +4"};
    elements["au"] = {"Au", 79, "Gold", 196.96655, "+1, +3"};
    elements["hg"] = {"Hg", 80, "Mercury", 200.59, "+1, +2"};
    elements["tl"] = {"Tl", 81, "Thallium", 204.3833, "+1, +3"},
    elements["pb"] = {"Pb", 82, "Lead", 207.2, "+2, +4"};
    elements["bi"] = {"Bi", 83, "Bismuth",  208.9804, "+3, + 5"},
    elements["po"] = {"Po", 84, "Polonium", 209.0, "-2, +2, +4, +6"};
    elements["at"] = {"At", 85, "Astatine", 210.0, "+-1, +3, +5, +7"};
    elements["rn"] = {"Rn", 86, "Radon", 222.0, "n/a"};
    elements["fr"] = {"Fr", 87, "Francium", 223.0, "+1"};
    elements["ra"] = {"Ra", 88, "Radium", 226.0, "+2"};
    elements["ac"] = {"Ac", 89, "Actinium", 227.0, "+3"};
    elements["th"] = {"Th", 90, "Thorium", 232.0281, "+4"};
    elements["pa"] = {"Pa", 91, "Protactinium", 231.0, "+5"};
    elements["u"] = {"U", 92, "Uranium", 238.0289, "+6, +5, +4, +3, +2"};
    elements["np"] = {"Np", 93, "Neptunium", 237.0492, "+7, +6, +5, +4, +3"};
    elements["pu"] = {"Pu", 94, "Plutonium", 244, "+7, +6, +5, +4, +3, +2"};
    elements["am"] = {"Am", 95, "Americium", 243, "+6, +5, +4, +3, +2"};
    elements["cm"] = {"Cm", 96, "Curium", 247, "+4, +3, +2"};
    elements["bk"] = {"Bk", 97, "Berkelium", 247, "+4, +3, +2"};
    elements["cf"] = {"Cf", 98, "Californium", 251, "+5, +4, +3, +2"};
    elements["es"] = {"Es", 99, "Einsteinium", 252, "+4, +3, +2"};
    elements["fm"] = {"Fm", 100, "Fermium", 257, "+4, +3, +2"};
    elements["md"] = {"Md", 101, "Mendelevium", 258, "+3, +2, 1"};
    elements["mo"] = {"No", 102, "Nobelium", 259, "+3, +2"};
    elements["lr"] = {"Lr", 103, "Lawrencium", 262, "+3, +2"};
    elements["rf"] = {"Rf", 104, "Rutherfordium", 267, "+4, +3"};
    elements["db"] = {"Db", 105, "Dubnium", 262, "+5, +4"};
    elements["sg"] = {"Sg", 106, "Seaborgium", 269, "+6, +5, +4"};
    elements["bh"] = {"Bh", 107, "Bohrium", 264, "+7, +6, +5, +4, +3, +2"};
    elements["hs"] = {"Hs", 108, "Hassium", 269, "+8, +7, +6, +5, +4, +3, +2"};
    elements["-1"] = {"", 0, "", 0.0, ""};

}

void polyIonsInfo()
{
    polyatomic["nh4"] = {"NH4", "Ammonium", 18.03846, "+1"};
    polyatomic["c2h3o2"] = {"C2H3O2", "Acetate", 59.044, "-1"};
    polyatomic["c2h3oo"] = {"C2H3OO", "Acetate", 59.044, "-1"};
    polyatomic["hs"] = {"HS", "Bisulfide", 33.0735, "-1"};
    polyatomic["bro3"] = {"BrO3", "Bromate", 127.9027, "-1"};
    polyatomic["clo3"] = {"ClO3", "Chlorate", 83.4517, "-1"};
    polyatomic["clo2"] = {"ClO2", "Chlorite", 67.4523, "-1"};
    polyatomic["cn"] = {"CN", "Cyanide", 26.01795, "-1"};
    polyatomic["cno"] = {"CNO", "Cyanate", 42.0173, "-1"};
    polyatomic["h2po4"] = {"H2PO4", "Dihydrogen Phosphate", 96.9878, "-1"};
    polyatomic["h2po3"] = {"H2PO3", "Dihydrogen Phosphite", 80.9878, "-1"};
    polyatomic["hco3"] = {"HCO3", "Hydrogen Carbonate", 61.0168, "-1"};
    polyatomic["hso4"] = {"HSO4", "Hydrogen Sulfate", 98.0785, "-1"};
    polyatomic["hso3"] = {"HSO3", "Hydrogen Sulfite", 82.0791, "-1"};
    polyatomic["clo"] = {"ClO", "Hypochlorite", 51.4524, "-1"};
    polyatomic["oh"] = {"OH", "Hydroxide", 17.00734, "-1"};
    polyatomic["io3"] = {"IO3", "Iodate", 174.90267, "-1"};
    polyatomic["io2"] = {"IO2", "Iodite", 158.90327, "-1"};
    polyatomic["no3"] = {"NO3", "Nitrate", 62.0049, "-1"};
    polyatomic["no2"] = {"NO2", "Nitrite", 46.0055, "-1"};
    polyatomic["clo4"] = {"ClO4", "Perchlorate", 99.450, "-1"};
    polyatomic["mno4"] = {"MnO4", "Permangante", 118.9356, "-1"};
    polyatomic["scn"] = {"SCN", "Thiocyanate", 58.0829, "-1"};
    
    //2- charges
    polyatomic["co3"] = {"CO3", "Carbonate", 60.0100, "-2"};
    polyatomic["cro4"] = {"CrO4", "Chromate", 115.9937, "-2"};
    polyatomic["cr2o7"] = {"Cr2O7", "Dichromate", 215.9880, "-2"};
    polyatomic["c2o4"] = {"C2O4", "Oxalate", 88.0190, "-2"};
    polyatomic["o2"] = {"O2", "Peroxide", 31.99880, "-2"};
    polyatomic["hpo4"] = {"HPO4", "Hydrogen Phosphate", 95.9793, "-2"};
    polyatomic["hpo3"] = {"HPO3", "Hydrogen Phosphite", 79.97990, "-2"};
    polyatomic["sio3"] = {"SiO3", "Silicate", 76.0837, "-2"};
    polyatomic["so3"] = {"SO3", "Sulfite", 80.0643, "-2"};
    polyatomic["so2"] = {"SO2", "Sulfate", 96.0637, "-2"};
    polyatomic["s2o3"] = {"S2O3", "Thiosulfate", 112.1293, "-2"};

    //3- charges
    polyatomic["aso4"] = {"AsO4", "Arsenate", 138.9208, "-3"};
    polyatomic["po4"] = {"PO4", "Phosphate", 94.9730, "-3"};
    polyatomic["po3"] = {"PO3", "Phosphite", 78.97361, "-3"};
}

void seriesInfo()
{
    activity["k"] = {"Potassium", 1};
    activity["na"] = {"Sodium", 2};
    activity["li"] = {"Lithium", 3};
    activity["ba"] = {"Barium", 4};
    activity["sr"] = {"Strontium", 5};
    activity["ca"] = {"Calcium", 6};
    activity["mg"] = {"Magnesium", 7};
    activity["al"] = {"Aluminum", 8};
    activity["zn"] = {"Zinc", 9};
    activity["cr"] = {"Chromium", 10};
    activity["fe"] = {"Iron", 11};
    activity["cd"] = {"Cadium", 12};
    activity["co"] = {"Cobalt", 13};
    activity["ni"] = {"Nickle", 14};
    activity["sn"] = {"Tin", 15};
    activity["pb"] = {"Lead", 16};
    activity["h"] = {"Hydrogen", 17};
    activity["sb"] = {"Antimony", 18};
    activity["bi"] = {"Bismuth", 19};
    activity["cu"] = {"Copper", 20};
    activity["hg"] = {"Murcury", 21};
    activity["ag"] = {"Silver", 22};
    activity["au"] = {"Gold", 23};
    activity["pt"] = {"Platnum", 24};    
    
}


void printInfo()
{
    string e;

    elInfo();
    cout << "Enter element symbol: " << endl;
    cin >> e;
    if (elements.find(e) != elements.end()){
        cout << "Symbol: " << elements[e].symbol << endl;
        cout << "Number: " << elements[e].num << endl;
        cout << "Name: " << elements[e].name << endl;
        cout << "Weight: " << elements[e].weight << endl;
        cout << "Charge: " << elements[e].charge << endl;
        cout << endl;
    }
    else {
        cout << "element not found" << endl;
    }
}

void printPolyInfo()
{
    string e;
    polyIonsInfo();
    cout << "Enter polyatomic ion symbol: " << endl;

    cin >> e;
    if (polyatomic.find(e) != polyatomic.end()){
        cout << "Symbol: " << polyatomic[e].symbol << endl;
        cout << "Name: " << polyatomic[e].name << endl;
        cout << "Weight: " << polyatomic[e].weight << endl;
        cout << "Charge: " << polyatomic[e].charge << endl;
        cout << endl;
    }
    else {
        cout << "element not found" << endl;
    }
}

void moleculeMass()
{
    elInfo();
    vector<double> mass;
    string e;
    double b = 0.0;

    cout << "Enter -1 to end" << endl;
    do {
        cin >> e;
        if (elements.find(e) != elements.end()){
            mass.push_back(elements[e].weight);
        } 
        else if (polyatomic.find(e) != polyatomic.end()){
              mass.push_back(polyatomic[e].weight);
        }
    } while (e != "-1");
    
    for (int i = 0; i < mass.size(); i++){
        b += mass[i];
    }
    
    cout << b << endl;
    cout << endl;
}

void activitySeries()
{
    
}
void displayMenu()
{
    cout << "**********************" << endl;
    cout << "1 for info" << endl; 
    cout << "2 for mass calculation" << endl;
    cout << "3 for polyatomic ions" << endl;
    cout << "4 for activity series" << endl;
    cout << "5 for solubility" << endl;
    cout << "6 to strong acids" << endl;
    cout << "7 to close" << endl;
    cout << "**********************" << endl;
}


void switches()
{
    seriesInfo();
    string e1;
    string e2;
    
    cout << "Enter First Element" << endl;
    cin >> e1;
    cout << "Enter Second Element" << endl;
    cin >> e2;

    if (activity[e1].num < activity[e2].num){
        cout << "switches" << endl;
        cout << endl;
    }
    else {
        cout << "doesn't switch" << endl;
        cout << endl;
    }
}

void soluble()
{
    string a;
    cout << "enter -1 when done" << endl;
    do {
        cin >> a;
    
        if (a == "no3" || a == "c2h3o2" || a == "c2h3oo"){
            cout << "Soluble" << endl;
        }
        else if (a == "cl" || a == "br" || a == "i"){
            cout << "Soluble, Insoluble: Ag, Hg, Pb" << endl;
        }
        else if (a == "so4"){
            cout << "Soluble, Insoluble: Sr, Ba, Hg, Pb" << endl;
        }
        //insoluble
        else if (a == "s"){
            cout << "Insoluble, Soluble: NH4, Group 1A, Ca, Sr, Ba" << endl;
        }
        else if (a == "co3" || a == "po4" ){
            cout << "Insoluble, Soluble: NH4, Group 1A" << endl;
        }
        else if (a == "oh"){
            cout << "Insoluble, Soluble: Group 1A, Ca, Sr, Ba" << endl;
        }
        else if (a == "-1"){
            cout << endl;
        }
        else {
            cout << "Not on the list" << endl;
        }
    }while (a != "-1");
}

void strongAcids(){
    string a;

    cout << "Enter acid:" << endl;
    cin >> a;
    if (a == "hcl" || a == "hno3" || a == "h2so4" || a == "hbr" || a == "hi" || a == "hclo4" || a == "hlo3"){
        cout << "Strong Acid" << endl;
        cout << endl;
    }
    else if (a == "list"){
        cout << endl;
        cout << "HCl: Hydrochloric Acid" << endl;
        cout << "HNO3: Nitric Acid" << endl;
        cout << "H2SO4: Sulfuric Acid" << endl;
        cout << "HBr: Hydrobromic Acid" << endl;
        cout << "HI: Hydroiodic Acid" << endl;
        cout << "HClO4: Perchloric Acid" << endl;
        cout << "HClO3: Chloric Acid" << endl;
        cout << endl;

    }
    else {
        cout << "not a strong acid" << endl;
        cout << endl;
    }
    }


int main()
{ 
    int opt;

    do {
    displayMenu();
    cout << "Enter choice: " << endl;
    cin >> opt;
    system("cls");

    switch (opt){
    case 1:
        printInfo();
        break;

    case 2:
        printPolyInfo();
        break;

    case 3:
        moleculeMass();
        break;
    
    case 4:
        switches();
        break;

    case 5:
        soluble();
        break;

    case 6:
        strongAcids();
        break;

    default:
        break;
    }

    } while (opt != 7);

}
