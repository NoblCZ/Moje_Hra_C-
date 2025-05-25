#include <iostream>
#include <windows.h>
#include <string>
#include <string.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
#include <cstdlib>
#include <ctime>
using namespace std;

void BattleDrak(int &zdraviL, int &manaL, int obranaL, int utokL, int zdravi_nepritelL, int utok_nepritelL, int obrana_nepritelL, string nepritel_jmenoL, string jmenoL, int levelL, string schopnost1L, string schopnost2L, string schopnost3L, int schopnostL[3]) {

    int napoveda = 1;

    do {

    int Drakutok = rand() % 2 + 1;
    int criticalroll = rand() % 100 + 1;
    int criticalsance = rand() % 100 + 1;
    int utokspecial = rand() % 3;

    int x;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    system("cls");
    cout << endl;
    cout << "  " << nepritel_jmenoL << endl;
    cout << "  HP: [";

    SetConsoleTextAttribute(hConsole, 4);

    for (int i=1; i <= zdravi_nepritelL; i++) {
        cout << "=";
    }

    SetConsoleTextAttribute(hConsole, 15);

    cout << "]" << endl;
    cout << endl;
    cout << endl;
    cout << "                       " << jmenoL << "       Lv" << levelL << endl;
    cout << "                       HP: [";

    SetConsoleTextAttribute(hConsole, 4);

    for (int i=1; i <= zdraviL; i++) {
        cout << "=";
    }

    SetConsoleTextAttribute(hConsole, 15);

    cout << "]" << endl;

    SetConsoleTextAttribute(hConsole, 12);

    cout << "                       HP: " << zdraviL << endl;

    SetConsoleTextAttribute(hConsole, 11);

    cout << "                       Mana: " << manaL << endl << endl;

    SetConsoleTextAttribute(hConsole, 14);

    cout << " -------------------------------------------------" << endl;
    cout << "|  ";

    SetConsoleTextAttribute(hConsole, 15);

    cout << "0 - "<< schopnost1L;

    SetConsoleTextAttribute(hConsole, 14);

    cout << "  |  ";

    SetConsoleTextAttribute(hConsole, 15);

    cout << "1 - "<< schopnost2L;

    SetConsoleTextAttribute(hConsole, 14);

    cout << "   |" << endl;
    cout << "|  ";

    SetConsoleTextAttribute(hConsole, 15);

    cout << "2 - "<< schopnost3L;

    SetConsoleTextAttribute(hConsole, 14);

    cout << "    |                       " << endl;

    cout << " -------------------------------------------------" << endl;

    SetConsoleTextAttribute(hConsole, 15);

    if (napoveda > 0) {

        SetConsoleTextAttribute(hConsole, 10);
        cout << endl << "V souboji s Drakem je to jine, ma vetsi sanci ti zasadit kriticky hit";
        cout << endl << "Navic ma dva utoky, jeden je normalni, ten druhy je vsak jiny," << endl << "Druhy utok muze uderit jednou az trikrat naraz" << endl;
        SetConsoleTextAttribute(hConsole, 15);
        napoveda = 0;
    }

    cout << endl << schopnost1L << " = " << schopnostL[0] << " many";
    cout << endl << schopnost2L << " = " << schopnostL[1] << " many";
    cout << endl << schopnost3L << " = " << schopnostL[2] << " many" << endl;
    cout << endl << endl << "Vyber svuj utok: " << endl;
    cin >> x;

    if (x < 0 || x > 2) {
    cout << "Neplatna volba!";
    Sleep(2500);
    continue;
}

    int damage = (schopnostL[x] + utokL) / obrana_nepritelL;

    int damageP;

    if (damage < 0) {

        damage = 0;
    }

    Sleep(1000);

        int pouziti;

        if (Drakutok == 1) {

            SetConsoleTextAttribute(hConsole, 12);
            cout << "Drak pouzil normalni utok!" << endl;
            SetConsoleTextAttribute(hConsole, 15);
            Sleep(1500);

            damageP = utok_nepritelL - obranaL;

    if (damageP < 0) {

        damageP = 0;

    }

        }

        if (Drakutok == 2) {

            SetConsoleTextAttribute(hConsole, 12);
            cout << "Drak pouzil silny utok!" << endl;
            SetConsoleTextAttribute(hConsole, 15);
            Sleep(1500);

            for (int i=0; i <= utokspecial; i++) {

                pouziti = i + 1;
                SetConsoleTextAttribute(hConsole, 14);
                cout << endl << endl << "Drak uderil: " << pouziti << " krat";
                SetConsoleTextAttribute(hConsole, 15);
                Sleep(1500);
                continue;

            }

            cout << endl;

            damageP = pouziti;

            if (damageP < 0) {

            damageP = 0;

    }
        }


        if (criticalroll <= 25) {
        damageP *= 2;
        SetConsoleTextAttribute(hConsole, 4);
        cout << "Nepritel ti zasadil kriticky hit!" << endl;
        SetConsoleTextAttribute(hConsole, 15);
    }

     if (criticalsance <= 15 && (manaL - schopnostL[x]) > 0) {
        damage *= 2;
        SetConsoleTextAttribute(hConsole, 12);
        cout << "Zasadil jsi nepriteli kriticky hit!" << endl;
        SetConsoleTextAttribute(hConsole, 15);
    }


    if ((manaL - schopnostL[x]) < 0) {
        damage = 0;
    }
    else {
    zdravi_nepritelL -= damage;
    manaL -= schopnostL[x];
    }

    zdraviL -= damageP;

    manaL += 1;

    cout << endl << "Prisel jsi o: " << damageP << " zivot/u";
    cout << endl << "Prisel jsi o: " << schopnostL[x] << " many";
    cout << endl << "Nepriteli jsi ubral: " << damage << " zivot/u";
    cout << endl << "Pribyla ti jedna mana";
    Sleep(8000);

    } while (zdravi_nepritelL > 0 && zdraviL > 0);
}

void horyAKrajina() {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, 6);

    cout << "                 /\\                     " << endl;
    cout << "                /  \\    /\\              " << endl;
    cout << "      /\\      /    \\  /  \\    /\\       " << endl;
    cout << "     /  \\    /      \\/    \\  /  \\      " << endl;
    cout << "    /    \\  /               \\/    \\     " << endl;
    cout << "   /      \\/                        \\    " << endl;
    cout << "  /                                   \\   " << endl;
    cout << " /_____________________________________\\ " << endl;

    SetConsoleTextAttribute(hConsole, 9);

    cout << " ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~  " << endl;
    cout << "  ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~   " << endl;

    SetConsoleTextAttribute(hConsole, 15);
}

void cara() {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, 14);

    for (int i=0; i <= 119; i++) {
        cout << "_";
    }

    SetConsoleTextAttribute(hConsole, 15);
}

void knihaAekas() {

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

cara();

SetConsoleTextAttribute(hConsole, 12);
cout << endl << endl << "                                       Aekas Statecny - Mec, ktery kracel";
SetConsoleTextAttribute(hConsole, 15);
cout << endl << "                                   >_______________________________________<";


SetConsoleTextAttribute(hConsole, 14);
cout << endl << endl << ",,Jsou muzi, kteri se rodi jako deti. A jsou muzi, kteri se rodi jako dejiny.,,";
SetConsoleTextAttribute(hConsole, 15);

cout << endl << endl << "Tak zacinaji stare verse o ";

SetConsoleTextAttribute(hConsole, 2);
cout << "Aekasovi Statecnem, nejvetsim z vladcu Gardskeho kralovstvi.";
SetConsoleTextAttribute(hConsole, 15);

cout << " Jeho pribeh je";
cout << endl << "vypravovan v chramech, zpivan pri korunovacich a tesan do kamene v sinich vladcu.";
cout << endl << "Narodil se jako druhorozeny syn ";

SetConsoleTextAttribute(hConsole, 2);
cout << "Cara Raemnase Osviceneho";
SetConsoleTextAttribute(hConsole, 15);

cout << ", muze miru. A presto to byl prave Aekas, koho";
cout << endl << "si Car zvolil za nastupce - nebot vedel, ze mir lze udrzet jen silou.";

cout << endl << endl << "Aekas vladl v case, kdy Gardii ohrozili ";

SetConsoleTextAttribute(hConsole, 2);
cout << "Drapnirove";
SetConsoleTextAttribute(hConsole, 15);

cout << ", davni sousede z chladneho severu. ";

SetConsoleTextAttribute(hConsole, 4);
cout << "Roku 1158 L.E";
SetConsoleTextAttribute(hConsole, 15);

cout << endl << "prekrocila jejich armada hranice Gardie, domnivajic se, ze mlady Car nebude hoden trunu. Byli vsak osudne na omylu";

SetConsoleTextAttribute(hConsole, 11);
cout << endl << endl << "Bitva u Fyonskych soutesek";
SetConsoleTextAttribute(hConsole, 15);

cout << " - prvni stret teto valky, se zapsala do krve i legend. Drapnirske vojsko citajici";

SetConsoleTextAttribute(hConsole, 2);
cout << endl << "osmdesat tisic";
SetConsoleTextAttribute(hConsole, 15);

cout << " muzu vstoupilo do horskych prusmyku… jen aby bylo rozdrceno v zeleznem sevreni gardske";
cout << endl << "taktiky. Aekasova lest, jizda utocici ze zalohy a pechota skryta ve skalach privedla k porazce i slavna";

SetConsoleTextAttribute(hConsole, 2);
cout << endl << "drapnirska dela.";
SetConsoleTextAttribute(hConsole, 15);

cout << endl << endl << "Po navratu do Ilrathu celil Aekas hnevu lidu, ktery se valky obaval. Postavil se pred chram Trukal a pronesl slova,";
cout << endl << "ktera navzdy zmenila duch naroda:";

SetConsoleTextAttribute(hConsole, 12);
cout << endl << endl << ",,My jsme prece Gardove, MY jsme deti Lauriho... Budeme bojovat na morich, v horach, na planich. My se nikdy nevzdame!,,";
SetConsoleTextAttribute(hConsole, 15);

cout << endl << endl << "Slova se stala mecem. Aekas znovu vyrazil do boje - tentokrat k ";

SetConsoleTextAttribute(hConsole, 2);
cout << "Gardskym branam";
SetConsoleTextAttribute(hConsole, 15);

cout << ", dvema horam strazicim";
cout << endl << "primou cestu do srdce rise. Drapnirska invaze byla silna - pres ";

SetConsoleTextAttribute(hConsole, 2);
cout << "sto tisic muzu";
SetConsoleTextAttribute(hConsole, 15);

cout << ". Aekas mel mene nez polovinu,";
cout << endl << "ale mel viru. A mel plan.";

cout << endl << endl << "Vyhloubil tunely do skal, skryl v nich lukostrelce i delo ukoristene u Fyony. A kdyz Drapnirove tretiho dne";
cout << endl << "zautocili, otevrelo se nebe - a z hor se snesl dest sipu a oceli. Chaos zpusobil rozklad a Gardove vyrazili z";
cout << endl << "hradu ";

SetConsoleTextAttribute(hConsole, 2);
cout << "Traumna";
SetConsoleTextAttribute(hConsole, 15);

cout << " jako bourka. Aekas osobne vedl utok a podle tradice zabil pres ";

SetConsoleTextAttribute(hConsole, 4);
cout << "sto dvacet muzu vlastnim mecem.";

SetConsoleTextAttribute(hConsole, 14);
cout << endl << endl << "Zde ziskal prezdivku ,,Statecny,,";
SetConsoleTextAttribute(hConsole, 15);

cout << endl << endl << "Valka skoncila o rok pozdeji, Gardie zvitezila a ziskala novou provincii ";

SetConsoleTextAttribute(hConsole, 2);
cout << "Marka";
SetConsoleTextAttribute(hConsole, 15);

cout << ". Ale Aekasovy ciny neskoncily na bojisti.";
cout << endl << "Vytvoril legendarni jezdecky oddil ";

SetConsoleTextAttribute(hConsole, 2);
cout << "Dragom";
SetConsoleTextAttribute(hConsole, 15);

cout << " - muze, kteri nosili draci kridla a sli do boje jako myticka stvoreni.";
cout << endl << "Reformoval jazyk ";

SetConsoleTextAttribute(hConsole, 2);
cout << "Aersir";
SetConsoleTextAttribute(hConsole, 15);

cout << " a pridal do nej pismeno R, inspirovane erbem sve rodiny. Tim zmenil poezii,";
cout << endl << "pismnictvi i mysleni kralovstvi.";

cout << endl << endl << "A kdyz v nove provincii vypukla ";

SetConsoleTextAttribute(hConsole, 11);
cout << "Severni revoluce";
SetConsoleTextAttribute(hConsole, 15);

cout << ", vedl Gardii i proti vlastnim rebelum. Zvitezil v ";

SetConsoleTextAttribute(hConsole, 11);
cout << "bitve u Aelbe";
SetConsoleTextAttribute(hConsole, 15);

cout << endl << "prinesl mir - a pote nechal vsechny nepritele vyhnat, misto aby je popravoval.";

SetConsoleTextAttribute(hConsole, 12);
cout << endl << endl << "Rekl: ,,Pokud se jim v nasi zemi nelibi, nemeli by prijit o hlavu. Ale rozhodne by tu nemeli zustat.,,";
SetConsoleTextAttribute(hConsole, 14);
cout << endl << endl << "Aekas vladl 33 let. Kdyz zemrel, jeho mec Slaepmnir se stal korunovacni relikvii.";
cout << endl << endl << "A zustava v dejinach jako Car, ktery promenil kralovstvi v risi, jazyk v umeni - a viru v cin." << endl << endl;
SetConsoleTextAttribute(hConsole, 15);
cara();

int zavreni;

SetConsoleTextAttribute(hConsole, 10);
cout << endl << endl << "Stiskni -1- pro zavreni knihy";
SetConsoleTextAttribute(hConsole, 15);

do {
cin >> zavreni;
}while(!(zavreni == 1));

system("cls");
}

void knihaSpravaGardie() {

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

cara();

SetConsoleTextAttribute(hConsole, 12);
cout << endl << endl << "                                           Sprava Gardskeho Kralovstvi";
SetConsoleTextAttribute(hConsole, 15);
cout << endl << "                                    >_______________________________________<";

cout << endl << endl << "Gardske kralovstvi je rizenou a pevne strukturovanou risi, v jejimz cele stoji panovnik nesouci titul Car. Tento vladce";
cout << endl << "neni pouze panem zeme, ale i jejim duchovnim strazcem, zvolenym podle bozske vule. Car vsak";
cout << endl << "nevlada sam – jeho moc je sice velka, ale doplnena Radou Rady, sestici vysoce postavenych radcu, z nichz";
cout << endl << "kazdy zodpovida za jednu klicovou oblast spravy rise.";

cout << endl << endl << "Valecny radce, nesouci titul Rutr, ma na starost vojenske otazky a obranu rise. Fil je radce miru,";
cout << endl << "zodpovedny za diplomacii a pravo. Kralovsky pokladnik, oznacovany jako Wbetr, se stara o finance a danovy";
cout << endl << "system. Vrchni ucenec, Awir, ma pod sebou vsechny chramy poznani, knihovny a vzdelavaci instituce.";
cout << endl << "Waezul, radce staveb, urcuje smer vystavby a rozvoje mest. Kazdy z techto radcu nosi zlaty prsten s vlastni";
cout << endl << "peceti a podili se na rozhodovani o vecech velkeho vyznamu.";

cout << endl << endl << "Soudnictvi v Gardii je spravovano vyhradne pod dozorem Fil. Soudci musi byt nezavisli, nesmi mit zadne";
cout << endl << "vazby na obzalovane. Pred zahajenim soudu je vzdy vyzadovan minimalni pocet dvou svedku – jinak nelze";
cout << endl << "soud ani vest. Obzalovany ma moznost se hajit, po cemz nasleduje svedectvi a rozhodovani soudce. Trest";
cout << endl << "smrti je vyhrazen pouze tem nejtvrdsim provinilcum – atentat na Cara, vrazda radniho nebo duchovniho, ci";
cout << endl << "masova vrazda. Aby k popraveni mohlo dojit, musi vypovidat ctyri svedci a Car musi popravu schvalit.";
cout << endl << "Vyhnanstvi je castejsim trestem pro kacire a rebely, kteri tak nejsou popraveni, ale nuceni opustit zemi.";
cout << endl << "Tuto praxi zavedl Car Aekas Statecny.";

cout << endl << endl << "Uzemi Gardske rise je rozdeleno do peti provincií: Pafas, Wasla, Gaztra, Loumnaera a Marka.";
cout << endl << "Kazdou provincii spravuje jeden z radcu Rady Rady.";
cout << endl << "Provincie jsou si rovne, neexistuji mezi nimi kulturni, jazykove ani nabozenske rozdily.";
cout << endl << "Vsechny patri pod jeden zakon, jednu viru, a jeden trun.";

cout << endl << endl << "Oficialnim jazykem rise je Aersir, psany vyhradne velkymi pismeny. Veskera spravni dokumentace, zakony a";
cout << endl << "uradni pisemnosti jsou zapisovany v tomto jazyce. Kazdy zakon, dekret ci kralovske rozhodnuti musi byt";
cout << endl << "opatreno peceti Cara nebo radniho prstenu.";

cout << endl << endl << "Symbolem moci je slavnost Fal, pri niz novy Car prijima zlaty svitek, posvatny plast a legendami opredeny";
cout << endl << "mec Slaepmnir, ktery byl kdysi vlastnen samotnym Aekasem Statecnym.";
cout << endl << "Chram Trukal v hlavnim meste Ilrath je centralnim mistem pro tyto obradni akty.";
cout << endl << "Styl vlady v Gardii je casto nazyvan proto-absolutistickou monarchii – Car muze byt takrka vsemocny,";
cout << endl << "pokud je schopny a umi ovladat system. V opacnem pripade je moc presunuta spise na Radu.";

SetConsoleTextAttribute(hConsole, 14);
cout << endl << endl << "Tato kniha patri mezi zakladni cteni vsech ucencu, diplomatu, vojenskych velitelu i spravcu mest.";
cout << endl << "Je to zakladni pilir porozumeni moci v Gardskem kralovstvi." << endl << endl;
SetConsoleTextAttribute(hConsole, 15);
cara();

int zavreni;

SetConsoleTextAttribute(hConsole, 10);
cout << endl << endl << "Stiskni -1- pro zavreni knihy";
SetConsoleTextAttribute(hConsole, 15);

do {
cin >> zavreni;
}while(!(zavreni == 1));

system("cls");
}

void knihaAetruz() {

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

cara();

SetConsoleTextAttribute(hConsole, 12);
cout << endl << endl << "                                              Mytologie viry Aetruz";
SetConsoleTextAttribute(hConsole, 15);
cout << endl << "                                    >_______________________________________<";

cout << endl << endl << "Na pocatku nebylo nic. Zadne more, zadne hory, zadne svetlo, ani tma.";
cout << endl << "Jen cira energie znama jako Ifmnachar - Prvotni svetlo.";
cout << endl << "Z teto energie po veku mlceni povstal prvni buh: Lauri, Pan svetla a zivota.";

cout << endl << endl << "Lauri dlouho putoval prapuvodnim chaosem, sam a bez cile, az pocitil touhu po rovnovaze.";
cout << endl << "A tak z neho byla stvorena jeho opacna podoba - bohyne Chazael, pani temnoty, stinu a ticha.";
cout << endl << "Byla jeho druhyni, jeho vyzvou, jeho rovnovahou. Spolu vytvorili hvezdy, planety a vdechli svetu prvni dech.";

cout << endl << endl << "Na planete Versahar vznikl ocean Aechabe, nasledovan pevninou, rostlinami a konecne i prvnimi lidmi.";
cout << endl << "Tito lide zalozili osadu Zuth, prvni lidske mesto." << endl << endl;

cara();

cout << endl << endl << "Z bohu Lauri a Chazael vzeslo dalsich sedm sil, sedm bohu, kazdy s vlastnim poslanim: ";
cout << endl << endl << "Fifa, buh moudrosti a radu, byl jejich prvnim synem.";
cout << endl << "Daroval lidem jazyk, ovsem omylem, kdyz slova bohu prosakla do mysli smrtelniku.";

cout << endl << endl << "Pali, buh miru a pokoje, se zjevil uprostred prvni valky, aby ji ukoncil.";

cout << endl << endl << "Rutra, buh valky a nenavisti, nevznikl z vule bohu, ale z lidske nenavisti mezi mesty Rath a Zuth.";

cout << endl << endl << "Chael, bohyne smrti, povstala s prvni smrti smrtelneho cloveka, aby doprovazela duse.";

cout << endl << endl << "Gtrou, buh vod a plodnosti, dava svetu dest a urodu.";

cout << endl << endl << "Outroud, buh lovu a divociny, chodi jako vlk po dvou a chrani rovnovahu lesa.";

cout << endl << endl << "Kali, buh bohatstvi, zlata a moci, je patronem obchodu.";

cout << endl << endl << "A nakonec Gad, buh ohne a siry, se narodil behem bitvy mezi Rutra a Pali, kdy prasklo nebe a jeho telo dopadlo do sopky Tau." << endl << endl;

cara();

cout << endl << endl << "Posmrtny zivot podle viry Aetruz je rozdeleny: ";
cout << endl << endl << "Spravedlivi odchazeji do Udoli Wi, kde je vecny klid, hojnost a svetlo.";
cout << endl << "Zli jsou navzdy zniceni a jejich duse zmizi z kolobehu.";

cout << endl << "Rozhodujicim soudcem je Pali, ktery vazi ciny kazdeho cloveka.";

cout << endl << endl << "Mytus o jazyku Aersir: ";
cout << endl << "Fifa omylem daroval lidem schopnost slyseni bozsich slov.";
cout << endl << "Lide je zapsali, a z hnevu Lauri vznikla i prvni sprosta slova.";
cout << endl << "Tak byl zrozen jazyk Aersir - z bozske omyly a lidske zvedavosti.";

cout << endl << endl << "Mytus o Gad: ";
cout << endl << "Behem bitvy Rutra a Pali prasklo nebe.";
cout << endl << "Z trhliny vypadl plamen a promnenil se v boha - Gad.";
cout << endl << "Dopadl do sopky Tau a zrodil ohen sveta.";

SetConsoleTextAttribute(hConsole, 14);
cout << endl << endl << "Vira Aetruz je zakladem Gardske kultury, zakona i spravy.";
cout << endl << "Je dulezite si pamatovat, ze kazdy zakon, kazda slavnost i kazde jmeno nese otisk bozi vule.";
cout << endl << "Bez Aetruz neni Gardie nic - jen kameni bez jmena." << endl << endl;
SetConsoleTextAttribute(hConsole, 15);
cara();

int zavreni;

SetConsoleTextAttribute(hConsole, 10);
cout << endl << endl << "Stiskni -1- pro zavreni knihy";
SetConsoleTextAttribute(hConsole, 15);

do {
cin >> zavreni;
}while(!(zavreni == 1));

system("cls");


}

void uvodVersaharskaKronika() {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, 6);

    cout << endl;
    cout << "                       ___====-_  _-====___" << endl;
    cout << "                 _--^^^#####//      \\\\#####^^^--_" << endl;
    cout << "              _-^##########// (    ) \\\\##########^-_" << endl;
    cout << "             -############//  |\\^^/|  \\\\############-" << endl;
    cout << "           _/############//   (@::@)   \\\\############\\_" << endl;
    cout << "          /#############((     \\\\//     ))#############\\" << endl;
    cout << "         -###############\\\\    (oo)    //###############-" << endl;
    cout << "        -#################\\\\  / VV \\  //#################-" << endl;
    cout << "       -###################\\\\/      \\//###################-" << endl;
    cout << "      _#/|##########/\\######(   /\\   )######/\\##########|\\#_" << endl;
    cout << "      |/ |#/\\#/\\#/\\/  \\#/\\##\\  |  |  /##/\\#/  \\/\\#/\\#/| \\|" << endl;
    cout << "      `  |/  V  V  `   V  \\#\\| |  | |/#/  V   '  V  V  \\|  '" << endl;

    SetConsoleTextAttribute(hConsole, 14);

    cout << "         `   `  `      `   / | |  | | \\   '      '  '   '" << endl;
    cout << "                          (  | |  | |  )" << endl;
    cout << "                         __\\ | |  | | /__" << endl;

    SetConsoleTextAttribute(hConsole, 7);

    cout << "                        (vvv(VVV)(VVV)vvv)" << endl;
    cout << endl;

    SetConsoleTextAttribute(hConsole, 14);

    cout << "---------------------------------------------------------------" << endl;

    SetConsoleTextAttribute(hConsole, 15);

    cout << "                    VERSAHARSKA KRONIKA                        " << endl;

    cout << "                      by Jozef Oralek                          " << endl;

    SetConsoleTextAttribute(hConsole, 14);

    cout << "---------------------------------------------------------------" << endl;

    SetConsoleTextAttribute(hConsole, 6);

    cout << "             /\\                     /\\                         " << endl;
    cout << "            /  \\    /\\    /\\    /\\  /  \\                        " << endl;
    cout << "           /    \\  /  \\  /  \\  /  \\/    \\                       " << endl;
    cout << "          /      \\/    \\/    \\/      \\     \\                    " << endl;
    cout << "         /                               \\                     " << endl;
    cout << "        /_________________________________\\                    " << endl;
    cout << endl;

    SetConsoleTextAttribute(hConsole, 15);
}

void leceni(string &postavaL, int &zdraviL, int &zdraviNAVICL) {
                if (postavaL == "mag") {
                    zdraviL = 5 + zdraviNAVICL;
                }
                if (postavaL == "rytir") {
                    zdraviL = 6 + zdraviNAVICL;
                }
                if (postavaL == "lovec") {
                    zdraviL = 5 + zdraviNAVICL;
                }
                if (postavaL == "cestovatel") {
                    zdraviL = 3 + zdraviNAVICL;
                }
                if (postavaL == "sigma") {
                    zdraviL = 12 + zdraviNAVICL;
                }
}

void reka() {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, 9);

    cout << "~~~~~~~~~~~~~    ~~~~~~~~~~~~~~~   ~~" << endl;
    cout << " ~~~~~~~~~~~~ ~~~~~~~~~~~~~~ ~~~~~~~" << endl;
    cout << "~~~~~~~~~~~~~~~ ~~~~~~~~~~~~ ~~~~~~~~" << endl;
    cout << " ~~~~~~~~~~~~~ ~~~~~~~~~~~~~ ~~~~~~~" << endl;
    cout << "~~~~~~~~~~~~~~~ ~~~~~~~~~~~~~~~~ ~~~~" << endl;
    cout << " ~~~~~~~~~~~~ ~~~~~~~~~~~~~~ ~~~~~~~~" << endl;
    cout << "~~~~~~~~~~~~~~~ ~~~~~~~~~~~~ ~~~~~~~~" << endl;
    cout << " ~~~~~~~~~~~~~ ~~~~~~~~~~~~ ~~~~~~~~~" << endl;
    cout << "~~~~~~~~~~~~~~~ ~~~~~~~~~~~~~~~~ ~~~~" << endl;
    cout << " ~~~~~~~~~~~~ ~~~~~~~~~~~~~ ~~~~~~~~" << endl;
    cout << "~~~~~~~~~~~~~~~ ~~~~~~~~~~~~~~~~ ~~~~" << endl;

    SetConsoleTextAttribute(hConsole, 15);

}

void vesnice() {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, 6);

    cout << "                        _ _||_ _                                  " << endl;
    cout << "                       /        \\                                " << endl;
    cout << "                      /__________\\        _ _||_ _               " << endl;
    cout << "                     |            |      /        \\              " << endl;
    cout << "                     |  _      _  |     /__________\\             " << endl;
    cout << "                     | |_|    |_| |    |          |              " << endl;
    cout << "                     |    __      |    |   _  _   |              " << endl;
    cout << "                    /|   |__|     |\\   |__| || |__|              " << endl;
    cout << "                  _/_|____________|_\\_ |__________|              " << endl;

    SetConsoleTextAttribute(hConsole, 8);

    cout << "                 /                   \\                          " << endl;
    cout << "                /_____________________\\                         " << endl;
    cout << "                   |  |         |  |                            " << endl;
    cout << "                   |  |         |  |                            " << endl;

    SetConsoleTextAttribute(hConsole, 7);

    cout << "           ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~            " << endl;
    cout << "          ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~           " << endl;

    SetConsoleTextAttribute(hConsole, 15);
}
void obrazekLektvar() {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, 12);

    cout << "        ______" << endl;
    cout << "       /      \\" << endl;
    cout << "      /        \\" << endl;
    cout << "     /  ~    ~  \\" << endl;
    cout << "    |            |" << endl;
    cout << "    |    ~~~     |" << endl;
    cout << "    |   ~~~      |" << endl;
    cout << "    |            |" << endl;
    cout << "     \\          /" << endl;
    cout << "      \\________/" << endl;

    SetConsoleTextAttribute(hConsole, 6);

    cout << "         ||||" << endl;
    cout << "         ||||" << endl;

    SetConsoleTextAttribute(hConsole, 15);
}

void Battle(int &zdraviL, int &manaL, int obranaL, int utokL, int zdravi_nepritelL, int utok_nepritelL, int obrana_nepritelL, string nepritel_jmenoL, string jmenoL, int levelL, string schopnost1L, string schopnost2L, string schopnost3L, int schopnostL[3]) {

    do {
    int criticalroll = rand() % 100 + 1;
    int criticalsance = rand() % 100 + 1;

    int x;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    system("cls");
    cout << endl;
    cout << "  " << nepritel_jmenoL << endl;
    cout << "  HP: [";

    SetConsoleTextAttribute(hConsole, 4);

    for (int i=1; i <= zdravi_nepritelL; i++) {
        cout << "=";
    }

    SetConsoleTextAttribute(hConsole, 15);

    cout << "]" << endl;
    cout << endl;
    cout << endl;
    cout << "                       " << jmenoL << "       Lv" << levelL << endl;
    cout << "                       HP: [";

    SetConsoleTextAttribute(hConsole, 4);

    for (int i=1; i <= zdraviL; i++) {
        cout << "=";
    }

    SetConsoleTextAttribute(hConsole, 15);

    cout << "]" << endl;

    SetConsoleTextAttribute(hConsole, 12);

    cout << "                       HP: " << zdraviL << endl;

    SetConsoleTextAttribute(hConsole, 11);

    cout << "                       Mana: " << manaL << endl << endl;

    SetConsoleTextAttribute(hConsole, 14);

    cout << " -------------------------------------------------" << endl;
    cout << "|  ";

    SetConsoleTextAttribute(hConsole, 15);

    cout << "0 - "<< schopnost1L;

    SetConsoleTextAttribute(hConsole, 14);

    cout << "  |  ";

    SetConsoleTextAttribute(hConsole, 15);

    cout << "1 - "<< schopnost2L;

    SetConsoleTextAttribute(hConsole, 14);

    cout << "   |" << endl;
    cout << "|  ";

    SetConsoleTextAttribute(hConsole, 15);

    cout << "2 - "<< schopnost3L;

    SetConsoleTextAttribute(hConsole, 14);

    cout << "    |                       " << endl;

    cout << " -------------------------------------------------" << endl;

    SetConsoleTextAttribute(hConsole, 15);

    cout << endl << schopnost1L << " = " << schopnostL[0] << " many";
    cout << endl << schopnost2L << " = " << schopnostL[1] << " many";
    cout << endl << schopnost3L << " = " << schopnostL[2] << " many" << endl;
    cout << endl << endl << "Vyber svuj utok: " << endl;
    cin >> x;

    if (x < 0 || x > 2) {
    cout << "Neplatna volba!";
    Sleep(2500);
    continue;
}

    int damage = (schopnostL[x] + utokL) / obrana_nepritelL;

    int damageP = utok_nepritelL - obranaL;

    if (damageP < 0) {

        damageP = 0;

    }

    if (damage < 0) {

        damage = 0;
    }

    Sleep(1000);

    if (criticalroll <= 15) {
        damageP *= 2;
        SetConsoleTextAttribute(hConsole, 4);
        cout << "Nepritel ti zasadil kriticky hit!" << endl;
        SetConsoleTextAttribute(hConsole, 15);
    }

     if (criticalsance <= 15) {
        damage *= 2;
        SetConsoleTextAttribute(hConsole, 12);
        cout << "Zasadil jsi nepriteli kriticky hit!" << endl;
        SetConsoleTextAttribute(hConsole, 15);
    }

    if ((manaL - schopnostL[x]) < 0) {
        damage = 0;
    }
    else {
    zdravi_nepritelL -= damage;
    manaL -= schopnostL[x];
    }

    zdraviL -= damageP;

    manaL += 1;

    cout << endl << "Prisel jsi o: " << damageP << " zivot/u";
    cout << endl << "Prisel jsi o: " << schopnostL[x] << " many";
    cout << endl << "Nepriteli jsi ubral: " << damage << " zivot/u";
    cout << endl << "Pribyla ti jedna mana";
    Sleep(8000);

    } while (zdravi_nepritelL > 0 && zdraviL > 0);
}

void leceniMana(string &postavaL, int &manaL, int &manaNAVICL) {

                if (postavaL == "mag") {
                    manaL = 10 + manaNAVICL;
                }
                if (postavaL == "rytir") {
                    manaL = 6 + manaNAVICL;
                }
                if (postavaL == "lovec") {
                    manaL = 10 + manaNAVICL;
                }
                if (postavaL == "cestovatel") {
                    manaL = 5 + manaNAVICL;
                }
                if (postavaL == "sigma") {
                    manaL = 80 + manaNAVICL;
                }
}

void LevelUP(int &zdraviNAVICL, int &utokL, int &obranaL, int &manaNAVICL) {

    cout << endl << "Vsechny tve statistiky se zvysily o jeden bod, mana o dva a byl jsi vylecen";
    zdraviNAVICL += 1;
    utokL += 1;
    obranaL += 1;
    manaNAVICL += 2;

}

void lektvaryNaPolicce() {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, 6);

    cout << "    +------------------------------------------+" << endl;

    SetConsoleTextAttribute(hConsole, 12);

    cout << "    |   ( )   ( )   ( )   ( )   ( )   ( )       |" << endl;
    cout << "    |  ( o ) ( * ) ( # ) ( ~ ) ( @ ) ( + )      |" << endl;
    cout << "    |   | |   | |   | |   | |   | |   | |       |" << endl;

    SetConsoleTextAttribute(hConsole, 6);

    cout << "    |------------------------------------------|" << endl;

    SetConsoleTextAttribute(hConsole, 9);

    cout << "    |   ( )   ( )   ( )   ( )   ( )   ( )       |" << endl;
    cout << "    |  ( % ) ( ^ ) ( & ) ( $ ) ( ! ) ( = )      |" << endl;
    cout << "    |   | |   | |   | |   | |   | |   | |       |" << endl;

    SetConsoleTextAttribute(hConsole, 6);

    cout << "    +------------------------------------------+" << endl;

    SetConsoleTextAttribute(hConsole, 15);
}

void obrazekMedved() {
    cout << "                    .--.              .--." << endl;
    cout << "                   : (\\ \". _......_ .\" /) :" << endl;
    cout << "                    '.    `        `    .'" << endl;
    cout << "                     /'   _        _   `\\" << endl;
    cout << "                    /     0}      {0     \\" << endl;
    cout << "                   |       /      \\       |" << endl;
    cout << "                  |       /        \\       |" << endl;
    cout << "                  |       /        \\       |" << endl;
    cout << "                   \\     |   .-.   |     /" << endl;
    cout << "                    `.   |  (   )  |   .'" << endl;
    cout << "                      `._ \\  `-'  / _.'" << endl;
    cout << "                         ```.---.'``" << endl;
}

void les() {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, 2);

    cout << "          &&& &&  & &&" << endl;
    cout << "      && &\\/&\\|& ()|/ @, &&" << endl;
    cout << "      &\\/(/&/&||/& /_/)_&/_&" << endl;
    cout << "   &() &\\/&|()|/&\\/ '%\" & ()" << endl;
    cout << "  &_\\_&&_\\ |& |&&/&__%_/_& &&" << endl;
    cout << "&&   && & &| &| /& & % ()& /&&" << endl;
    cout << " ()&_---()&\\&\\|&&-&&--%---()~" << endl;

    SetConsoleTextAttribute(hConsole, 6);

    cout << "            \\|||" << endl;
    cout << "              |||" << endl;
    cout << "              |||" << endl;
    cout << "              |||" << endl;
    cout << "        , -=-~  .-^- _" << endl;

    SetConsoleTextAttribute(hConsole, 15);
}

void nastvanyVlk3D() {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, 6);

    cout << "           .--." << endl;
    cout << "          /  . '._" << endl;
    cout << "         |     .-''--._" << endl;
    cout << "          \\.-'         '._" << endl;
    cout << "         /                '-." << endl;
    cout << "        ;   .-.    .-.       \\" << endl;
    cout << "        |  ( o )  ( o )       |" << endl;
    cout << "       _;     '    '          ;" << endl;
    cout << "      /   .-'-.              /" << endl;
    cout << "     /   /     '.          .'" << endl;
    cout << "    /    |       `-.____.-'" << endl;
    cout << "   ;      \\            \\" << endl;
    cout << "  /        '.           |" << endl;
    cout << " /    .-''-.  \\         /" << endl;
    cout << "|    /      \\  '.     .'" << endl;
    cout << "|   /        \\   '._.'" << endl;
    cout << "|  /          \\    |" << endl;
    cout << "| |            |   |" << endl;
    cout << "| |            |   |" << endl;
    cout << "( |            |   |" << endl;
    cout << " '-'           '-' '-'" << endl;

    SetConsoleTextAttribute(hConsole, 15);

}

void pristresok() {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, 6);

    cout << "            /^\\ " << endl;
    cout << "           /   \\ " << endl;
    cout << "          /_____\\ " << endl;
    cout << "         /       \\ " << endl;
    cout << "        /         \\ " << endl;
    cout << "       /___________\\ " << endl;
    cout << "       |           |" << endl;
    cout << "       |           |" << endl;
    cout << "       |           |" << endl;
    cout << "      /|           |\\ " << endl;
    cout << "     /_|___________|_\\ " << endl;

    SetConsoleTextAttribute(hConsole, 15);

}

void obrazekMecAKopi() {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, 6);

    cout << "        ^                  /\\ " << endl;
    cout << "       / \\                /  \\" << endl;
    cout << "       | |               /    \\" << endl;
    cout << "       | |              /      \\" << endl;
    cout << "       | |             /        \\" << endl;
    cout << "      /===\\           /          \\" << endl;
    cout << "     |  +  |         /            \\" << endl;
    cout << "     |  +  |        /              \\" << endl;
    cout << "     |  +  |       /                \\" << endl;
    cout << "     |  +  |      /                  \\" << endl;
    cout << "     |     |     /                    \\" << endl;
    cout << "     |     |    /                      \\" << endl;
    cout << "     |     |   /                        \\" << endl;
    cout << "     |_____|  /                          \\" << endl;
    cout << "      |   |  /                            \\" << endl;
    cout << "      |   | /                              \\" << endl;
    cout << "      '---'                                 " << endl;

    SetConsoleTextAttribute(hConsole, 15);
}
void obrazekZbroj() {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, 8);

    cout << "         .-=========-." << endl;
    cout << "         \\'-=======-'/ " << endl;
    cout << "         _|   .=.   |_" << endl;
    cout << "        ((|  {{1}}  |))" << endl;
    cout << "         \\|   /|\\   |/" << endl;
    cout << "          \\__ '`' __/" << endl;
    cout << "            _`) (`_  " << endl;

    SetConsoleTextAttribute(hConsole, 14);

    cout << "          _/_______\\_" << endl;
    cout << "         /___________\\" << endl;

    SetConsoleTextAttribute(hConsole, 15);
}
void obrazekTruhla() {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, 6);

    cout << "         ___________________" << endl;
    cout << "        /                  /|" << endl;
    cout << "       /__________________/ |" << endl;
    cout << "       |                  | |" << endl;
    cout << "       |   ___            | |" << endl;
    cout << "       |  |###|           | |" << endl;
    cout << "       |  |###|           | |" << endl;
    cout << "       |  |###|           | |" << endl;
    cout << "       |  |___|           | |" << endl;
    cout << "       |                  | |" << endl;
    cout << "       |__________________|/" << endl;

    SetConsoleTextAttribute(hConsole, 15);
}
void checkpoint(int zdraviL, int zdraviNAVICL, int manaL, int manaNAVICL, int utokL, int obranaL, int levelL, int reputaceL, int vyrecnostL, int smlouvaniL, int urovenL) {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, 10);

    urovenL += 1;
    cout << endl << "Zapiste si tento kod, abyste mohli pokracovat po smrti:" << endl;

    SetConsoleTextAttribute(hConsole, 15);

    cout << zdraviL << "A" << zdraviNAVICL << "B" << manaL << "C" << manaNAVICL
         << "D" << utokL << "E" << obranaL << "F" << levelL << "G"
         << reputaceL << "H" << vyrecnostL << "-" << smlouvaniL << "/" << urovenL << endl;
}

void nactenykodu(int &zdraviL, int &zdraviNAVICL, int &manaL, int &manaNAVICL, int &utokL, int &obranaL, int &levelL, int &reputaceL, int &vyrecnostL, int &smlouvaniL, int &urovenL){

        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        SetConsoleTextAttribute(hConsole, 10);

        string odpoved;
        string kod;
        cout << endl << "Mate checkpoint kod?: " << endl;

        SetConsoleTextAttribute(hConsole, 15);

        cin >> odpoved;

        if (odpoved == "ano") {

            SetConsoleTextAttribute(hConsole, 10);

            cout << endl << "Dobre, napiste svuj kod: " << endl;

            SetConsoleTextAttribute(hConsole, 15);

            cin >> kod;

            int poziceA = kod.find("A");
            int poziceB = kod.find("B");
            int poziceC = kod.find("C");
            int poziceD = kod.find("D");
            int poziceE = kod.find("E");
            int poziceF = kod.find("F");
            int poziceG = kod.find("G");
            int poziceH = kod.find("H");
            int poziceMinus = kod.find("-");
            int poziceLomitko = kod.find("/");


            zdraviL = stoi(kod.substr(0, poziceA));
            zdraviNAVICL = stoi(kod.substr(poziceA + 1, poziceB - poziceA - 1));
            manaL = stoi(kod.substr(poziceB + 1, poziceC - poziceB - 1));
            manaNAVICL = stoi(kod.substr(poziceC + 1, poziceD - poziceC - 1));
            utokL = stoi(kod.substr(poziceD + 1, poziceE - poziceD - 1));
            obranaL = stoi(kod.substr(poziceE + 1, poziceF - poziceE - 1));
            levelL = stoi(kod.substr(poziceF + 1, poziceG - poziceF - 1));
            reputaceL = stoi(kod.substr(poziceG + 1, poziceH - poziceG - 1));
            vyrecnostL = stoi(kod.substr(poziceH + 1, poziceMinus - poziceH - 1));
            smlouvaniL = stoi(kod.substr(poziceMinus + 1, poziceLomitko - poziceMinus - 1));
            urovenL = stoi(kod.substr(poziceLomitko + 1));
        }


        else {

            SetConsoleTextAttribute(hConsole, 10);

            cout << endl << "Dobre, zaciname tak novou hru!";

            SetConsoleTextAttribute(hConsole, 15);

            Sleep(3500);
        }
}

void zacatek(int odpoved, int odpoved_reka, int odpoved_muz_u_reky, int odpoved_pristresek, int odpoved_panovi, int &reputace, string postava, int &penize, int &zdravi) {

        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        cout << endl << "Oo takze ty jsi " << postava << " to je stejne jako tve jmeno fascinujici";
        Sleep(3500);
        cout << endl << "Nyni ti reknu neco o svete ve kterem se nachazis, a to o svete Versaharu" << endl;
        Sleep(2500);

        cara();

    Sleep(1000);
    cout << endl << endl << "Svet Versaharu je magicke, ale i nebezpecne misto. Tento svet se rozprostira na trech kontinentech: Edamas, Helmayt a Progongard";
    Sleep(4500);

    SetConsoleTextAttribute(hConsole, 11);

    cout << endl << "Helmayt";

    SetConsoleTextAttribute(hConsole, 15);

    cout << " - je prazdna ledova pustina bez zivota, pouze poseta ruinami starovekych civilizaci";
    Sleep(4500);

    SetConsoleTextAttribute(hConsole, 2);

    cout << endl << "Edamas";

    SetConsoleTextAttribute(hConsole, 15);

    cout << " - je kruty a divoky kontinent, jediny kontinent, ktery si lide nedokazali podrobit, protoze sama priroda se jim postavila na odpor";
    Sleep(4500);

    SetConsoleTextAttribute(hConsole, 6);

    cout << endl << "Progongard";

    SetConsoleTextAttribute(hConsole, 15);

    cout << " - je hlavni a nejvetsi kontinent, misto kde se nachazi lide, je to taky misto kde zacne tva cesta";
    Sleep(4500);

    cout << endl << endl << "Nyni kdyz jsem te obeznamil, dovol mi, te presunout do sveta" << endl;
    Sleep(2500);

    cara();

    Sleep(1000);
    cout << endl << endl << "*Hned jak Aermirus domluvi, ocitas se na planine plne rostlin, ale sirokodaleko nic nevidis" << endl << endl;
    Sleep(4500);
    horyAKrajina();
    Sleep(250);
    cout << endl << "Jaky je tvuj plan?";

    SetConsoleTextAttribute(hConsole, 10);

    cout << " 1 - Jit najit vodu";

    SetConsoleTextAttribute(hConsole, 15);

    cout << " / ";

    SetConsoleTextAttribute(hConsole, 12);

    cout << "2 - Zkusit pockat, nez nekdo prijde";

    SetConsoleTextAttribute(hConsole, 15);

    cin >> odpoved;
    system("cls");

    cara();

    switch (odpoved) {
        case 1:

            Sleep(1000);
            cout << endl << endl << "*Postavil jsi se a jdes hledat vodu*";
            Sleep(3500);
            cout << endl << "*Pomalu prochazis planinou po ktere jsou rozesety zvlastni rostliny*";
            Sleep(4000);
            cout << endl << "*Po hodinach chuze konecne nachazis reku, je to velka reka*";
            Sleep(4000);
            cout << endl << "*Na jeji druhe strane zahlednes nejakou postavu, je to clovek*" << endl << endl;
            Sleep(4000);
            reka();
            cout << endl << endl << "Chces se =";

            SetConsoleTextAttribute(hConsole, 10);

            cout << " 1 - pokusit reku prekrocit a promluvit si s timto clovekem";

            SetConsoleTextAttribute(hConsole, 15);

            cout << " / ";

            SetConsoleTextAttribute(hConsole, 12);

            cout << "2 - nebo radsi zustanes na teto strane?: " << endl;

            SetConsoleTextAttribute(hConsole, 15);

            cin >> odpoved_reka;
            system("cls");

            if (odpoved_reka == 1) {

                cara();

                Sleep(1000);
                cout << endl << endl << "*Rozhodnul si se prekrocit reku, aby si si mohl s clovekem promluvit*";
                Sleep(4000);
                cout << endl << "*Reka je velmi hluboka, a omylem si zaseknes nohu a zranis se*" << endl;
                Sleep(4000);
                zdravi = zdravi - 1;

                SetConsoleTextAttribute(hConsole, 4);

                cout << endl << "Tvoje zdravi je nyni: " << zdravi;

                SetConsoleTextAttribute(hConsole, 15);

                Sleep(4000);
                cout << endl << endl << "*Nakonec se ale dostavas na druhy breh reky. Clovek si te okamzite vsimne a jde ti pomoci*";
                Sleep(4000);
                cout << endl << "Pane, je vam neco? *Zepta se muz*";
                Sleep(4000);
                cout << endl << "Jak odpovis?:";

                SetConsoleTextAttribute(hConsole, 10);

                cout << " 1 - Ne nic mi neni dekuju za optani";

                SetConsoleTextAttribute(hConsole, 15);

                cout << " / ";

                SetConsoleTextAttribute(hConsole, 12);

                cout << "2 - Co se staras?" << endl;

                SetConsoleTextAttribute(hConsole, 15);

                cin >> odpoved_muz_u_reky;
                system("cls");

                if (odpoved_muz_u_reky == 2) {

                    cara();
                    reputace -= 1;
                    Sleep(1000);

                    SetConsoleTextAttribute(hConsole, 4);

                    cout << endl << endl << "Tva reputace byla snizena o jeden bod";
                    Sleep(2000);
                    cout << endl << "Reputace: " << reputace << endl;

                    SetConsoleTextAttribute(hConsole, 15);
                }

                cara();
                Sleep(1000);
                cout << endl << endl << "Jste velice odvazny ze jste se takto vrhnul primo do reky";
                Sleep(4000);
                cout << endl << "Pojdte se mnou zavedu vas k jedne vesnici co je pobliz";
                Sleep(4000);
                cout << endl << "*Pomalu odchazis s cizincem do vesnice*" << endl;

            }

        if (odpoved_reka == 2) {

            cara();
                Sleep(1000);
                cout << endl << endl << "*Rozhodnul si se reku neprekrocit, jdes tak hledat nejakou obkliku okolo*";
                Sleep(4500);
                cout << endl << "Po hodine hledani nachazis mensi melcinu po ktere reku prekrocis bez problemu, tvuj cil je nyni jasny, jit na misto kde byl ten clovek a doufat ze tam stale bude";
                Sleep(4500);
                cout << endl << "Nakonec dochazis na misto kde si videl muze, a stale tam je, prichazis za nim a zadas ho o pomoc";
                Sleep(4500);
                cout << endl << endl << "O takze vy jste se ztratil, nebojte nedaleko je vesnice ve ktere ziju, s radosti vas tam zavedu";
                Sleep(4500);
                cout << endl << "*Pomalu odchazis s cizincem do vesnice*" << endl;

        }
            break;

        case 2:

            Sleep(1000);
            cout << endl << endl << "*Rozhodnul si se zustat a cekat, nez nekdo prijde*";
            Sleep(3200);
            cout << endl << "*Cekas cele hodiny ale nikdo neprichazi, zacina se navic pomalu stmivat*" << endl << endl;
            Sleep(4000);
            les();
            cout << endl << "*Chces si:";

            SetConsoleTextAttribute(hConsole, 10);

            cout << " 1 - postavit provizorni pristresek a utratit 20 zlataku";

            SetConsoleTextAttribute(hConsole, 15);

            cout << " / ";

            SetConsoleTextAttribute(hConsole, 12);

            cout << "2 - nebo jen tak pockat a nic neutratit?: *" << endl;

            SetConsoleTextAttribute(hConsole, 15);

            cin >> odpoved_pristresek;
            system("cls");

            if (odpoved_pristresek == 2) {

                cara();
                Sleep(1000);
                cout << endl << endl << "*Rozhodnul si se pristresek si nepostavit. Pomalu tak jenom lezis a cekas na planine. Pomalu se stmiva*";
                Sleep(4500);
                cout << endl << "*Hned jak se zcerna, zacnes slyset podivne zvuky z krovi za tebou, otocis se a koukas na ker*";
                Sleep(4000);
                cout << endl << "*Najednou se objevi divoky vlk, ten na tebe zautoci. Zacnes se branit*" << endl;
                Sleep(2000);
                nastvanyVlk3D();
                Sleep(3000);
                cout << endl << "*Nakonec utok vlka ustojis a zazenes jej, ale pritom te vlk zrani na ruce*" << endl << endl;
                Sleep(4000);

                SetConsoleTextAttribute(hConsole, 4);

                zdravi = zdravi - 2;
                cout << endl << "Tvoje zdravi je nyni: " << zdravi << endl;

                SetConsoleTextAttribute(hConsole, 15);
            }

            if (odpoved_pristresek == 1) {

                SetConsoleTextAttribute(hConsole, 14);

                Sleep(1000);
                penize -= 20;
                cout << endl << endl << "Momentalne mas u sebe: " << penize << " zlataku" << endl;
                Sleep(3000);

                SetConsoleTextAttribute(hConsole, 15);

                cara();
                Sleep(1000);
                cout << endl << endl << "*Rozhodnul si se postavit si pristresek, pomalu jej stavis, pouzivas klacky, klady ale i listi*";
                Sleep(3500);
                cout << endl << "*Nakonec kdyz pristresek postavis, tak akorat padne noc. Schovas se do pristresku a cekas na den*" << endl << endl;
                Sleep(3500);
                pristresok();
            }

                cara();
                Sleep(1000);
                cout << endl << endl << "*Pomalu se probouzis a vidis ze je jiz den. Najednou v dali uvidis stat nejakeho cloveka*";
                Sleep(4000);
                cout << endl << "*Hned jak si jej vsimnes, bezim s nadsenim za nim, konecne nejaky clovek*";
                Sleep(4000);
                cout << endl << endl << "Aaa, kdo pak jste pane? Zepta se te clovek, hned jak k nemu dobehnes";
                Sleep(4000);
                cout << endl << "Jak odpovis_?:";

                SetConsoleTextAttribute(hConsole, 10);

                cout << " 1 - Jsem pouhy pocestny a ztratil jsem se, mohl by jste mi prosim pomoci pane?";

                SetConsoleTextAttribute(hConsole, 15);

                cout << " / ";

                SetConsoleTextAttribute(hConsole, 12);

                cout << "2 - Co je vam do toho? Potrebuju pomoc, to je to" << endl;

                SetConsoleTextAttribute(hConsole, 15);

                cin >> odpoved_panovi;
                system("cls");

                if (odpoved_panovi == 2) {

                    cara();
                    Sleep(1000);

                    SetConsoleTextAttribute(hConsole, 4);

                    reputace -= 1;
                    cout << endl << endl << "Tva reputace byla snizena o jeden bod";
                    Sleep(2000);
                    cout << endl << "Reputace: " << reputace << endl;

                    SetConsoleTextAttribute(hConsole, 15);

                    cara();
                    Sleep(1000);
                    cout << endl << endl << "No prominte ze se ptam pane, ale nevim prece kdo muzete byt";
                    Sleep(3500);
                    cout << endl << "Ale mate stesti pane ze ja mam nejake zpusoby, pomohu vam, nedaleko je vesnice ve ktere bydlim, zavedu vas tam";
                }

                if (odpoved_panovi == 1) {

                    cara();
                    Sleep(1000);

                    SetConsoleTextAttribute(hConsole, 2);

                    reputace += 1;
                    cout << endl << endl << "Tva reputace byla zvysena o jeden bod";
                    Sleep(2000);
                    cout << endl << "Reputace: " << reputace << endl;

                    SetConsoleTextAttribute(hConsole, 15);

                    cara();
                    Sleep(1000);
                    cout << endl << endl << "Jiste pane, nedaleko je vesnice ve ktere ziji, rad vas tam zavedu";
                }

                Sleep(3500);
                cout << endl << endl << "*Pomalu odchazis s cizincem do vesnice o ktere ti rikal*" << endl;

                    break;

                system("cls");
    }
}

void druhylevel(string postava, int &zdravi, int &zdraviNAVIC, int &mana, int &manaNAVIC, int &utok, int &obrana, int &penize, int &reputace, int &Zlodej_Truhel, int &Zlodej_lektvar, int odpoved, int odpoved_mesto, int odpoved_dom, int odpoved_truhla, int odpoved_lektvar, int odpoved_Raedon, int obchod_lektvary, int obchod_zbrane, int obchod_vyzbroj) {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    cara();

    Sleep(1000);
    cout << endl << endl << "*Pokracujes s cizincem na ceste k vesnici. Uz tam skoro budeme, rekne cizinec*";
    Sleep(4000);
    cout << endl << "A vidite? Tamhle uz jsou budovy me vesnice pane, uz tak jenom sedm minut chuze pane";
    Sleep(4000);
    cout << endl << "*Po sedmi minutach vchazis s cizincem do vesnice, ale je to spise vetsi vesnice, takove male mestecko*";
    Sleep(4000);
    cout << endl << endl << "Tak pane vitam vas v me rodne vesnici jmenem:";

    SetConsoleTextAttribute(hConsole, 12);

    cout << " Urth";

    SetConsoleTextAttribute(hConsole, 15);

    cout << ". Pojdme za mnou provedu vas zde";
    Sleep(4000);
    cout << endl << "Vidite tamto? To je obchodni ctvrt, tam muzete koupit prakticky vse co nase kralovstvi nabizi" << endl << endl;
    Sleep(1000);
    vesnice();
    Sleep(4000);

    do {cout << endl << "Chtel by jste se jit pane do nejakeho obchodu podivat?";

    SetConsoleTextAttribute(hConsole, 4);

    cout << " 1 - Do obchodu s lektvary";

    SetConsoleTextAttribute(hConsole, 15);

    cout << " / ";

    SetConsoleTextAttribute(hConsole, 6);

    cout << "2 - Do obchodu se zbranemi";

    SetConsoleTextAttribute(hConsole, 15);

    cout << " / ";

    SetConsoleTextAttribute(hConsole, 8);

    cout << "3 - Do obchodu s vyzbroji";

    SetConsoleTextAttribute(hConsole, 15);

    cout << " / ";

    SetConsoleTextAttribute(hConsole, 14);

    cout << "4 - Nikam nechci";

    SetConsoleTextAttribute(hConsole, 15);

    cin >> odpoved_mesto;
    system("cls");

    switch (odpoved_mesto) {

        case 1:

            cara();
            Sleep(1000);
            cout << endl << endl << "Vitejte pane v obchodu s ";

            SetConsoleTextAttribute(hConsole, 12);

            cout << "lektvary";

            SetConsoleTextAttribute(hConsole, 15);

            cout << ". Co si budete prat?";
            Sleep(2500);

            SetConsoleTextAttribute(hConsole, 14);

            cout << endl << "*V obchodu s lektvary si muzes kupovat vylepseni svych statistik, a to zdravi a manu. Zaroven kdyz do nej vkrocis, automaticky se vylecis" << endl << endl;

            SetConsoleTextAttribute(hConsole, 15);

            lektvaryNaPolicce();

                leceni(postava, zdravi, zdraviNAVIC);
                leceniMana(postava, mana, manaNAVIC);

            Sleep(2000);
            do {

            SetConsoleTextAttribute(hConsole, 12);

            cout << endl << endl << "1 - Lektvar Zivota ";

            SetConsoleTextAttribute(hConsole, 14);

            cout << "_________ Zvysuje celkove ";

            SetConsoleTextAttribute(hConsole, 12);

            cout << "zdravi";

            SetConsoleTextAttribute(hConsole, 14);

            cout << " o jeden bod - 80 zlataku";

            SetConsoleTextAttribute(hConsole, 11);

            cout << endl << "2 - Lektvar Magie ";

            SetConsoleTextAttribute(hConsole, 14);

            cout << "__________Zvysi vasi celkovou ";

            SetConsoleTextAttribute(hConsole, 11);

            cout << "manu";

            SetConsoleTextAttribute(hConsole, 14);

            cout << " o pet bodu - 65 zlataku";

            SetConsoleTextAttribute(hConsole, 15);

            cout << endl << "3 - odejit z obchodu" << endl;

            SetConsoleTextAttribute(hConsole, 14);

            cout << endl << "Vase penize: " << penize;

            SetConsoleTextAttribute(hConsole, 15);

            cin >> obchod_lektvary;
            system("cls");

            if (obchod_lektvary == 1) {

                    if ((penize - 80) < 0) {
                    cout << endl << endl << "Prominte pane, ale nemate dostatek zlata" << endl;
                    obchod_lektvary = 0;
                }

                else {
                zdraviNAVIC += 1;
                zdravi += 1;
                penize -= 80;
                cout << endl << endl << "Takze to bude jeden lektvar pro tady pana";
                Sleep(1500);

                SetConsoleTextAttribute(hConsole, 2);

                cout << endl << "    Celkove zdravi zvyseno o jeden stupen";
                Sleep(1500);

                SetConsoleTextAttribute(hConsole, 12);

                cout << endl << "Zdravi: " << zdravi << endl;
                obchod_lektvary = 0;

                SetConsoleTextAttribute(hConsole, 15);
               }
            }

            if (obchod_lektvary == 2) {

                if ((penize - 65) < 0) {
                    cout << endl << endl << "Prominte pane, ale nemate dostatek zlata" << endl;
                    obchod_lektvary = 0;
                }
                else {
                    mana += 5;
                    manaNAVIC += 5;
                    penize -= 65;
                    cout << endl << endl << "Takze to bude jeden lektvar pro tady pana";
                    Sleep(1500);

                    SetConsoleTextAttribute(hConsole, 2);

                    cout << endl << "    Celkova mana zvysena o pet bodu";
                    Sleep(1500);

                    SetConsoleTextAttribute(hConsole, 11);

                    cout << endl << "Mana: " << mana << endl;
                    obchod_lektvary = 0;

                    SetConsoleTextAttribute(hConsole, 15);
                }
            }


            }while (obchod_lektvary != 3);
            break;

        case 2:

            cara();
            Sleep(1000);
            cout << endl << endl << "Vitejte pane v obchodu se zbranemi. Co si budete prat?";
            Sleep(2500);

            SetConsoleTextAttribute(hConsole, 14);

            cout << endl << "*V obchodu se zbranemi si muzes kupovat zbrane, ktere ti buduvou vylepsovat attack stat. Zaroven kdyz do nej vkrocis, automaticky se vylecis*" << endl << endl;

            SetConsoleTextAttribute(hConsole, 15);

            obrazekMecAKopi();

             leceni(postava, zdravi, zdraviNAVIC);
             leceniMana(postava, mana, manaNAVIC);

            Sleep(2000);
            do {

            SetConsoleTextAttribute(hConsole, 14);

            cout << endl << endl << "1 - Mec Pomsty_________Zvysuje tvuj utok o dva body - 70 zlataku";
            cout << endl << "2 - Kopi Spravedlivych__________Zvysi tvuj utok o jeden bod - 45 zlataku";

            SetConsoleTextAttribute(hConsole, 15);

            cout << endl << "3 - odejit z obchodu" << endl;

            SetConsoleTextAttribute(hConsole, 14);

            cout << endl << "Vase penize: " << penize;

            SetConsoleTextAttribute(hConsole, 15);

            cin >> obchod_zbrane;
            system("cls");

            if (obchod_zbrane == 1) {

                    if ((penize - 70) < 0) {
                    cout << endl << endl << "Prominte pane, ale nemate dostatek zlata" << endl;
                    obchod_zbrane = 0;
                }

                else {
                utok += 2;
                penize -= 70;
                cout << endl << endl << "Takze to bude jeden mec pro tady pana";
                Sleep(1500);

                SetConsoleTextAttribute(hConsole, 2);

                cout << endl << "    Celkovy utok zvysen o dva body";
                Sleep(1500);
                cout << endl << "Utok: " << utok << endl;
                obchod_zbrane = 0;

                SetConsoleTextAttribute(hConsole, 15);
                }
            }

            if (obchod_zbrane == 2) {

                if ((penize - 45) < 0) {
                    cout << endl << endl << "Prominte pane, ale nemate dostatek zlata" << endl;
                    obchod_zbrane = 0;
                }
                else {
                    utok += 1;
                    penize -= 45;
                    cout << endl << endl << "Takze to bude jedno kopi pro tady pana";
                    Sleep(1500);

                    SetConsoleTextAttribute(hConsole, 2);

                    cout << endl << "    Celkovy utok zvysen o jeden bod";
                    Sleep(1500);
                    cout << endl << "Utok: " << utok << endl;
                    obchod_zbrane = 0;

                    SetConsoleTextAttribute(hConsole, 15);
                }
            }


            }while (obchod_zbrane != 3);
            break;

        case 3:

            cara();
            Sleep(1000);
            cout << endl << endl << "Vitejte pane v obchodu se zbroji. Co si budete prat?";

            Sleep(2500);

            SetConsoleTextAttribute(hConsole, 14);

            cout << endl << "*V obchodu se zbroji si muzes kupovat zbroj, ktera ti bude vylepsovat defence stat. Zaroven kdyz do nej vkrocis, automaticky se vylecis*" << endl << endl;

            SetConsoleTextAttribute(hConsole, 15);

            obrazekZbroj();

             leceni(postava, zdravi, zdraviNAVIC);
             leceniMana(postava, mana, manaNAVIC);

            Sleep(2000);
            do {

            SetConsoleTextAttribute(hConsole, 14);

            cout << endl << endl << "1 - Platy Titanu_________Zvysuje tvoji defence o dva body - 80 zlataku";
            cout << endl << "2 - Krouzkova Zbroj__________Zvysi tvoji defence o jeden bod - 50 zlataku";

            SetConsoleTextAttribute(hConsole, 15);

            cout << endl << "3 - odejit z obchodu" << endl;

            SetConsoleTextAttribute(hConsole, 14);

            cout << endl << "Vase penize: " << penize;

            SetConsoleTextAttribute(hConsole, 15);

            cin >> obchod_vyzbroj;
            system("cls");

            if (obchod_vyzbroj == 1) {

                    if ((penize - 80) < 0) {
                    cout << endl << endl << "Prominte pane, ale nemate dostatek zlata" << endl;
                    obchod_vyzbroj = 0;
                }

                else {
                obrana += 2;
                penize -= 80;
                cout << endl << endl << "Takze to bude jedna zbroj pro tady pana";
                Sleep(1500);

                SetConsoleTextAttribute(hConsole, 2);

                cout << endl << "    Celkova obrana zvysena o dva body";
                Sleep(1500);
                cout << endl << "Obrana: " << obrana << endl;
                obchod_vyzbroj = 0;

                SetConsoleTextAttribute(hConsole, 15);
                }
            }

            if (obchod_vyzbroj == 2) {

                if ((penize - 50) < 0) {
                    cout << endl << endl << "Prominte pane, ale nemate dostatek zlata" << endl;
                    obchod_vyzbroj = 0;
                }
                else {
                    obrana += 1;
                    penize -= 50;
                    cout << endl << endl << "Takze to bude jedna zbroj pro tady pana";
                    Sleep(1500);

                    SetConsoleTextAttribute(hConsole, 2);

                    cout << endl << "    Celkova obrana zvysena o jeden bod";
                    Sleep(1500);
                    cout << endl << "Obrana: " << obrana << endl;
                    obchod_vyzbroj = 0;

                    SetConsoleTextAttribute(hConsole, 15);
                }
            }


            }while (obchod_vyzbroj != 3);
            break;

    }
    }while(odpoved_mesto != 4);

    cara();

    Sleep(1000);
    cout << endl << endl << "Inu dobre, nyni vas zavedu do meho domu";
    Sleep(3500);
    cout << endl << "*Odchazis s cizincem do jeho domu, zatimco se snazis zorientovat*";
    Sleep(3500);
    cout << endl << "Tady pane, pojdte, ukazu vam to vevnitr" << endl;

    cara();

    Sleep(1000);
    cout << endl << endl << "Takze, budte tu jako doma, tak za 20 minut se vratim, tak chvilku pockejte";
    Sleep(3500);
    cout << endl << "*Tak jsi nyni sam doma, chcete nekam jit?* ";

    SetConsoleTextAttribute(hConsole, 10);

    cout << "1 - Do kuchyne";

    SetConsoleTextAttribute(hConsole, 15);

    cout << " / ";

    SetConsoleTextAttribute(hConsole, 12);

    cout << "2 - Do loznice" << endl;

    SetConsoleTextAttribute(hConsole, 15);

    cin >> odpoved_dom;
    system("cls");

    cara();

    Sleep(1000);

    switch (odpoved_dom) {

        case 1:

            cout << endl << endl << "*Rozhodnul si se jit do muzovi kuchyne, pomalu se rozhlizis*";
            Sleep(3500);
            cout << endl << "*Najednou uvidis nejakou truhlici, je to velka truhlice a vypada ze v ni bude neco velkeho*" << endl << endl;
            Sleep(500);
            obrazekTruhla();
            Sleep(3500);
            cout << endl << "*Chces se do ni podivat?";

            SetConsoleTextAttribute(hConsole, 10);

            cout << " 1 - Ano (Muze mit nasledky)";

            SetConsoleTextAttribute(hConsole, 15);

            cout << " / ";

            SetConsoleTextAttribute(hConsole, 12);

            cout << "2 - Ne*";

            SetConsoleTextAttribute(hConsole, 15);

            cin >> odpoved_truhla;
            system("cls");

            if (odpoved_truhla == 1) {

                cara();
                Zlodej_Truhel = 1;
                Sleep(1000);
                cout << endl << endl << "*Rozhodnul si se podivat do muzovi truhly*";
                Sleep(2500);
                cout << endl << "*Oteviras ji a nachazis ";

                SetConsoleTextAttribute(hConsole, 14);

                cout << "80 zlatych minci";

                SetConsoleTextAttribute(hConsole, 15);

                cout << ", pomalu si je beres do sve kapsy*" << endl;
                Sleep(3000);
                penize += 80;

                SetConsoleTextAttribute(hConsole, 14);

                cout << "Penize: " << penize << endl;

                SetConsoleTextAttribute(hConsole, 15);
            }

            if (odpoved_truhla == 2) {

                cara();
                Sleep(1000);
                cout << endl << "*Rozhodnul si se do truhly nepodivat, pomalu se tak vybiras se posadit na zidli a pockat na muze*" << endl;
            }
                break;

        case 2:

            cout << endl << endl << "*Rozhodnul si se jit podivat do muzovi loznice*";
            Sleep(3500);
            cout << endl << "*Pod posteli ale nachazis nejakou lahvicku s nejakou tekutinou*";
            Sleep(2500);
            cout << endl << "*Je to ";

            SetConsoleTextAttribute(hConsole, 12);

            cout << "lektvar zivota";

            SetConsoleTextAttribute(hConsole, 15);

            cout << ", ten ti zvedne zivoty o jeden bod*" << endl;
            Sleep(500);
            obrazekLektvar();
            Sleep(3000);
            cout << endl << "*Co udelas?";

            SetConsoleTextAttribute(hConsole, 10);

            cout << " 1 - Vypit jej (Muze mit nasledky)";

            SetConsoleTextAttribute(hConsole, 15);

            cout << " / ";

            SetConsoleTextAttribute(hConsole, 12);

            cout << "2 - Vratit jej*";

            SetConsoleTextAttribute(hConsole, 15);

            cin >> odpoved_lektvar;
            system("cls");

            if (odpoved_lektvar == 1) {

                cara();
                Zlodej_lektvar = 1;
                Sleep(1000);
                cout << endl << endl << "*Rozhodnul si se lektvar vypit, nyni je tve zdravi zvyseno o jeden bod a jsi vylecen*" << endl;
                Sleep(3000);

                zdraviNAVIC += 1;

                leceni(postava, zdravi, zdraviNAVIC);

                SetConsoleTextAttribute(hConsole, 12);

                cout << endl << "Zdravi: " << zdravi << endl;

                SetConsoleTextAttribute(hConsole, 15);
            }

            if (odpoved_lektvar == 2) {

                cara();
                Sleep(1000);
                cout << endl << endl << "*Rozhodnul si se lektvar nevypit, pomalu jej vracis pod postel*";
                Sleep(3000);
                cout << endl << "*Pomalu odchazis se posadit na zidli a pockat na muze*" << endl;
            }

            break;
    }
        cara();
        cout << endl << endl << "*Cekas asi 15 minut, pote se pomalu zacinaji otevirat dvere a muz vkraci dovnitr*";
        Sleep(3500);
        cout << endl << "Zdravim vas, tak jsem prisel z mensiho nakupu, tady vemte si jedno jablko";
        Sleep(3500);
        cout << endl << "*Muz ti hazi jablko a ty jej snis*" << endl;

                leceni(postava, zdravi, zdraviNAVIC);

        Sleep(3000);

        SetConsoleTextAttribute(hConsole, 12);

        cout << endl << "Zdravi bylo obnoveno " << "/ Zdravi: " << zdravi << endl;

        SetConsoleTextAttribute(hConsole, 15);

        Sleep(3500);
        cout << endl << "Tak pane, vite mam na vas prosbu, vypadate vskutku jako zdatny muz";
        Sleep(3500);
        cout << endl << "Vite mame problem s jednim monstrem co zije v horach nad nasi vesnici, je to divoky ";

        SetConsoleTextAttribute(hConsole, 9);

        cout << "Raedon";

        SetConsoleTextAttribute(hConsole, 15);

        Sleep(3500);
        cout << endl << "Vypada jako medved ale ma silu blesku a je velice nebezpecny, v jednom kuse unasi nase jidlo a zvirata, par nasich lidi uz i usmrtil";
        Sleep(4000);
        cout << endl << "Chtel jsem se tedy zeptal jestli by jste jej mohl zkusit usmrtit, moc by jste nam tim pomohl";
        Sleep(3000);
        cout << endl << "Jak odpovis?";

        SetConsoleTextAttribute(hConsole, 10);

        cout << " 1 - Dobre udelam to, ale jenom za odmenu";

        SetConsoleTextAttribute(hConsole, 15);

        cout << " / ";

        SetConsoleTextAttribute(hConsole, 12);

        cout << "2 - Dobre, udelam to";

        SetConsoleTextAttribute(hConsole, 15);

        cin >> odpoved_Raedon;
        system("cls");

        if (odpoved_Raedon == 1) {

            if (reputace < 0) {

                cara();
                Sleep(1000);
                cout << endl << endl << "No pane, taky jsem v obchode zaslechl ze mate zlou povest, takze bych se mirnil";
                Sleep(3500);
                cout << endl << "Ale samozrejme penize vam vesnice vyplati, a mozna budete mit zde i lepsi reputaci";
            }

            else {

                cara();
                Sleep(1000);
                cout << endl << endl << "No samozrejme pane, vesnice vam vyplati hodne penez to si muzete byt jisty";
            }
        }

        if (odpoved_Raedon == 2) {

            cara();
            Sleep(1000);
            cout << endl << endl << "Pani to je od vas uslechtile, a ani si nerikate o penize" << endl;
            Sleep(2500);

            SetConsoleTextAttribute(hConsole, 2);

            reputace += 1;
            cout << endl << "Tva reputace byla zvysena o jeden bod / Reputace: " << reputace << endl;

            SetConsoleTextAttribute(hConsole, 15);

            Sleep(3000);
            cout << endl << "Ale nebojte, vesnice vam da dost penez";
        }
        Sleep(3000);
        cout << endl << "Zde mate jeste mapu pane, zavede vas az do jeskyne kde to monstrum prebyva";
        Sleep(3500);
        cout << endl << "A jeste jedna vec; ";

        SetConsoleTextAttribute(hConsole, 14);

        cout << "Hodne stesti pane";

        SetConsoleTextAttribute(hConsole, 15);

        Sleep(3000);
        cout << endl << endl << "Beres mapu, podekujes muzovi a odchazis zabit to monstrum" << endl << endl;
        Sleep(6000);

        system("cls");

}

void tretilevel(string postava, int &zdravi, int &zdraviNAVIC, int &mana, int &manaNAVIC,
                 int &utok, int &obrana, int &level, int &odpoved_zebrik, string &nepritel_jmeno, int &utok_nepritel,
                 int &obrana_nepritel, int &zdravi_nepritel, string jmeno, string schopnost1, string schopnost2, string schopnost3, int schopnost[3], int &odpoved_radni, int &reputace, int &penize) {

        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        cara();
        Sleep(1000);
        cout << endl << endl << "*Pomalu se vydavas do jeskyne o ktere ti muz rikal, podivas se do mapy*";
        Sleep(3500);
        cout << endl << "*Tam je napsano ze se nachazi az na vrchu teto hory na kterou prave jdes*";
        Sleep(3500);
        cout << endl << "*Je obri, opravdu obri, kdyby tak existoval zpusob jak se rychle dostat nahoru*";
        Sleep(3500);
        cout << endl << "*Podivas se nahoru a najednou vidis dlouhy zebrik*";
        Sleep(3500);
        cout << endl << "Chces jit po nem nahoru?";

        SetConsoleTextAttribute(hConsole, 10);

        cout << " 1 - Ano";

        SetConsoleTextAttribute(hConsole, 15);

        cout << " / ";

        SetConsoleTextAttribute(hConsole, 12);

        cout << "2 - Ne" << endl;

        SetConsoleTextAttribute(hConsole, 15);

        cin >> odpoved_zebrik;
        system("cls");

        switch (odpoved_zebrik) {

            case 1:

                cara();
                Sleep(1000);
                cout << endl << endl << "*Rozhodnul si se vysplhat po zebriku*";
                Sleep(3500);
                cout << endl << "*Pomalu splhas po zebriku do vysin, najednou ale uslysis blby zvuk*";
                Sleep(3500);
                cout << endl << "*Zebrik zacina praskat, jsi v panice, zacnes splhat rychleji a rychleji*";
                Sleep(3500);
                cout << endl << "*Splhas jako o zivot (protoze ti o neho jde), nakonec ale vysplhas az nahoru a rychle se posadis na vyclenek, kde konci zebrik*";
                Sleep(4000);
                cout << endl << "*Zebrik najednou padne a rozlomi se, ty tam jenom sedis a snazis se chytnout dech*";
                Sleep(3500);
                cout << endl << "*Otocis se a vidis jeskyni, podivas se do mapy a je to ta jeskyne kterou hledas, dokazal jsi to*" << endl;

                break;

            case 2:

                cara();
                Sleep(1000);
                cout << endl << endl << "*Rozhodnul si se nejit po zebriku, ale misto toho splhat dale*";
                Sleep(3500);
                cout << endl << "*Jdes dale a dale po skale, najednou nachazis nejaky vyklenek v stene skaly*";
                Sleep(3500);
                cout << endl << "*,,Co to je?,, Rikas si, a rozhodnes se tam podivat*";
                Sleep(3200);
                cout << endl << "*Nachazis zde tajemny lektvar, je modry, to bude lektvar";

                SetConsoleTextAttribute(hConsole, 11);

                cout << " many ";

                SetConsoleTextAttribute(hConsole, 15);

                cout << "rikas si*";
                Sleep(3500);
                cout << endl << "*Rozhodnes se jej vypit*" << endl;
                Sleep(3000);

                SetConsoleTextAttribute(hConsole, 11);

                cout << endl << "*Tva mana je zvysena o tri body*";
                Sleep(2000);
                manaNAVIC += 3;
                leceniMana(postava, mana, manaNAVIC);
                cout << endl << "Mana: " << mana << endl;

                SetConsoleTextAttribute(hConsole, 15);

                cara();
                Sleep(1000);
                cout << endl << endl << "*Splhas a splhas vzhuru, nachazis zde nejake schody*";
                Sleep(3500);
                cout << endl << "*Rozhodnes se po nich vyslapat vzhuru, nachazis zde jeskyni*";
                Sleep(3500);
                cout << endl << "*Je to ta ona jeskyne o ktere rikal muz, dokazal jsi to*" << endl;

                break;
        }

        Sleep(5000);
        cara();
        Sleep(1000);
        cout << endl << endl << "*Vkracis do jeskyne, najednou se ozve mocny rev*";
        Sleep(3500);
        cout << endl << "*Z temnoty na tebe vybehne mocne zvire podobne medvedu*";
        Sleep(3500);
        cout << endl << "*To je ten onen ";

        SetConsoleTextAttribute(hConsole, 9);

        cout << "Raedon";

        SetConsoleTextAttribute(hConsole, 15);

        cout << ", musis jej nyni skolit*" << endl << endl;
        Sleep(500);
        obrazekMedved();
        Sleep(5000);

        // Zápas Raedon //

        nepritel_jmeno = "Raedon";
        utok_nepritel = 4;
        obrana_nepritel = 3;
        zdravi_nepritel = 8;
        Battle(zdravi, mana, obrana, utok, zdravi_nepritel, utok_nepritel, obrana_nepritel, nepritel_jmeno, jmeno, level, schopnost1, schopnost2, schopnost3, schopnost);

        system("cls");

        if (zdravi <= 0) {

            SetConsoleTextAttribute(hConsole, 4);
            cout << endl << endl << "Umrel jsi, zkus to znova";
            SetConsoleTextAttribute(hConsole, 15);
            exit(0);
        }

        int sancepenize = rand() % 2 + 1;

        if (sancepenize == 1) {
            Sleep(1500);
            cout << endl << "Gratuluji z tohoto monstra jste ziskal ";
            SetConsoleTextAttribute(hConsole, 14);
            cout << "80 zlatych minci";
            Sleep(4000);
            penize += 80;
            cout << endl << endl << "Penize: " << penize;
            SetConsoleTextAttribute(hConsole, 15);
            Sleep(5000);
            system("cls");
        }

        system("cls");

        cout << endl;
        cara();
        Sleep(1000);
        cout << endl << endl << "*Dokazal jsi to, porazil jsi ho, jsi pravy hrdina*" << endl;
        Sleep(3500);

        SetConsoleTextAttribute(hConsole, 2);

        level += 1;
        cout << endl << "Tvuj level se zvysil / Level: " << level;
        Sleep(3500);

        LevelUP(zdraviNAVIC, utok, obrana, manaNAVIC);

        leceni(postava, zdravi, zdraviNAVIC);
        leceniMana(postava, mana, manaNAVIC);

        cout << endl << endl << "Vsechny tve statistiky byly zvyseny o jeden bod!";
        Sleep(2000);

        SetConsoleTextAttribute(hConsole, 12);

        cout << endl << "Zdravi: " << zdravi;

        SetConsoleTextAttribute(hConsole, 14);

        cout << endl << "Utok: " << utok;
        cout << endl << "Obrana: " << obrana;

        SetConsoleTextAttribute(hConsole, 11);

        cout << endl << "Mana: " << mana;

        SetConsoleTextAttribute(hConsole, 15);

        Sleep(3000);
        cout << endl << endl << "*Nyni musis jit zpet do vesnice Urth a rict o tom lidem!*" << endl;
        Sleep(7500);

        cara();
        Sleep(1000);
        cout << endl << endl << "*Pomalu schazis horu a vydavas se zpet do vesnice*";
        Sleep(3500);
        cout << endl << "*Po asi hodine chuze zacinas videt strechy domu ve vesnici*";
        Sleep(3500);
        cout << endl << "*Po chvili vchazis do vesnice a jdes hned za muzem, ktery te predtim na chvili ubytoval*" << endl;
        Sleep(3500);

        cara();
        Sleep(1000);
        cout << endl << endl << "Aaa, pane vy jste se vratil, to je uzasne!";
        Sleep(3500);
        cout << endl << "*Pomalu ukazujes panovi hlavu Raedona jako dukaz ze jsi jej skolil*";
        Sleep(3500);
        cout << endl << "Pani, pane vy jste to dokazal, neverim vlastnim ocim" << endl;
        Sleep(3250);
        reputace += 1;

        SetConsoleTextAttribute(hConsole, 2);

        cout << endl << endl << "Reputace byla zvysena o jeden bod / Reputace: " << reputace << endl;

        SetConsoleTextAttribute(hConsole, 15);

        Sleep(3250);
        cout << endl << endl << "Musim to jit nyni rict cele vesnici a hlavne radnimu";
        Sleep(3500);
        cout << endl << "*Muz se rozebehl z dveri sveho domu a rychle utika za radnim mesta*";
        Sleep(3600);

        system("cls");

        cout << endl << "*Po pul hodine cekani u muze doma, prichazi tvuj znamy pan a jeste jeden muz*";
        Sleep(3500);
        cout << endl << "Pane toto je radni mesta, prisel se sam presvedcit";
        Sleep(3500);
        cout << endl << "*Prikyvujes hlavou a ukazes radnimu Raedonovu hlavu, radni nachvili naprosto onemi a potom rekne*";
        Sleep(2850);
        cout << endl << "To, je neuveritelne pane, pomohl jste nasi vesnici nesmirne, nevim ani jak se vam odvecit";
        Sleep(3500);
        cout << endl << "Za to co jste pro nas udelal zasluhujete obri odmenu, a nyni vam ji tedy davam";
        Sleep(3500);
        cout << endl << "*Radni vytahuje ze sve kapsi malou zlatou truhlicku, kterou ti preda*";
        Sleep(3500);
        cout << endl << "Pokud dovolite pane rad bych se vam prestavil, me jmeno je ";

        SetConsoleTextAttribute(hConsole, 14);

        cout << "Rames";

        SetConsoleTextAttribute(hConsole, 15);

        cout << ", jak jste jiz slysel, jsem radnim tohoto mesta";
        Sleep(4000);
        cout << endl << "Pokud dovolite pane, rad bych vam zaridil audienci s ";

        SetConsoleTextAttribute(hConsole, 14);

        cout << "kralovskym radcem";

        SetConsoleTextAttribute(hConsole, 15);

        cout << " teto provincie";
        Sleep(3500);
        cout << endl << "Hmm, to je velmi skvela nabidka, jak odpovis?:";

        SetConsoleTextAttribute(hConsole, 10);

        cout << " 1 - Ano pane, bude mi velkou cti";

        SetConsoleTextAttribute(hConsole, 15);

        cout << " / ";

        SetConsoleTextAttribute(hConsole, 12);

        cout << "2 - Ne, nemam zajem";

        SetConsoleTextAttribute(hConsole, 15);

        cin >> odpoved_radni;
        Sleep(2000);

        if (odpoved_radni == 1) {

            system("cls");
            cout << endl << "O pane jsem rad ze souhlasite, kralovsky radce bude pocten ze vas muze poznat, tim jsem si jist";
            Sleep(3500);
            cout << endl << "Pomalu se zvedas a odchazis s radnim";
            Sleep(5000);

        }

        else {

            system("cls");
            cout << endl << "Ale pane, prece nezmeskate tuto skvelou prilezitost";
            Sleep(3500);
            cout << endl << "Ale, kdyby nahodou, techto ";

            SetConsoleTextAttribute(hConsole, 14);

            cout << "150 zlataku";

            SetConsoleTextAttribute(hConsole, 15);

            cout << " navic vas urcite presvedci" << endl ;
            penize += 150;

            Sleep(3500);
            cout << endl << "*Muz ti nabidl penize, a ty i presto ze jsi si puvodne nechtel si je beres*";
            Sleep(3500);

            SetConsoleTextAttribute(hConsole, 14);

            cout << endl << endl << "Aktualni stav tve penezenky: " << penize;

            SetConsoleTextAttribute(hConsole, 15);

            Sleep(3250);
            cout << endl << endl << "Pomalu se tedy zvedas a odchazis s radnim";
            Sleep(5000);

        }

        system("cls");

}

void ctvrtylevel(string postava, int &zdravi, int &zdraviNAVIC, int &mana, int &manaNAVIC,
                 int &utok, int &obrana, int &level, string &nepritel_jmeno, int &utok_nepritel,
                 int &obrana_nepritel, int &zdravi_nepritel, string jmeno, string schopnost1, string schopnost2, string schopnost3, int schopnost[3], int &reputace, int &penize) {

            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

            cara();
            Sleep(1000);
            cout << endl << endl << "*Pomalu prochazis s radnim vesnici, a nakonec dorazis k jeho vozu*";
            Sleep(3500);
            cout << endl << "Tak pane, nasednete, odvezu vas tedy az za kralovskym radnim jak jsem slibil";
            Sleep(3500);
            cout << endl << "*Nasedas a vydavas se s radnim na cestu*" << endl <<endl;
            Sleep(4000);

            cara();
            Sleep(1000);
            cout << endl << endl << "*Po asi tak hodine cesty najednou ucitite v koci obri ranu z venku*";
            Sleep(4000);
            cout << endl << "Co to do haje bylo?! *Zepta se radni*";
            Sleep(3500);
            cout << endl << "*Najednou z venku uslysis rev neceho diveho*";
            Sleep(3500);
            cout << endl << "*Rozhodnes se vystoupit a utkat se s tim co je venku*";
            Sleep(3500);
            cout << endl << "*Uvidis tam nejake stvoreni podobne vlku, ale ma velmi dlouhe tesaky*";
            Sleep(3500);
            cout << endl << "Proboha, to je ";

            SetConsoleTextAttribute(hConsole, 12);

            cout << "Unrith";

            SetConsoleTextAttribute(hConsole, 15);

            cout << " *Zakrici radni z vozu* Davejte si pozor pane!";
            Sleep(5000);

            // Zápas Unrith //

        nepritel_jmeno = "Unrith";
        utok_nepritel = 5;
        obrana_nepritel = 4;
        zdravi_nepritel = 7;
        Battle(zdravi, mana, obrana, utok, zdravi_nepritel, utok_nepritel, obrana_nepritel, nepritel_jmeno, jmeno, level, schopnost1, schopnost2, schopnost3, schopnost);

        system("cls");

        if (zdravi <= 0) {

            SetConsoleTextAttribute(hConsole, 4);
            cout << endl << endl << "Umrel jsi, zkus to znova";
            SetConsoleTextAttribute(hConsole, 15);
            exit(0);
        }

        int sancepenize = rand() % 2 + 1;

        if (sancepenize == 1) {
            Sleep(1500);
            cout << endl << "Gratuluji z tohoto monstra jste ziskal ";
            SetConsoleTextAttribute(hConsole, 14);
            cout << "50 zlatych minci";
            Sleep(4000);
            penize += 50;
            cout << endl << endl << "Penize: " << penize;
            SetConsoleTextAttribute(hConsole, 15);
            Sleep(5000);
            system("cls");
        }

            system("cls");

            cout << endl << "*Dokazal jsi to, porazil jsi to dive zvire!*";
            Sleep(4000);

            SetConsoleTextAttribute(hConsole, 2);

            cout << endl << endl << "Tve zkusenosti byly zvyseny, poraz jeste jedno monstrum a budes mit novy level!" << endl << endl;
            Sleep(4000);

            SetConsoleTextAttribute(hConsole, 15);

            cara();
            Sleep(1000);
            cout << endl << endl << "Pane! Vy jste to dokazal! Ten pan ve vesnici nelhal, jste opravdu unikatni";
            Sleep(4000);
            cout << endl << "*Vycerpany se zvedas a jdes zpet do vozu, Pan na tebe stale s uzasem hledi*";
            Sleep(4000);
            cout << endl << "Pane, musim rict ze na me stale delate vetsi a vetsi dojem, rekne radni a poruci ridici aby sel dal";
            Sleep(6500);
            system("cls");

            cara();
            Sleep(1000);
            cout << endl << endl << "*Po asi tak dvou hodinach cesty dorazis do mesta, je to opravdu obri mesto, Metropole*";
            Sleep(3500);
            cout << endl << "Tak pane, vitejte v ";

            SetConsoleTextAttribute(hConsole, 12);

            cout << "Ilrathu";

            SetConsoleTextAttribute(hConsole, 15);

            cout << ", mestu svetla!";
            Sleep(3500);
            cout << endl << "Je to hlavni mesto naseho kralovstvi, a sidlo vlady a hlavne i naseho krale";
            Sleep(3500);
            cout << endl << "Nyni jak jsem slibil vas zavedu ke kralovskemu radnimu, ma sidlo asi 10 minut od bran mesta";
            Sleep(3500);
            cout << endl << "*Po asi tak sedmi minutach na tebe radni opet promluvi*";
            Sleep(3500);
            cout << endl << "Ah, vidite tamto pane? To je ";

            SetConsoleTextAttribute(hConsole, 14);

            cout << "chram Trukal";

            SetConsoleTextAttribute(hConsole, 15);

            cout << ", je to nejvetsi chram na celem Progongardu, zasvecen ";

            SetConsoleTextAttribute(hConsole, 11);

            cout << "Laurimu";

            SetConsoleTextAttribute(hConsole, 15);

            cout << ", bohu svetla";
            Sleep(4100);
            cout << endl << "*Radni najednou poruci ridici aby nachvili zastavil*";
            Sleep(3500);
            cout << endl << "A jeste neco pane, primo zde je obchodni ctvrt" << endl;
            Sleep(4000);

            int odpoved_mesto;
            int obchod_lektvary;
            int obchod_zbrane;
            int obchod_vyzbroj;

            do {cout << endl << "Chtel by jste se jit pane do nejakeho obchodu podivat?";

    SetConsoleTextAttribute(hConsole, 4);

    cout << " 1 - Do obchodu s lektvary";

    SetConsoleTextAttribute(hConsole, 15);

    cout << " / ";

    SetConsoleTextAttribute(hConsole, 6);

    cout << "2 - Do obchodu se zbranemi";

    SetConsoleTextAttribute(hConsole, 15);

    cout << " / ";

    SetConsoleTextAttribute(hConsole, 8);

    cout << "3 - Do obchodu s vyzbroji";

    SetConsoleTextAttribute(hConsole, 15);

    cout << " / ";

    SetConsoleTextAttribute(hConsole, 14);

    cout << "4 - Nikam nechci";

    SetConsoleTextAttribute(hConsole, 15);

    cin >> odpoved_mesto;
    system("cls");

    switch (odpoved_mesto) {

        case 1:

            cara();
            Sleep(1000);
            cout << endl << endl << "Vitejte pane v obchodu s ";

            SetConsoleTextAttribute(hConsole, 12);

            cout << "lektvary";

            SetConsoleTextAttribute(hConsole, 15);

            cout << ". Co si budete prat?";
            Sleep(2500);

            SetConsoleTextAttribute(hConsole, 14);

            cout << endl << "*V obchodu s lektvary si muzes kupovat vylepseni svych statistik, a to zdravi a manu. Zaroven kdyz do nej vkrocis, automaticky se vylecis" << endl << endl;

            SetConsoleTextAttribute(hConsole, 15);

            lektvaryNaPolicce();

                leceni(postava, zdravi, zdraviNAVIC);
                leceniMana(postava, mana, manaNAVIC);

            Sleep(2000);
            do {

            SetConsoleTextAttribute(hConsole, 12);

            cout << endl << endl << "1 - Lektvar Zivota+ ";

            SetConsoleTextAttribute(hConsole, 14);

            cout << "_________ Zvysuje celkove ";

            SetConsoleTextAttribute(hConsole, 12);

            cout << "zdravi";

            SetConsoleTextAttribute(hConsole, 14);

            cout << " o dva body - 100 zlataku";

            SetConsoleTextAttribute(hConsole, 11);

            cout << endl << "2 - Lektvar Magie ";

            SetConsoleTextAttribute(hConsole, 14);

            cout << "__________Zvysi vasi celkovou ";

            SetConsoleTextAttribute(hConsole, 11);

            cout << "manu";

            SetConsoleTextAttribute(hConsole, 14);

            cout << " o pet bodu - 70 zlataku";

            SetConsoleTextAttribute(hConsole, 15);

            cout << endl << "3 - odejit z obchodu" << endl;

            SetConsoleTextAttribute(hConsole, 14);

            cout << endl << "Vase penize: " << penize;

            SetConsoleTextAttribute(hConsole, 15);

            cin >> obchod_lektvary;
            system("cls");

            if (obchod_lektvary == 1) {

                    if ((penize - 100) < 0) {
                    cout << endl << endl << "Prominte pane, ale nemate dostatek zlata" << endl;
                    obchod_lektvary = 0;
                }

                else {
                zdraviNAVIC += 2;
                zdravi += 2;
                penize -= 100;
                cout << endl << endl << "Takze to bude jeden lektvar pro tady pana";
                Sleep(1500);

                SetConsoleTextAttribute(hConsole, 2);

                cout << endl << "    Celkove zdravi zvyseno o dva stupne";
                Sleep(1500);

                SetConsoleTextAttribute(hConsole, 12);

                cout << endl << "Zdravi: " << zdravi << endl;
                obchod_lektvary = 0;

                SetConsoleTextAttribute(hConsole, 15);
               }
            }

            if (obchod_lektvary == 2) {

                if ((penize - 70) < 0) {
                    cout << endl << endl << "Prominte pane, ale nemate dostatek zlata" << endl;
                    obchod_lektvary = 0;
                }
                else {
                    mana += 5;
                    manaNAVIC += 5;
                    penize -= 70;
                    cout << endl << endl << "Takze to bude jeden lektvar pro tady pana";
                    Sleep(1500);

                    SetConsoleTextAttribute(hConsole, 2);

                    cout << endl << "    Celkova mana zvysena o pet bodu";
                    Sleep(1500);

                    SetConsoleTextAttribute(hConsole, 11);

                    cout << endl << "Mana: " << mana << endl;
                    obchod_lektvary = 0;

                    SetConsoleTextAttribute(hConsole, 15);
                }
            }


            }while (obchod_lektvary != 3);
            break;

        case 2:

            cara();
            Sleep(1000);
            cout << endl << endl << "Vitejte pane v obchodu se zbranemi. Co si budete prat?";
            Sleep(2500);

            SetConsoleTextAttribute(hConsole, 14);

            cout << endl << "*V obchodu se zbranemi si muzes kupovat zbrane, ktere ti buduvou vylepsovat attack stat. Zaroven kdyz do nej vkrocis, automaticky se vylecis*" << endl << endl;

            SetConsoleTextAttribute(hConsole, 15);

            obrazekMecAKopi();

             leceni(postava, zdravi, zdraviNAVIC);
             leceniMana(postava, mana, manaNAVIC);

            Sleep(2000);
            do {

            SetConsoleTextAttribute(hConsole, 14);

            cout << endl << endl << "1 - Rutrova Cepel_________Zvysuje tvuj utok o dva body - 80 zlataku";
            cout << endl << "2 - Aekasova Dyka__________Zvysi tvuj utok o jeden bod - 50 zlataku";

            SetConsoleTextAttribute(hConsole, 15);

            cout << endl << "3 - odejit z obchodu" << endl;

            SetConsoleTextAttribute(hConsole, 14);

            cout << endl << "Vase penize: " << penize;

            SetConsoleTextAttribute(hConsole, 15);

            cin >> obchod_zbrane;
            system("cls");

            if (obchod_zbrane == 1) {

                    if ((penize - 80) < 0) {
                    cout << endl << endl << "Prominte pane, ale nemate dostatek zlata" << endl;
                    obchod_zbrane = 0;
                }

                else {
                utok += 2;
                penize -= 80;
                cout << endl << endl << "Takze to bude jedna cepel pro tady pana";
                Sleep(1500);

                SetConsoleTextAttribute(hConsole, 2);

                cout << endl << "    Celkovy utok zvysen o dva body";
                Sleep(1500);
                cout << endl << "Utok: " << utok << endl;
                obchod_zbrane = 0;

                SetConsoleTextAttribute(hConsole, 15);
                }
            }

            if (obchod_zbrane == 2) {

                if ((penize - 50) < 0) {
                    cout << endl << endl << "Prominte pane, ale nemate dostatek zlata" << endl;
                    obchod_zbrane = 0;
                }
                else {
                    utok += 1;
                    penize -= 50;
                    cout << endl << endl << "Takze to bude jedna dyka pro tady pana";
                    Sleep(1500);

                    SetConsoleTextAttribute(hConsole, 2);

                    cout << endl << "    Celkovy utok zvysen o jeden bod";
                    Sleep(1500);
                    cout << endl << "Utok: " << utok << endl;
                    obchod_zbrane = 0;

                    SetConsoleTextAttribute(hConsole, 15);
                }
            }


            }while (obchod_zbrane != 3);
            break;

        case 3:

            cara();
            Sleep(1000);
            cout << endl << endl << "Vitejte pane v obchodu se zbroji. Co si budete prat?";

            Sleep(2500);

            SetConsoleTextAttribute(hConsole, 14);

            cout << endl << "*V obchodu se zbroji si muzes kupovat zbroj, ktera ti bude vylepsovat defence stat. Zaroven kdyz do nej vkrocis, automaticky se vylecis*" << endl << endl;

            SetConsoleTextAttribute(hConsole, 15);

            obrazekZbroj();

             leceni(postava, zdravi, zdraviNAVIC);
             leceniMana(postava, mana, manaNAVIC);

            Sleep(2000);
            do {

            SetConsoleTextAttribute(hConsole, 14);

            cout << endl << endl << "1 - Paliho Plast_________Zvysuje tvoji defence o dva body - 90 zlataku";
            cout << endl << "2 - Zlata Zbroj__________Zvysi tvoji defence o jeden bod - 60 zlataku";

            SetConsoleTextAttribute(hConsole, 15);

            cout << endl << "3 - odejit z obchodu" << endl;

            SetConsoleTextAttribute(hConsole, 14);

            cout << endl << "Vase penize: " << penize;

            SetConsoleTextAttribute(hConsole, 15);

            cin >> obchod_vyzbroj;
            system("cls");

            if (obchod_vyzbroj == 1) {

                    if ((penize - 90) < 0) {
                    cout << endl << endl << "Prominte pane, ale nemate dostatek zlata" << endl;
                    obchod_vyzbroj = 0;
                }

                else {
                obrana += 2;
                penize -= 90;
                cout << endl << endl << "Takze to bude jedna zbroj pro tady pana";
                Sleep(1500);

                SetConsoleTextAttribute(hConsole, 2);

                cout << endl << "    Celkova obrana zvysena o dva body";
                Sleep(1500);
                cout << endl << "Obrana: " << obrana << endl;
                obchod_vyzbroj = 0;

                SetConsoleTextAttribute(hConsole, 15);
                }
            }

            if (obchod_vyzbroj == 2) {

                if ((penize - 60) < 0) {
                    cout << endl << endl << "Prominte pane, ale nemate dostatek zlata" << endl;
                    obchod_vyzbroj = 0;
                }
                else {
                    obrana += 1;
                    penize -= 60;
                    cout << endl << endl << "Takze to bude jedna zbroj pro tady pana";
                    Sleep(1500);

                    SetConsoleTextAttribute(hConsole, 2);

                    cout << endl << "    Celkova obrana zvysena o jeden bod";
                    Sleep(1500);
                    cout << endl << "Obrana: " << obrana << endl;
                    obchod_vyzbroj = 0;

                    SetConsoleTextAttribute(hConsole, 15);
                }
            }


            }while (obchod_vyzbroj != 3);
            break;

    }
    }while(odpoved_mesto != 4);

    system("cls");

    cara();
    Sleep(1000);
    cout << endl << endl << "Tak pane, pojdte, muzeme uz jit pesky, je to opravdu velmi blizko";
    Sleep(3500);
    cout << endl << "*Vydavas se s muzem tedy dale. Pomalu prochazite namestim mesta*";
    Sleep(3500);
    cout << endl << "*Nakonec stojite pred velkou honosnou budovou se zlatym zdobenim*";
    Sleep(3500);
    cout << endl << "Tak pane, jsme tady, tady sidli kralovsky radce, nez vstoupime dovnitr chci se vas neco zeptat";
    Sleep(3750);
    cout << endl << "Kolik toho znate o nasi kulture a podobne? Nezdate se totiz jako zdejsi";
    Sleep(3500);
    cout << endl << "*Prikyvnes hlavou a reknes, ze sam vlastne nevis*";
    Sleep(3500);
    cout << endl << "Dobre, tak to bych vam mel neco predtim jeste vysvetlit";
    Sleep(3500);
    cout << endl << "V kralovstvi mame pet kralovskych radcu, kazdy ridi jednu z peti provincii";
    Sleep(3500);
    cout << endl << "Nyni jdeme za radcem ktery se jmenuje ";

    SetConsoleTextAttribute(hConsole, 12);

    cout << "Fil";

    SetConsoleTextAttribute(hConsole, 15);

    cout << ", je to radce miru, diplomat";
    Sleep(3500);
    cout << endl << "Nyni se taky nachazite v provincii ";

    SetConsoleTextAttribute(hConsole, 12);

    cout << "Pafas";

    SetConsoleTextAttribute(hConsole, 9);

    cout << ", kterou prave Fil ridi";
    Sleep(3500);
    cout << endl << "Tak, vsechno jasne? ";

    SetConsoleTextAttribute(hConsole, 10);

    cout << "1 - Ano";

    SetConsoleTextAttribute(hConsole, 15);

    cout << " / ";

    SetConsoleTextAttribute(hConsole, 12);

    cout << "2 - Ne";

    SetConsoleTextAttribute(hConsole, 15);

    int odpoved_kradce;

    cin >> odpoved_kradce;

    system("cls");

    if (odpoved_kradce == 1) {

        cara();
        Sleep(1000);
        cout << endl << endl << "Tak dobre, pojdme";
        Sleep(3500);
    }


        else {
        cara();
        Sleep(1000);
        cout << endl << endl << "Dobre, tak vam to zopakuju";
        Sleep(3500);
        cout << endl;
        cara();
        Sleep(1000);
        cout << endl << endl << "V kralovstvi mame pet kralovskych radcu, kazdy ridi jednu z peti provincii";
        Sleep(3500);
    cout << endl << "Nyni jdeme za radcem ktery se jmenuje ";

    SetConsoleTextAttribute(hConsole, 12);

    cout << "Fil";

    SetConsoleTextAttribute(hConsole, 15);

    cout << ", je to radce miru, diplomat";
    Sleep(3500);
    cout << endl << "Nyni se taky nachazite v provincii ";

    SetConsoleTextAttribute(hConsole, 12);

    cout << "Pafas";

    SetConsoleTextAttribute(hConsole, 9);

    cout << ", kterou prave Fil ridi";
    Sleep(3500);

    }

    cout << endl << endl;
    cara();
    Sleep(1000);
    cout << endl << endl << "*Rames otevira dvere budovy, a pomalu vchazis dovnitr*";
    Sleep(5000);

    system("cls");
}

void patylevel(string postava, int &zdravi, int &zdraviNAVIC, int &mana, int &manaNAVIC,
                 int &utok, int &obrana, int &level, string &nepritel_jmeno, int &utok_nepritel,
                 int &obrana_nepritel, int &zdravi_nepritel, string jmeno, string schopnost1, string schopnost2, string schopnost3, int schopnost[3], int &reputace, int &penize) {

        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        cara();
        Sleep(1000);
        cout << endl << endl << "*Pomalu prochazis vstupni chodbou budovy, po stranach vidis sochy zvirat a lidi*";
        Sleep(3500);
        cout << endl << "Tak pane, pojdte za mnou, pujdeme primo do pracovny radce Fil";
        Sleep(3500);
        cout << endl << "*Po chvili chuze prichazite k mistnosti, je to ona pracovna, Rames pomalu otevira dvere a vchazite dovnitr*" << endl << endl;
        Sleep(4000);

        cara();
        Sleep(1000);
        cout << endl << endl << "*Jakmile otevre Rames dvere, uvidis za pracovnim stolem cloveka v zlatem plasti*";
        Sleep(3500);

        SetConsoleTextAttribute(hConsole, 14);

        cout << endl << "Aaa, drahy Ramesi, koho pak mi to tady privadis? Zase";

        SetConsoleTextAttribute(hConsole, 15);

        Sleep(3500);
        cout << endl << "Ach pane, toto je cteny " << jmeno << ". Je to nyni hrdina nasi vesnice pane";
        Sleep(3500);

        SetConsoleTextAttribute(hConsole, 14);
        cout << endl << "Ach tak takhle, no a cim se proslavil tento exemplar Ramesi? Vypil snad nejvice piva?";
        Sleep(4000);
        SetConsoleTextAttribute(hConsole, 15);

        cout << endl << "Ach pane, to jiste ne, zde " << jmeno << " porazil Raedona, ktery nas terorizoval";
        Sleep(3500);

        SetConsoleTextAttribute(hConsole, 14);
        cout << endl << "Ah? Tento ze porazil tu bestii? Hmm, fascinujici, no, nemas duvod mi lhat, aspon myslim";
        Sleep(4000);
        SetConsoleTextAttribute(hConsole, 15);

        cout << endl << "To jiste ne pane, ma u sebe dokonce i hlavu te bestie, pane";
        Sleep(3500);
        cout << endl << "*Pomalu vybiras hlavu Raedona a ukazujes ji Filovi*";
        Sleep(3500);
        cout << endl << endl << "Co reknes? ";

        SetConsoleTextAttribute(hConsole, 10);

        cout << "1 - Ano, skolil jsem tu bestii";

        SetConsoleTextAttribute(hConsole, 15);

        cout << " / ";

        SetConsoleTextAttribute(hConsole, 12);

        cout << "2 - (Nic nerict)";

        SetConsoleTextAttribute(hConsole, 15);

        int odpoved_Fil;

        cin >> odpoved_Fil;
        system("cls");

        if (odpoved_Fil == 1) {

            cara();
            Sleep(1000);

            SetConsoleTextAttribute(hConsole, 14);
            cout << endl << endl << "Hmmm, ono to dokonce i mluvi, no, uctihodne mily... Uz jsem zapomnel vase jmeno";
            Sleep(4000);
            cout << endl << "Ale uctihodne, uctihodne. A co presne Ramesi tady chcete?";
            Sleep(4000);
            SetConsoleTextAttribute(hConsole, 15);
        }

        else {

            cara();
            Sleep(1000);

            SetConsoleTextAttribute(hConsole, 14);
            cout << endl << endl << "Hmmm, fascinujici, to vskutku, a ani nic nerekne, to je duch";
            Sleep(4000);
            cout << endl << "No, ale Ramesi, to je pekne, ale co tady presne po me chcete?";
            Sleep(4000);
            SetConsoleTextAttribute(hConsole, 15);
        }
        cout << endl << endl;
        cara();
        Sleep(1000);
        cout << endl << endl << "No pane, chtel jsem vam navrhnout, zda si myslite ze se tady " << jmeno << " hodi na sluzby k radnimu Rutrovi";
        Sleep(4000);

        SetConsoleTextAttribute(hConsole, 14);
        cout << endl << "K Rutrovi? Drahy Ramesi, vsak vis jak je vybiravy, ale zkusit to samozrejme muzes";
        Sleep(4000);
        SetConsoleTextAttribute(hConsole, 15);

        cout << endl << "Takze si pane myslite ze by jsme se meli vydat do ";

        SetConsoleTextAttribute(hConsole, 9);

        cout << "Marky";
        SetConsoleTextAttribute(hConsole, 15);
        cout << "?";
        Sleep(4000);

        SetConsoleTextAttribute(hConsole, 14);
        cout << endl << "No drahy Ramesi, zkusit to rozhodne muzete, klidne vam napisu i doporuceni jestli chcete";
        Sleep(4000);
        SetConsoleTextAttribute(hConsole, 15);

        cout << endl << "Ach ano pane, to bude od vas mile";
        Sleep(3500);
        cout << endl << "*Fil sepisuje doporucujici dopis a pomalu jej predava Ramesovi*";
        Sleep(3500);

        SetConsoleTextAttribute(hConsole, 14);
        cout << endl << "A jeste nez pujdete, tady pan se muze klidne podivat do Ilratske knihovny, aby vedel vic o ";
        SetConsoleTextAttribute(hConsole, 15);

        SetConsoleTextAttribute(hConsole, 12);

        cout << "Gardii";
        Sleep(4000);

        SetConsoleTextAttribute(hConsole, 15);

        cout << endl << "Ach vskutku dobry napad pane, tak uz pojdme" << endl << endl;
        Sleep(3500);

        cara();
        Sleep(1000);
        cout << endl << endl << "Tak pane, pojdme tedy do knihovny";

        int kniha;
        int odpoved_knihovna;

    do{ SetConsoleTextAttribute(hConsole, 10);
        cout << endl << endl << "Napis 1 - pro pokracovani";
        SetConsoleTextAttribute(hConsole, 15);
        cin >> odpoved_knihovna;
      }while(!(odpoved_knihovna == 1));

      system("cls");

      cara();
      Sleep(1000);
      cout << endl << endl << "*Pomalu se vydavas s Ramesem do Ilratske knihovny, aby jsi zjistil vice*";
      Sleep(4000);
      cout << endl << "*Nakonec prichazis k velke zlatem zdobene budove*";
      Sleep(4000);
      cout << endl << "Tak jsme zde pane, pojdte" << endl << endl;
      Sleep(3500);

      cara();
      Sleep(1000);
      cout << endl << endl << "Tak pane, mate tady na vyber tri uctihodne historicke knihy";
      Sleep(3500);//

      do {cout << endl << "Kterou chcete?" << endl;

      SetConsoleTextAttribute(hConsole, 10);

      cout << "1 - Zivot Cara Aekase Statecneho";

      SetConsoleTextAttribute(hConsole, 12);

      cout << endl << "2 - Sprava Gardskeho Kralovstvi";

      SetConsoleTextAttribute(hConsole, 2);

      cout << endl << "3 - Mytologie viry Aetruz";

      SetConsoleTextAttribute(hConsole, 14);

      cout << endl << "4 - Zadnou nechci (Nelze se pote vratit)" << endl;

      SetConsoleTextAttribute(hConsole, 15);

      cin >> kniha;
      system("cls");

      switch(kniha) {

        case 1:

            knihaAekas();

            break;

        case 2:

            knihaSpravaGardie();
            break;

        case 3:

            knihaAetruz();
            break;

        case 4:

            cara();
            Sleep(1000);
            cout << endl << endl << "Jak si prejete pane, tak pojdme se tedy vybrat na vypravu za radcem ";

            SetConsoleTextAttribute(hConsole, 12);
            cout << "Rutrem";
            SetConsoleTextAttribute(hConsole, 15);
            Sleep(8000);
            break;
      }
    }while(kniha != 4);

    system("cls");
}

void sestylevel(string postava, int &zdravi, int &zdraviNAVIC, int &mana, int &manaNAVIC,
                 int &utok, int &obrana, int &level, string &nepritel_jmeno, int &utok_nepritel,
                 int &obrana_nepritel, int &zdravi_nepritel, string jmeno, string schopnost1, string schopnost2, string schopnost3, int schopnost[3], int &reputace, int &penize) {

     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

     cara();
     Sleep(1000);
     cout << endl << endl << "*Pomalu odchazis s Ramesem z Ilrathu, a vydavate se do Marky, jedne z oblasti kralovstvi*";
     Sleep(4000);
     cout << endl << "*Mas vsak na Ramese dobry dotaz, a to: Proc jdeme prave za radnim Rutrem*";
     Sleep(4000);
     cout << endl << "No, za Rutrem jdeme, protoze jsi ctihodny zdatny muz, byl by z tebe dobry lovec a mozna i vojak";
     Sleep(4000);
     cout << endl << "Mozna by se z tebe mohla stat i Dragom, jednou, to je elitni jezdecka jednotka pokud nevis";
     Sleep(4000);
     cout << endl << "Ale musis se pripravit, ze Rutr neni uplne privetivy, je dost drsny a malo kdo ho opravdu zaujme";
     Sleep(4000);
     cout << endl << "Nyni se tedy vydavame do mesta ";

     SetConsoleTextAttribute(hConsole, 10);

     cout << "Aelba";

     SetConsoleTextAttribute(hConsole, 15);

     cout << ", coz je hlavni mesto provincie Marka" << endl << endl;
     Sleep(4000);

     cara();
     Sleep(1000);
     cout << endl << endl << "*Po asi hodinove ceste se s Ramesem zastavujete u jedne putiky, tam se jdete najist*";
     Sleep(4000);
     cout << endl << "Pojdte pane, tento podnik poznam, maji fakt skvele Svetlorozi maso";
     Sleep(4000);
     cout << endl << "Das si neco na jidlo? ";

     SetConsoleTextAttribute(hConsole, 10);

     cout << "1 - ano ";

     SetConsoleTextAttribute(hConsole, 15);

     cout << "(";

     SetConsoleTextAttribute(hConsole, 14);

     cout << "20 zlataku";

     SetConsoleTextAttribute(hConsole, 15);

     cout << ")";

     cout << " / ";

     SetConsoleTextAttribute(hConsole, 12);

     cout << "2 - ne";

     SetConsoleTextAttribute(hConsole, 14);

     cout << endl << endl << "Penize: " << penize;

     SetConsoleTextAttribute(hConsole, 15);

     int odpoved_putika;

     cin >> odpoved_putika;

     system("cls");

     if ((penize - 20) < 0 && odpoved_putika == 1) {

            cara();
            Sleep(1000);
            cout << endl << endl << "*Vypada to ze nemate dostatek penez, takze nejite*";
            Sleep(6000);
            odpoved_putika = 3;
            system("cls");
        }

     switch(odpoved_putika) {

 case 1:

    cara();
        Sleep(1000);
        cout << endl << endl << "Dobre pane, tak vam objednam jeden Svetlorozi steak, bude vam urcite chutnat";
        Sleep(4000);
        cout << endl << "*Po chvili se Rames vraci s jidlem, ktere rychle a s radosti snis*";
        Sleep(4000);

        SetConsoleTextAttribute(hConsole, 2);

        penize -= 20;
        utok += 1;
        cout << endl << endl << "Diky jidlu je tvuj utok zvysen o jeden bod" << endl << "Utok: " << utok << endl << endl;
        Sleep(4200);

        SetConsoleTextAttribute(hConsole, 15);

        cara();
        Sleep(1000);
        cout << endl << endl << "Tak jak pane, chutna? Myslel jsem si, na to ze to tady nevypada zrovna nejlip";
        Sleep(4000);
        cout << endl << "vari opravdu dobre";
        Sleep(3500);

        break;

 case 2:

    cara();
        Sleep(1000);
        cout << endl << endl << "Dobre pane, ale delate velkou chybu, maji opravdu skvele jidlo";
        Sleep(4000);
        cout << endl << "Rames si jde tedy pro jidlo, zatimco ty se rozhlizis okolo, jak to tady vypada";
        Sleep(4000);
        cout << endl << "*Neni to tam zrovna moc vabne, a jenom si pomyslis ze by jsi sel co nejradsi pryc*";
        Sleep(4000);
        cout << endl << "*Rames se vraci s masem a bramborovou kasi zpet ke stolu*";
        Sleep(4000);
        cout << endl << "Toto jidlo si doopravdy vychutnam, dlouho jsme zde nejedl, a je to opravdu skoda, vari skvele";
        Sleep(4250);

        break;

 case 3:

    cara();
        Sleep(1000);
        cout << endl << endl << "Oo pane vy nemate penize, ale to by byla skoda kdyby jste se zde nenajedl";
        Sleep(4000);
        cout << endl << "Vite co, dneska jite na me, dobre? Dnes vam koupim jeden Svetlorozi steak, musite jej ochutnat";
        Sleep(4250);
        cout << endl << "*Po chvili se Rames vraci s jidlem, ktere rychle a s radosti snis*";
        Sleep(4000);

        SetConsoleTextAttribute(hConsole, 2);

        penize -= 20;
        utok += 1;
        cout << endl << endl << "Diky jidlu je tvuj utok zvysen o jeden bod" << endl << "Utok: " << utok << endl << endl;
        Sleep(4200);

        SetConsoleTextAttribute(hConsole, 15);

        cara();
        Sleep(1000);
        cout << endl << endl << "Tak jak pane, chutna? Myslel jsem si, na to ze to tady nevypada zrovna nejlip";
        Sleep(4000);
        cout << endl << "vari opravdu dobre";
        Sleep(3500);

        break;
}

        cout << endl << endl;
        cara();
        Sleep(1000);

        cout << endl << endl << "Kazdopadne pane, nyni bych s vami rozebral cestu";
        Sleep(4000);
        cout << endl << "Pojedeme pres pohori ";

        SetConsoleTextAttribute(hConsole, 12);

        cout << "Gongrin";

        SetConsoleTextAttribute(hConsole, 15);

        cout << ", tam si budeme muset davat pozor, zije tam hodne priser a podobne";
        Sleep(4250);
        cout << endl << "Ale zrovna vy se podle me nemusite niceho bat";
        Sleep(4000);
        cout << endl << "Kazdopadne jak vidim tak jste jiz tez dojedl, inu pojdme tedy";
        Sleep(4000);
        cout << endl << "*Pomalu vstavas a vyrazis s Ramesem k vozu a na onu cestu*";
        Sleep(9000);

        system("cls");

        cara();
        Sleep(1000);
        cout << endl << endl << "*Po asi pul hodinove ceste vam Rames zahlasi*";
        Sleep(4000);
        cout << endl << "Tak prave jsme vstoupili do pohori Gongrin, bude to neco, to vskutku";
        Sleep(4250);
        cout << endl << "*Po chvili cesty narazite na nejakou vesnici, ale je tam neco spatne, Rames se rozhodne zastavit*";
        Sleep(4300);
        cout << endl << "To je zvlastni vesnice, zadni lide na ulici, nikdo";
        Sleep(4000);
        cout << endl << "*Najednou vsak zporozujete jednoho vesnicana jak s batohem odchazi*";
        Sleep(4000);
        cout << endl << "Pane pane stujte! *zakrici na nej Rames*";
        Sleep(4000);
        cout << endl << "*Muz se otoci a podiva se na Ramese a tebe*" << endl << endl;

        cara();
        Sleep(1000);

        SetConsoleTextAttribute(hConsole, 14);
        cout << endl << endl << "Odchazim z vesnice, neni tady jiz bezpecno, a vy byste taky meli rychle odejit";
        Sleep(4250);
        SetConsoleTextAttribute(hConsole, 15);

        cout << endl << "A procpak pane, co se zde ve vesnici stalo?";
        Sleep(4000);

        SetConsoleTextAttribute(hConsole, 14);
        cout << endl << "Vy dva panove jste neslyseli o tom drakovy? Mistni mu rikaji Ruda smrt";
        Sleep(4000);
        cout << endl << "Vzdy prileti, nekoho sezere, nekoho si vezme, nebo jenom drancuje";
        Sleep(4000);
        SetConsoleTextAttribute(hConsole, 15);

        cout << endl << "Ah, tak drak rikate, podle prezdivky predpokladam ze to je ";

        SetConsoleTextAttribute(hConsole, 12);

        cout << "Ohnivy drak";

        SetConsoleTextAttribute(hConsole, 15);

        Sleep(4250);

        SetConsoleTextAttribute(hConsole, 14);
        cout << endl << "Je to tak pane, verte mi ze kdyz mi sezehl dum ohnem, tak je to ohnivy drak";
        Sleep(4250);
        SetConsoleTextAttribute(hConsole, 15);

        cout << endl << "Hmm, to je ale zvlastni, Ohnivi draci vetsinou ziji okolo sopek, ne zde";
        Sleep(4000);
        cout << endl << "*Rames si v duchu zapolemizuje nad touto zvlastnosti*" << endl << endl;
        Sleep(4000);

        cara();
        Sleep(1000);
        cout << endl << endl << "Vite co pane, my vam pomuzeme, zneskodnime toho draka";
        Sleep(4000);
        cout << endl << "*Vesnican stejne jako ty se nechapave podivas na Ramese*";
        Sleep(4000);
        cout << endl << ",,Jste si tim jisty?,, *Zeptas se Ramese*";
        Sleep(4000);
        cout << endl << "Chlapce uz jsem te videl v boji, toto je sice drak, ale to zvladnes";
        Sleep(4000);

        int odpoved_drak;

        cout << endl << "Chces jit zabit draka? ";

        SetConsoleTextAttribute(hConsole, 10);

        cout << "1 - Ano";

        SetConsoleTextAttribute(hConsole, 15);

        cout << " / ";

        SetConsoleTextAttribute(hConsole, 12);

        cout << "2 - Ne" << endl;

        SetConsoleTextAttribute(hConsole, 15);

        cin >> odpoved_drak;

        system("cls");

    switch(odpoved_drak) {

case 1:

    cara();
    Sleep(1000);
    reputace += 1;
    SetConsoleTextAttribute(hConsole, 2);
    cout << endl << endl << "Tva reputace byla zvysena o bod";
    cout << endl << "Reputace: " << reputace << endl << endl;
    SetConsoleTextAttribute(hConsole, 15);

    cara();
    Sleep(1000);
    cout << endl << endl << "Pane, vedel jsem ze jste tak odvazny jak vypadate, inu tak pojdme";
    Sleep(9000);

    break;

case 2:

    cara();
    Sleep(1000);
    reputace -= 1;
    SetConsoleTextAttribute(hConsole, 4);
    cout << endl << endl << "Tva reputace byla snizena o jeden bod";
    cout << endl << "Reputace: " << reputace << endl << endl;
    SetConsoleTextAttribute(hConsole, 15);

    cara();
    Sleep(1000);
    cout << endl << endl << "Ale pane, myslel jsem si ze jste vice odvazny, no, snad vas presvedci toto";
    Sleep(4000);
    cout << endl << "*Rames ti poda ";

    SetConsoleTextAttribute(hConsole, 14);

    cout << "100 zlataku";

    SetConsoleTextAttribute(hConsole, 15);

    cout << "*";
    Sleep(4000);

    cout << endl << "*Po mensi neochote tedy nakonec souhlasis*";
    Sleep(4000);
    cout << endl << "Inu dobre pane, tak pojdme, jdeme skolit toho draka";
    Sleep(9000);

    break;
}

    system("cls");

    cara();
    Sleep(1000);
    cout << endl << endl << "*Vydavas se s Ramesem k hore, o ktere rikal vesnican, ze tam drak prebyva*";
    Sleep(4000);
    cout << endl << "Tak pane, urcite to zvladnete, verim vam";
    Sleep(4000);
    cout << endl << "Navic, aspon poradne vydelame a ziskate ";

    SetConsoleTextAttribute(hConsole, 10);

    cout << "povest";

    SetConsoleTextAttribute(hConsole, 15);

    int odpoved_minulost;

    cout << ", to se u Rutra bude hodit";
    Sleep(4000);
    cout << endl << "*Pomalu splhas a splhas pomalu s Ramesem po hore, asi po pul hodine rekne*";
    Sleep(4000);
    cout << endl << "Pane a vlastne, jak jste se v Gardii ocitl?";
    Sleep(4000);
    cout << endl << "Jak odpovis? ";

    SetConsoleTextAttribute(hConsole, 10);

    cout << "1 - Sam vlastne nevim";

    SetConsoleTextAttribute(hConsole, 15);

    cout << " / ";

    SetConsoleTextAttribute(hConsole, 12);

    cout << "2 - Nepovim";

    SetConsoleTextAttribute(hConsole, 15);

    cin >> odpoved_minulost;

    system("cls");

    cara();
    Sleep(1000);

    int jazyk;

    if (odpoved_minulost == 1) {

        cout << endl << endl << "Aha, no, to je zajimave pane, no preji hodne stesti pane";
        Sleep(4000);
        cout << endl << "aby jste prisel na to jak jste se zde ocitl";
        Sleep(4000);
    }

    else {

        cout << endl << endl << "Ale pane, no kdyz myslite";
        Sleep(4000);
    }

    cout << endl << "Mimochodem, mohl bych vas naucit aspon zaklady jazyka Aersir, ve kterem se zde mluvi";
    Sleep(4200);
    cout << endl << "Podle me by vam to bylo potrebne, hlavne pokud se zde chcete zdrzet";
    Sleep(4200);
    cout << endl << "Beres tuto nabidku? ";

    SetConsoleTextAttribute(hConsole, 10);

    cout << "1 - Ano";

    SetConsoleTextAttribute(hConsole, 15);

    cout << " / ";

    SetConsoleTextAttribute(hConsole, 12);

    cout << "2 - Ne, dekuji";

    SetConsoleTextAttribute(hConsole, 15);

    cin >> jazyk;

    system("cls");
    cara();
    Sleep(1000);

    switch(jazyk) {

case 1:

    cout << endl << endl << "Inu dobra pane, tak vas naucim aspon zaklady";
    Sleep(4000);
    cout << endl << "*Vysplhas s Ramesem na vrchol tohoto kopce, a pomalu te jde ucit*";
    Sleep(4000);
    cout << endl << "Takze pane, zaprve, Aersir se pise pouze ve velke abecede, to je dulezite vedet";
    Sleep(4200);
    cout << endl << "Zadruhe, ma vlastni abecedu ";

    SetConsoleTextAttribute(hConsole, 10);

    cout << "*(Vas vsak kvuli C++ omezenim naucime verzi v latince)*";

    SetConsoleTextAttribute(hConsole, 15);

    Sleep(4200);
    cout << endl << "Nejprve vas naucim specialni znaky jazyka";
    Sleep(3500);

    SetConsoleTextAttribute(hConsole, 10);

    cout << endl << endl << " / = Znak ktery se dava jenom pred krestni jmena, odlisuje tak veci od lidi, nijak se ale nevyslovuje";

    SetConsoleTextAttribute(hConsole, 11);

    cout << endl << endl << " Y = Mestsky znak, dava se na konci jmena mest a osad, vyslovuje se jako Th";

    SetConsoleTextAttribute(hConsole, 15);

    int odpoved_jazyk;

    cout << endl << endl << "Zmackni ";

    break;

case 2:

    cout << endl << endl << "Dobre pane, no, tak pojdme skolit toho draka!";
    Sleep(4000);

    break;
}

    cout << endl << "Pomalu s Ramesem prichazis k velke hore, na jejim vrchu uvidis velky ohnivy sloup";
    Sleep(4000);
    cout << endl << "";

}
int main(){

    srand(time(0));
    string jmeno;
    string postava;
    int schopnost[3];
    string potvrzeni;
    int vyrecnost=0;
    int smlouvani=0;
    int drakpartner=0;
    int reputace=0;
    int zdravi;
    int uroven=6;
    int odpoved=0;
    int odpoved_reka=0;
    int odpoved_muz_u_reky=0;
    int odpoved_pristresek;
    int odpoved_panovi;
    int penize=0;
    int odpoved_mesto;
    int obchod_lektvary;
    int mana;
    int zdraviDF;
    int zdraviNAVIC=0;
    int obchod_zbrane;
    int utok;
    int obchod_vyzbroj;
    int obrana;
    int level;
    int zkusenosti;
    int odpoved_dom;
    int odpoved_truhla;
    int Zlodej_Truhel = 0;
    int odpoved_lektvar;
    int Zlodej_lektvar = 0;
    int odpoved_Raedon;
    int odpoved_zebrik;
    int zdravi_nepritel;
    int utok_nepritel;
    int obrana_nepritel;
    string nepritel_jmeno;
    string schopnost1, schopnost2, schopnost3;
    int manaNAVIC = 0;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int odpoved_radni;
    int item1;
    string item1N;
    int item2;
    string item2N;
    int item3;
    string item3N;
    int item4;
    string item4N;

    SetConsoleTextAttribute(hConsole, 12);

    cout << "                                               |Versaharska kronika|" << endl;

    SetConsoleTextAttribute(hConsole, 14);

    cara();

    SetConsoleTextAttribute(hConsole, 15);

    cout << endl << endl << "Pocestny vitej, me jmeno je Aermirus. Jsem zde abych te pripravil na tvou pout";
    cout << endl << "Kdy jsem se ti predstavil, predstav se i ty, jake je tve jmeno?: ";
    cin >> jmeno;

    cout << endl << "Oo, takze " << jmeno << " ,to je fastinujici jmeno." << endl << "Nyni mi povez, jsi ";

    SetConsoleTextAttribute(hConsole, 12);

    cout << "´Mag´, ´Rytir´, ´Lovec´, ´Cestovatel´: ";

    SetConsoleTextAttribute(hConsole, 15);

   do { SetConsoleTextAttribute(hConsole, 12);
    cout << endl << endl << "Mag ";

    SetConsoleTextAttribute(hConsole, 14);

    cout << "______ Silny ale krehky, zacina se strednim mnozstvim penez" << endl;

    SetConsoleTextAttribute(hConsole, 12);

    cout << "Rytir ";

    SetConsoleTextAttribute(hConsole, 14);

    cout << "______ Silny a odolny ma ale mene many, zacina s velkym mnozstvim penez";

    SetConsoleTextAttribute(hConsole, 12);

    cout << endl << "Lovec ";

    SetConsoleTextAttribute(hConsole, 14);

    cout << "______ Krehci a mene odolny, zacina ale s velkym mnozstvim penez" << endl;

    SetConsoleTextAttribute(hConsole, 12);

    cout << "Cestovatel ";

    SetConsoleTextAttribute(hConsole, 14);

    cout << "______ Je velmi krehky a slaby, zacina s malym mnozstvim penez (Vyzva)" << endl;

    SetConsoleTextAttribute(hConsole, 15);

    cin >> postava;

    if (postava == "mag") {
        zdravi=5;
        zdraviDF=5;
        utok=6;
        obrana=3;
        mana=10;
        penize=150;
        level=1;
        zkusenosti=0;

        schopnost[0]=2;
        schopnost[1]=3;
        schopnost[2]=4;

        schopnost1="Oslnujici_Svetlo";
        schopnost2="Svetelna_Boure";
        schopnost3="Soumrak_Svetla";

        cout << endl << "Vase zdravi: " << zdravi << endl << "Vas utok: " << utok << endl << "Vase obrana: " << obrana << endl << "Vase mana: " << mana << endl << "Vas pocet zlataku: " << penize << endl << "Schopnost 1: ";

        SetConsoleTextAttribute(hConsole, 14);

        cout << schopnost1;

        SetConsoleTextAttribute(hConsole, 15);

        cout << " " << schopnost[0] << endl << "Schopnost 2: ";

        SetConsoleTextAttribute(hConsole, 14);

        cout << schopnost2;

        SetConsoleTextAttribute(hConsole, 15);

        cout << " " << schopnost[1] << endl << "Schopnost 3: ";

        SetConsoleTextAttribute(hConsole, 14);

        cout << schopnost3;

        SetConsoleTextAttribute(hConsole, 15);

        cout << " " << schopnost[2];
        cout << endl << "Jste s vyberem spokojen? (";

        SetConsoleTextAttribute(hConsole, 10);

        cout << "ano";

        SetConsoleTextAttribute(hConsole, 15);

        cout << "/";

        SetConsoleTextAttribute(hConsole, 12);

        cout << "ne";

        SetConsoleTextAttribute(hConsole, 15);

        cout << "): " << endl;
        cin >> potvrzeni;
        }

    if (postava == "rytir") {
        zdravi=6;
        zdraviDF=6;
        utok=5;
        obrana=4;
        mana=6;
        penize=250;
        level=1;
        zkusenosti=0;

        schopnost[0]=3;
        schopnost[1]=4;
        schopnost[2]=5;

        schopnost1="Ostri_Noze    ";
        schopnost2="Cepel_Pravdy  ";
        schopnost3="Soud_Padlych";

        cout << endl << "Vase zdravi: " << zdravi << endl << "Vas utok: " << utok << endl << "Vase obrana: " << obrana << endl << "Vase mana: " << mana << endl << "Vas pocet zlataku: " << penize << endl << "Schopnost 1: ";

        SetConsoleTextAttribute(hConsole, 14);

        cout << schopnost1;

        SetConsoleTextAttribute(hConsole, 15);

        cout << " " << schopnost[0] << endl << "Schopnost 2: ";

        SetConsoleTextAttribute(hConsole, 14);

        cout << schopnost2;

        SetConsoleTextAttribute(hConsole, 15);

        cout << " " << schopnost[1] << endl << "Schopnost 3: ";

        SetConsoleTextAttribute(hConsole, 14);

        cout << schopnost3;

        SetConsoleTextAttribute(hConsole, 15);

        cout << " " << schopnost[2];
        cout << endl << "Jste s vyberem spokojen? (";

        SetConsoleTextAttribute(hConsole, 10);

        cout << "ano";

        SetConsoleTextAttribute(hConsole, 15);

        cout << "/";

        SetConsoleTextAttribute(hConsole, 12);

        cout << "ne";

        SetConsoleTextAttribute(hConsole, 15);

        cout << "): " << endl;
        cin >> potvrzeni;
        }

    if (postava == "lovec") {
        zdravi=4;
        zdraviDF=5;
        utok=5;
        obrana=3;
        mana=10;
        penize=300;
        level=1;
        zkusenosti=0;

        schopnost[0]=2;
        schopnost[1]=3;
        schopnost[2]=6;

        schopnost1="Lovecky_Drap ";
        schopnost2="Asasinska_Cepel ";
        schopnost3="Hodina_Lovu";

        cout << endl << "Vase zdravi: " << zdravi << endl << "Vas utok: " << utok << endl << "Vase obrana: " << obrana << endl << "Vase mana: " << mana << endl << "Vas pocet zlataku: " << penize << endl << "Schopnost 1: ";

        SetConsoleTextAttribute(hConsole, 14);

        cout << schopnost1;

        SetConsoleTextAttribute(hConsole, 15);

        cout << " " << schopnost[0] << endl << "Schopnost 2: ";

        SetConsoleTextAttribute(hConsole, 14);

        cout << schopnost2;

        SetConsoleTextAttribute(hConsole, 15);

        cout << " " << schopnost[1] << endl << "Schopnost 3: ";

        SetConsoleTextAttribute(hConsole, 14);

        cout << schopnost3;

        SetConsoleTextAttribute(hConsole, 15);

        cout << " " << schopnost[2];
        cout << endl << "Jste s vyberem spokojen? (";

        SetConsoleTextAttribute(hConsole, 10);

        cout << "ano";

        SetConsoleTextAttribute(hConsole, 15);

        cout << "/";

        SetConsoleTextAttribute(hConsole, 12);

        cout << "ne";

        SetConsoleTextAttribute(hConsole, 15);

        cout << "): " << endl;
        cin >> potvrzeni;
        }

    if (postava == "cestovatel") {
        zdravi=3;
        zdraviDF=3;
        utok=3;
        obrana=3;
        mana=5;
        penize=50;
        level=1;
        zkusenosti=0;

        schopnost[0]=1;
        schopnost[1]=2;
        schopnost[2]=3;

        schopnost1="Uder         ";
        schopnost2="Hlavodrt        ";
        schopnost3="Zemetreseni";

        cout << endl << "Vase zdravi: " << zdravi << endl << "Vas utok: " << utok << endl << "Vase obrana: " << obrana << endl << "Vase mana: " << mana << endl << "Vas pocet zlataku: " << penize << endl << "Schopnost 1: ";

        SetConsoleTextAttribute(hConsole, 14);

        cout << schopnost1;

        SetConsoleTextAttribute(hConsole, 15);

        cout << " " << schopnost[0] << endl << "Schopnost 2: ";

        SetConsoleTextAttribute(hConsole, 14);

        cout << schopnost2;

        SetConsoleTextAttribute(hConsole, 15);

        cout << " " << schopnost[1] << endl << "Schopnost 3: ";

        SetConsoleTextAttribute(hConsole, 14);

        cout << schopnost3;

        SetConsoleTextAttribute(hConsole, 15);

        cout << " " << schopnost[2];
        cout << endl << "Jste s vyberem spokojen? (";

        SetConsoleTextAttribute(hConsole, 10);

        cout << "ano";

        SetConsoleTextAttribute(hConsole, 15);

        cout << "/";

        SetConsoleTextAttribute(hConsole, 12);

        cout << "ne";

        SetConsoleTextAttribute(hConsole, 15);

        cout << "): " << endl;
        cin >> potvrzeni;
        }

        if (postava == "sigma") {
        zdravi=12;
        zdraviDF=3;
        utok=20;
        obrana=15;
        mana=80;
        penize=500;
        level=1;
        zkusenosti=0;

        schopnost[0]=10;
        schopnost[1]=12;
        schopnost[2]=22;

        schopnost1="Tung Tung Sahure";
        schopnost2="Crocodio Bombard";
        schopnost3="Skibidi Obdelnik";

        cout << endl << "Vase zdravi: " << zdravi << endl << "Vas utok: " << utok << endl << "Vase obrana: " << obrana << endl << "Vase mana: " << mana << endl << "Vas pocet zlataku: " << penize << endl << "Schopnost 1: ";

        SetConsoleTextAttribute(hConsole, 14);

        cout << schopnost1;

        SetConsoleTextAttribute(hConsole, 15);

        cout << " " << schopnost[0] << endl << "Schopnost 2: ";

        SetConsoleTextAttribute(hConsole, 14);

        cout << schopnost2;

        SetConsoleTextAttribute(hConsole, 15);

        cout << " " << schopnost[1] << endl << "Schopnost 3: ";

        SetConsoleTextAttribute(hConsole, 14);

        cout << schopnost3;

        SetConsoleTextAttribute(hConsole, 15);

        cout << " " << schopnost[2];
        cout << endl << "Jste s vyberem spokojen? (";

        SetConsoleTextAttribute(hConsole, 10);

        cout << "ano";

        SetConsoleTextAttribute(hConsole, 15);

        cout << "/";

        SetConsoleTextAttribute(hConsole, 12);

        cout << "ne";

        SetConsoleTextAttribute(hConsole, 15);

        cout << "): " << endl;
        cin >> potvrzeni;
        }

   } while (potvrzeni != "ano");

        system("cls");

        nactenykodu(zdravi, zdraviNAVIC, mana, manaNAVIC, utok, obrana, level, reputace, vyrecnost, smlouvani, uroven);

        system("cls");

    switch(uroven) {

    case 0:

        zacatek(odpoved, odpoved_reka, odpoved_muz_u_reky, odpoved_pristresek, odpoved_panovi, reputace, postava, penize, zdravi);
        Sleep(3500);
        checkpoint(zdravi, zdraviNAVIC, mana, manaNAVIC, utok, obrana, level, reputace, vyrecnost, smlouvani, uroven);
        Sleep(15000);
        system("cls");

    case 1:

        uroven = 1;
        druhylevel(postava, zdravi, zdraviNAVIC, mana, manaNAVIC, utok, obrana, penize, reputace, Zlodej_Truhel, Zlodej_lektvar, odpoved, odpoved_mesto, odpoved_dom, odpoved_truhla, odpoved_lektvar, odpoved_Raedon, obchod_lektvary, obchod_zbrane, obchod_vyzbroj);
        uvodVersaharskaKronika();
        Sleep(7500);
        checkpoint(zdravi, zdraviNAVIC, mana, manaNAVIC, utok, obrana, level, reputace, vyrecnost, smlouvani, uroven);
        Sleep(15000);
        system("cls");

    case 2:

        uroven = 2;
        tretilevel(postava, zdravi, zdraviNAVIC, mana, manaNAVIC, utok, obrana, level, odpoved_zebrik, nepritel_jmeno, utok_nepritel, obrana_nepritel, zdravi_nepritel, jmeno, schopnost1, schopnost2, schopnost3, schopnost, odpoved_radni, reputace, penize);
        checkpoint(zdravi, zdraviNAVIC, mana, manaNAVIC, utok, obrana, level, reputace, vyrecnost, smlouvani, uroven);
        Sleep(15000);
        system("cls");

    case 3:

        uroven = 3;
        ctvrtylevel(postava, zdravi, zdraviNAVIC, mana, manaNAVIC, utok, obrana, level, nepritel_jmeno, utok_nepritel, obrana_nepritel, zdravi_nepritel, jmeno, schopnost1, schopnost2, schopnost3, schopnost, reputace, penize);
        checkpoint(zdravi, zdraviNAVIC, mana, manaNAVIC, utok, obrana, level, reputace, vyrecnost, smlouvani, uroven);
        Sleep(15000);
        system("cls");

    case 4:

        uroven = 4;
        patylevel(postava, zdravi, zdraviNAVIC, mana, manaNAVIC, utok, obrana, level, nepritel_jmeno, utok_nepritel, obrana_nepritel, zdravi_nepritel, jmeno, schopnost1, schopnost2, schopnost3, schopnost, reputace, penize);
        checkpoint(zdravi, zdraviNAVIC, mana, manaNAVIC, utok, obrana, level, reputace, vyrecnost, smlouvani, uroven);
        Sleep(15000);
        system("cls");

    case 5:

        uroven = 5;
        sestylevel(postava, zdravi, zdraviNAVIC, mana, manaNAVIC, utok, obrana, level, nepritel_jmeno, utok_nepritel, obrana_nepritel, zdravi_nepritel, jmeno, schopnost1, schopnost2, schopnost3, schopnost, reputace, penize);
        checkpoint(zdravi, zdraviNAVIC, mana, manaNAVIC, utok, obrana, level, reputace, vyrecnost, smlouvani, uroven);
        Sleep(15000);
        system("cls");

    case 6:

        // Zápas Drak_Ohnivy //

        nepritel_jmeno = "Ohnivy Drak [MB]";
        utok_nepritel = obrana + 2;
        obrana_nepritel = utok - 1;
        zdravi_nepritel = 7;
        BattleDrak(zdravi, mana, obrana, utok, zdravi_nepritel, utok_nepritel, obrana_nepritel, nepritel_jmeno, jmeno, level, schopnost1, schopnost2, schopnost3, schopnost);

        system("cls");

        if (zdravi <= 0) {

            SetConsoleTextAttribute(hConsole, 4);
            cout << endl << endl << "Umrel jsi, zkus to znova";
            SetConsoleTextAttribute(hConsole, 15);
            exit(0);
        }

    }
}
