#include <iostream>
#include <windows.h>
using namespace std;

void horyAKrajina() {
    cout << "                /\\                     " << endl;
    cout << "               /  \\    /\\              " << endl;
    cout << "      /\\      /    \\  /  \\    /\\       " << endl;
    cout << "     /  \\    /      \\/    \\  /  \\      " << endl;
    cout << "    /    \\  /              \\/    \\     " << endl;
    cout << "   /      \\/                     \\    " << endl;
    cout << "  /                                \\   " << endl;
    cout << " /__________________________________\\ " << endl;
    cout << " ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~  " << endl;
    cout << "  ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~   " << endl;
}

void cara() {

    for (int i=0; i <= 119; i++) {
        cout << "_";
    }
}

void uvodVersaharskaKronika() {
    cout << endl;
    // Dracia hlava
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
    cout << "         `   `  `      `   / | |  | | \\   '      '  '   '" << endl;
    cout << "                          (  | |  | |  )" << endl;
    cout << "                         __\\ | |  | | /__" << endl;
    cout << "                        (vvv(VVV)(VVV)vvv)" << endl;
    cout << endl;

    // Oddeľovač
    cout << "---------------------------------------------------------------" << endl;

    // Názov hry
    cout << "                    VERSAHARSKA KRONIKA                        " << endl;

    // Meno autora
    cout << "                      by Jozef Oralek                          " << endl;

    // Oddeľovač
    cout << "---------------------------------------------------------------" << endl;

    // Hory
    cout << "             /\\                     /\\                         " << endl;
    cout << "            /  \\    /\\    /\\    /\\  /  \\                        " << endl;
    cout << "           /    \\  /  \\  /  \\  /  \\/    \\                       " << endl;
    cout << "          /      \\/    \\/    \\/      \\     \\                    " << endl;
    cout << "         /                               \\                     " << endl;
    cout << "        /_________________________________\\                    " << endl;
    cout << endl;
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
}

void reka() {
    cout << " ~    ~       ~      ~   ~    ~  ~    ~" << endl;
    cout << "   ~     ~  ~     ~    ~   ~  ~    ~" << endl;
    cout << " ~  ~      ~    ~   ~      ~    ~    ~" << endl;
    cout << "         ~      ~    ~     ~   ~" << endl;
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
}

void vesnice() {
    cout << "                        _ _||_ _                                  " << endl;
    cout << "                       /        \\                                " << endl;
    cout << "                      /__________\\        _ _||_ _               " << endl;
    cout << "                     |            |      /        \\              " << endl;
    cout << "                     |  _      _  |     /__________\\             " << endl;
    cout << "                     | |_|    |_| |    |          |              " << endl;
    cout << "                     |    __      |    |   _  _   |              " << endl;
    cout << "                    /|   |__|     |\\   |__| || |__|              " << endl;
    cout << "                  _/_|____________|_\\_ |__________|              " << endl;
    cout << "                 /                   \\                          " << endl;
    cout << "                /_____________________\\                         " << endl;
    cout << "                   |  |         |  |                            " << endl;
    cout << "                   |  |         |  |                            " << endl;
    cout << "           ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~            " << endl;
    cout << "          ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~           " << endl;
    cout << "                (Malá vesnička ukrytá v poli a vetríku)           " << endl;
}
void obrazekLektvar() {
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
    cout << "         ||||" << endl;
    cout << "         ||||" << endl;
}

void Battle(int &zdraviL, int &manaL, int obranaL, int utokL, int zdravi_nepritelL, int utok_nepritelL, int obrana_nepritelL, string nepritel_jmenoL, string jmenoL, int levelL, string schopnost1L, string schopnost2L, string schopnost3L, int schopnostL[3]) {

    do {
    int x;
    system("cls");
    cout << endl;
    cout << "  " << nepritel_jmenoL << endl;
    cout << "  HP: [";

    for (int i=1; i <= zdravi_nepritelL; i++) {
        cout << "=";
    }

    cout << "]" << endl;
    cout << endl;
    cout << endl;
    cout << "                       " << jmenoL << "       Lv" << levelL << endl;
    cout << "                       HP: [";

    for (int i=1; i <= zdraviL; i++) {
        cout << "=";
    }

    cout << "]" << endl;
    cout << "                       HP: " << zdraviL << endl;
    cout << "                       Mana: " << manaL << endl << endl;
    cout << " -------------------------------------------------" << endl;
    cout << "|  0 - "<< schopnost1L << "  |  1 - "<< schopnost2L << "   |" << endl;
    cout << "|  2 - "<< schopnost3L << "    |                       " << endl;
    cout << " -------------------------------------------------" << endl;
    cin >> x;

    int damage = (schopnostL[x] + utokL) / obrana_nepritelL;

    int damageP = utok_nepritelL - obranaL;

    if ((manaL - schopnostL[x]) < 0) {
        damage = 0;
    }
    else {
    zdravi_nepritelL -= damage;
    manaL -= schopnostL[x];
    }

    zdraviL -= damageP;

    manaL += 1;

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
}

void LevelUP(int &zdraviNAVICL, int &utokL, int &obranaL, int &manaNAVICL) {

    cout << endl << "Vsechny tve statistiky se zvysily o jeden bod, mana o dva a byl jsi vylecen";
    zdraviNAVICL += 1;
    utokL += 1;
    obranaL += 1;
    manaNAVICL += 2;

}

void lektvaryNaPolicce() {
    cout << "    +------------------------------------------+" << endl;
    cout << "    |   ( )   ( )   ( )   ( )   ( )   ( )       |" << endl;
    cout << "    |  ( o ) ( * ) ( # ) ( ~ ) ( @ ) ( + )      |" << endl;
    cout << "    |   | |   | |   | |   | |   | |   | |       |" << endl;
    cout << "    |------------------------------------------|" << endl;
    cout << "    |   ( )   ( )   ( )   ( )   ( )   ( )       |" << endl;
    cout << "    |  ( % ) ( ^ ) ( & ) ( $ ) ( ! ) ( = )      |" << endl;
    cout << "    |   | |   | |   | |   | |   | |   | |       |" << endl;
    cout << "    +------------------------------------------+" << endl;
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
    cout << "          &&& &&  & &&" << endl;
    cout << "      && &\\/&\\|& ()|/ @, &&" << endl;
    cout << "      &\\/(/&/&||/& /_/)_&/_&" << endl;
    cout << "   &() &\\/&|()|/&\\/ '%\" & ()" << endl;
    cout << "  &_\\_&&_\\ |& |&&/&__%_/_& &&" << endl;
    cout << "&&   && & &| &| /& & % ()& /&&" << endl;
    cout << " ()&_---()&\\&\\|&&-&&--%---()~" << endl;
    cout << "     &&     \\|||" << endl;
    cout << "              |||" << endl;
    cout << "              |||" << endl;
    cout << "              |||" << endl;
    cout << "        , -=-~  .-^- _" << endl;
}

void nastvanyVlk3D() {
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
}

void pristresok() {
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
}

void obrazekMecAKopi() {
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
}
void obrazekZbroj() {
    cout << "         .-=========-." << endl;
    cout << "         \\'-=======-'/ " << endl;
    cout << "         _|   .=.   |_" << endl;
    cout << "        ((|  {{1}}  |))" << endl;
    cout << "         \\|   /|\\   |/" << endl;
    cout << "          \\__ '`' __/" << endl;
    cout << "            _`) (`_  " << endl;
    cout << "          _/_______\\_" << endl;
    cout << "         /___________\\" << endl;
}
void obrazekTruhla() {
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
}
int main(){
    string jmeno;
    string postava;
    int schopnost[3];
    string potvrzeni;
    int vyrecnost=0;
    int smlouvani=0;
    int reputace=0;
    int zdravi;
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

    cout << "                                             |Versaharska kronika|" << endl;

    cara();
    cout << endl << "Pocestny vitej, me jmeno je Aermirus. Jsem zde abych te pripravil na tvou pout";
    cout << endl << "Kdy jsem se ti predstavil, predstav se i ty, jake je tve jmeno?: ";
    cin >> jmeno;

    cout << endl << "Oo, takze " << jmeno << " ,to je fastinujici jmeno" << endl << "Nyni mi povez, jsi ´Mag´, ´Rytir´, ´Lovec´ nebo jenom obycejny ´Cestovatel´?: ";

   do {
    cout << endl << endl << "Mag______Silny ale krehky, zacina se strednim mnozstvim penez" << endl << "Rytir______Silny a odolny ma ale mene many, zacina s velkym mnozstvim penez";
    cout << endl << "Lovec______Krehci a mene odolny, zacina ale s velkym mnozstvim penez" << endl << "Cestovatel______Je velmi krehky a slaby, zacina s malym mnozstvim penez (Vyzva)" << endl;
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
        cout << endl << "Vase zdravi: " << zdravi << endl << "Vas utok: " << utok << endl << "Vase obrana: " << obrana << endl << "Vase mana: " << mana << endl << "Vas pocet zlataku: " << penize << endl << "Schopnost 1: " << schopnost1 << " " << schopnost[0] << endl << "Schopnost 2: " << schopnost2 << " " << schopnost[1] << endl << "Schopnost 3: " << schopnost3 << " " << schopnost[2];
        cout << endl << "Jste s vyberem spokojen? (ano/ne): " << endl;
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
        cout << endl << "Vase zdravi: " << zdravi << endl << "Vas utok: " << utok << endl << "Vase obrana: " << obrana << endl << "Vase mana: " << mana << endl << "Vas pocet zlataku: " << penize << endl << "Schopnost 1: " << schopnost1 << " " << schopnost[0] << endl << "Schopnost 2: " << schopnost2 << " " << schopnost[1] << endl << "Schopnost 3: " << schopnost3 << " " << schopnost[2];
        cout << endl << "Jste s vyberem spokojen? (ano/ne): " << endl;
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

        cout << endl << "Vase zdravi: " << zdravi << endl << "Vas utok: " << utok << endl << "Vase obrana: " << obrana << endl << "Vase mana: " << mana << endl << "Vas pocet zlataku: " << penize << endl << "Schopnost 1: " << schopnost1 << " " << schopnost[0] << endl << "Schopnost 2: " << schopnost2 << " " << schopnost[1] << endl << "Schopnost 3: " << schopnost3 << " " << schopnost[2];
        cout << endl << "Jste s vyberem spokojen? (ano/ne): " << endl;
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

        cout << endl << "Vase zdravi: " << zdravi << endl << "Vas utok: " << utok << endl << "Vase obrana: " << obrana << endl << "Vase mana: " << mana << endl << "Vas pocet zlataku: " << penize << endl << "Schopnost 1: " << schopnost1 << " " << schopnost[0] << endl << "Schopnost 2: " << schopnost2 << " " << schopnost[1] << endl << "Schopnost 3: " << schopnost3 << " " << schopnost[2];
        cout << endl << "Jste s vyberem spokojen? (ano/ne): " << endl;
        cin >> potvrzeni;
        }
   } while (potvrzeni != "ano");

        system("cls");

        cout << endl << "Oo takze ty jsi " << postava << " to je stejne jako tve jmeno fascinujici";
        Sleep(1000);
        cout << endl << "Nyni ti reknu neco o svete ve kterem se nachazis, a to o svete Versaharu" << endl;

        cara();

    Sleep(1000);
    cout << endl << endl << "Svet Versaharu je magicke, ale i nebezpecne misto. Tento svet se rozprostira na trech kontinentech: Edamas, Helmayt a Progongard";
    Sleep(4500);
    cout << endl << "Helmayt - je prazdna ledova pustina bez zivota, pouze poseta ruinami starovekych civilizaci";
    Sleep(4500);
    cout << endl << "Edamas - je kruty a divoky kontinent, jediny kontinent, ktery si lide nedokazali podrobit, protoze sama priroda se jim postavila na odpor";
    Sleep(4500);
    cout << endl << "Progongard - je hlavni a nejvetsi kontinent, misto kde se nachazi lide, je to taky misto kde zacne tva cesta";
    Sleep(4500);

    cout << endl << endl << "Nyni kdyz jsem te obeznamil, dovol mi, te presunout do sveta" << endl;

    cara();

    Sleep(1000);
    cout << endl << "*Hned jak Aermirus domluvi, ocitas se na planine plne rostlin, ale sirokodaleko nic nevidis" << endl;
    Sleep(4500);
    horyAKrajina();
    Sleep(250);
    cout << endl << "Jaky je tvuj plan? 1 - Jit najit vodu / 2 - Zkusit pockat, nez nekdo prijde";
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
            cout << endl << "*Na jeji druhe strane zahlednes nejakou postavu, je to clovek*";
            Sleep(4000);
            reka();
            cout << endl << endl << "Chce se = 1 - pokusit reku prekrocit a promluvit si s timto clovekem / 2 - nebo radsi zustanes na teto strane?: " << endl;
            cin >> odpoved_reka;
            system("cls");

            if (odpoved_reka == 1) {

                cara();

                Sleep(1000);
                cout << endl << endl << "*Rozhodnul si se prekrocit reku, aby si si mohl s clovekem promluvit*";
                Sleep(4000);
                cout << endl << "*Reka je velmi hluboka, a omylem si zaseknes nohu a zranis se*";
                Sleep(4000);
                zdravi = zdravi - 1;
                cout << endl << "Tvoje zdravi je nyni: " << zdravi;
                Sleep(4000);
                cout << endl << endl << "*Nakonec se ale dostavas na druhy breh reky. Clovek si te okamzite vsimne a jde ti pomoci*";
                Sleep(4000);
                cout << endl << "Pane, je vam neco? Zepta se muz.";
                Sleep(4000);
                cout << endl << "Jak odpovis?: 1 - Ne nic mi neni dekuju za optani / 2 - Co se staras?" << endl;
                cin >> odpoved_muz_u_reky;
                system("cls");

                if (odpoved_muz_u_reky == 2) {

                    cara();
                    reputace -= 1;
                    Sleep(1000);
                    cout << endl << endl << "Tva reputace byla snizena o jeden bod";
                    Sleep(2000);
                    cout << endl << "Reputace: " << reputace << endl;
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
            cout << endl << "*Cekas cele hodiny ale nikdo neprichazi, zacina se navic pomalu stmivat*";
            Sleep(4000);
            les();
            cout << endl << "*Chces si: 1 - postavit provizorni pristresek a utratit 20 zlataku / 2 - nebo jen tak pockat a nic neutratit?: *" << endl;
            cin >> odpoved_pristresek;
            system("cls");

            if (odpoved_pristresek == 2) {

                cara();
                Sleep(1000);
                cout << endl << endl << "*Rozhodnul si se pristresek si nepostavit. Pomalu tak jenom lezis a cekas na planine. Pomalu se stmiva*";
                Sleep(4500);
                cout << endl << "*Hned jak se zcerna, zacnes slyset podivne zvuky z krovi za tebou, otocis se a koukas na ker*";
                Sleep(4000);
                cout << endl << "*Najednou se objevi divoky vlk, ten na tebe zautoci. Zacnes se branit*";
                Sleep(2000);
                nastvanyVlk3D();
                Sleep(3000);
                cout << endl << "*Nakonec utok vlka ustojis a zazenes jej, ale pritom te vlk zrani na ruce*";
                Sleep(4000);
                zdravi = zdravi - 2;
                cout << endl << "Tvoje zdravi je nyni: " << zdravi << endl;
            }

            if (odpoved_pristresek == 1) {

                penize -= 20;
                cout << endl << endl << "Momentalne mas u sebe: " << penize << " zlataku" << endl;

                cara();
                Sleep(1000);
                cout << endl << endl << "*Rozhodnul si se postavit si pristresek, pomalu jej stavis, pouzivas klacky, klady ale i listi*";
                Sleep(3500);
                cout << endl << "*Nakonec kdyz pristresek postavis, tak akorat padne noc. Schovas se do pristresku a cekas na den*" << endl;
                Sleep(500);
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
                cout << endl << "Jak odpovis_?: 1 - Jsem pouhy pocestny a ztratil jsem se, mohl by jste mi prosim pomoci pane? / 2 - Co je vam do toho? Potrebuju pomoc, to je to" << endl;
                cin >> odpoved_panovi;
                system("cls");

                if (odpoved_panovi == 2) {

                    cara();
                    Sleep(1000);
                    reputace -= 1;
                    cout << endl << endl << "Tva reputace byla snizena o jeden bod";
                    Sleep(2000);
                    cout << endl << "Reputace: " << reputace << endl;

                    cara();
                    Sleep(1000);
                    cout << endl << endl << "No prominte ze se ptam pane, ale nevim prece kdo muzete byt";
                    Sleep(3500);
                    cout << endl << "Ale mate stesti pane ze ja mam nejake zpusoby, pomohu vam, nedaleko je vesnice ve ktere bydlim, zavedu vas tam";
                }

                if (odpoved_panovi == 1) {

                    cara();
                    Sleep(1000);
                    reputace += 1;
                    cout << endl << endl << "Tva reputace byla zvysena o jeden bod";
                    Sleep(2000);
                    cout << endl << "Reputace: " << reputace << endl;

                    cara();
                    Sleep(1000);
                    cout << endl << endl << "Jiste pane, nedaleko je vesnice ve ktere ziji, rad vas tam zavedu";
                }

                Sleep(3500);
                cout << endl << endl << "*Pomalu odchazis s cizincem do vesnice o ktere ti rikal*" << endl;

                    break;
    }

    cara();

    Sleep(1000);
    cout << endl << endl << "*Pokracujes s cizincem na ceste k vesnici. Uz tam skoro budeme, rekne cizinec*";
    Sleep(4000);
    cout << endl << "A vidite? Tamhle uz jsou budovy me vesnice pane, uz tak jenom sedm minut chuze pane";
    Sleep(4000);
    cout << endl << "*Po sedmi minutach vchazis s cizincem do vesnice, ale je to spise vetsi vesnice, takove male mestecko*";
    Sleep(4000);
    cout << endl << endl << "Tak pane vitam vas v me rodne vesnici jmenem: Urth. Pojdme za mnou provedu vas zde";
    Sleep(4000);
    cout << endl << "Vidite tamto? To je obchodni ctvrt, tam muzete koupit prakticky vse co nase kralovstvi nabizi" << endl;
    Sleep(1000);
    vesnice();
    Sleep(4000);

    do {cout << endl << "Chtel by jste se jit pane do nejakeho obchodu podivat? 1 - Do obchodu s lektvary / 2 - Do obchodu se zbranemi / 3 - Do obchodu s vyzbroji / 4 - Nikam nechci";
    cin >> odpoved_mesto;
    system("cls");

    switch (odpoved_mesto) {

        case 1:

            cara();
            Sleep(1000);
            cout << endl << endl << "Vitejte pane v obchodu s lektvary. Co si budete prat?";
            Sleep(2500);
            cout << endl << "*V obchodu s lektvary si muzes kupovat vylepseni svych statistik, a to zdravi a manu. Zaroven kdyz do nej vkrocis, automaticky se vylecis" << endl << endl;
            lektvaryNaPolicce();

                leceni(postava, zdravi, zdraviNAVIC);
                leceniMana(postava, mana, manaNAVIC);

            Sleep(2000);
            do {cout << endl << endl << "1 - Lektvar Zivota_________Zvysuje celkove zdravi o jeden bod, zaroven pokud jste utrpeli poskozeni, tak vas po zakoupeni vyleci - 80 zlataku";
            cout << endl << "2 - Lektvar Magie__________Zvysi vasi manu o pet bodu - 65 zlataku";
            cout << endl << "3 - odejit z obchodu" << endl;
            cout << endl << "Vase penize: " << penize;
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
                cout << endl << "    Celkove zdravi zvyseno o jeden stupen";
                Sleep(1500);
                cout << endl << "Zdravi: " << zdravi << endl;
                obchod_lektvary = 0;
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
                    cout << endl << "    Celkova mana zvysena o pet bodu";
                    Sleep(1500);
                    cout << endl << "Mana: " << mana << endl;
                    obchod_lektvary = 0;
                }
            }


            }while (obchod_lektvary != 3 || penize <= 0);
            break;

        case 2:

            cara();
            Sleep(1000);
            cout << endl << endl << "Vitejte pane v obchodu se zbranemi. Co si budete prat?";
            cout << endl << "*V obchodu se zbranemi si muzes kupovat zbrane, ktere ti buduvou vylepsovat attack stat. Zaroven kdyz do nej vkrocis, automaticky se vylecis*" << endl << endl;
            obrazekMecAKopi();

             leceni(postava, zdravi, zdraviNAVIC);
             leceniMana(postava, mana, manaNAVIC);

            Sleep(2000);
            do {cout << endl << endl << "1 - Mec Pomsty_________Zvysuje tvuj utok o dva body na trvalo - 70 zlataku";
            cout << endl << "2 - Kopi Spravedlivych__________Zvysi tvuj utok o jeden bod - 45 zlataku";
            cout << endl << "3 - odejit z obchodu" << endl;
            cout << endl << "Vase penize: " << penize;
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
                cout << endl << "    Celkovy utok zvysen o dva body";
                Sleep(1500);
                cout << endl << "Utok: " << utok << endl;
                obchod_zbrane = 0;
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
                    cout << endl << "    Celkovy utok zvysen o jeden bod";
                    Sleep(1500);
                    cout << endl << "Utok: " << utok << endl;
                    obchod_zbrane = 0;
                    system("cls");
                }
            }


            }while (obchod_zbrane != 3 || penize <= 0);
            break;

        case 3:

            cara();
            Sleep(1000);
            cout << endl << endl << "Vitejte pane v obchodu se zbroji. Co si budete prat?";
            cout << endl << "*V obchodu se zbroji si muzes kupovat zbroj, ktera ti bude vylepsovat defence stat. Zaroven kdyz do nej vkrocis, automaticky se vylecis*" << endl << endl;
            obrazekZbroj();

             leceni(postava, zdravi, zdraviNAVIC);
             leceniMana(postava, mana, manaNAVIC);

            Sleep(2000);
            do {cout << endl << endl << "1 - Platy Titanu_________Zvysuje tvoji defence o dva body na trvalo - 80 zlataku";
            cout << endl << "2 - Krouzkova Zbroj__________Zvysi tvoji defence o jeden bod - 50 zlataku";
            cout << endl << "3 - odejit z obchodu" << endl;
            cout << endl << "Vase penize: " << penize;
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
                cout << endl << "    Celkova obrana zvysena o dva body";
                Sleep(1500);
                cout << endl << "Obrana: " << obrana << endl;
                obchod_vyzbroj = 0;
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
                    cout << endl << "    Celkova obrana zvysena o jeden bod";
                    Sleep(1500);
                    cout << endl << "Obrana: " << obrana << endl;
                    obchod_vyzbroj = 0;
                }
            }


            }while (obchod_vyzbroj != 3 || penize <= 0);
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
    cout << endl << "*Tak jsi nyni sam doma, chcete nekam jit?* 1 - Do kuchyne / 2 - Do loznice" << endl;
    cin >> odpoved_dom;
    system("cls");

    cara();

    Sleep(1000);

    switch (odpoved_dom) {

        case 1:

            cout << endl << endl << "*Rozhodnul si se jit do muzovi kuchyne, pomalu se rozhlizis*";
            Sleep(3500);
            cout << endl << "*Najednou uvidis nejakou truhlici, je to velka truhlice a vypada ze v ni bude neco velkeho*" << endl;
            Sleep(500);
            obrazekTruhla();
            Sleep(3500);
            cout << endl << "*Chces se do ni podivat? 1 - Ano (Muze mit nasledky) / 2 - Ne*";
            cin >> odpoved_truhla;
            system("cls");

            if (odpoved_truhla == 1) {

                cara();
                Zlodej_Truhel = 1;
                Sleep(1000);
                cout << endl << endl << "*Rozhodnul si se podivat do muzovi truhly*";
                Sleep(2500);
                cout << endl << "*Oteviras ji a nachazis 80 zlatych minci, pomalu si je beres do sve kapsy*" << endl;
                Sleep(3000);
                penize += 80;
                cout << "Penize: " << penize << endl;
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
            cout << endl << "*Je to lektvar zivota, ten ti zvedne zivoty o jeden bod*" << endl;
            Sleep(500);
            obrazekLektvar();
            Sleep(3000);
            cout << endl << "*Co udelas? 1 - Vypit jej (Muze mit nasledky) / 2 - Vratit jej*";
            cin >> odpoved_lektvar;

            if (odpoved_lektvar == 1) {

                cara();
                Zlodej_lektvar = 1;
                Sleep(1000);
                cout << endl << endl << "*Rozhodnul si se lektvar vypit, nyni je tve zdravi zvyseno o jeden bod a jsi vylecen*";
                Sleep(3000);

                leceni(postava, zdravi, zdraviNAVIC);

                zdraviNAVIC += 1;
                cout << endl << "Zdravi: " << zdravi << endl;
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
        cout << endl << "*Muz ti hazi jablko a ty jej snis*";

                leceni(postava, zdravi, zdraviNAVIC);

        Sleep(3000);
        cout << endl << "Zdravi bylo obnoveno " << "/ Zdravi: " << zdravi;
        Sleep(3500);
        cout << endl << "Tak pane, vite mam na vas prosbu, vypadate vskutku jako zdatny muz";
        Sleep(3500);
        cout << endl << "Vite mame problem s jednim monstrem co zije v horach nad nasi vesnici, je to divoky Raedon";
        Sleep(3500);
        cout << endl << "Vypada jako medved ale ma silu blesku a je velice nebezpecny, v jednom kuse unasi nase jidlo a zvirata, par nasich lidi uz i usmrtil";
        Sleep(4000);
        cout << endl << "Chtel jsem se tedy zeptal jestli by jste jej mohl zkusit usmrtit, moc by jste nam tim pomohl";
        Sleep(3000);
        cout << endl << "Jak odpovis? 1 - Dobre udelam to, ale jenom za odmenu / 2 - Dobre, udelam to";
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
            cout << endl << endl << "Pani to je od vas uslechtile, a ani si nerikate o penize";
            Sleep(2500);
            reputace += 1;
            cout << endl << "Tva reputace byla zvysena o jeden bod / Reputace: " << reputace;
            Sleep(3000);
            cout << endl << "Ale nebojte, vesnice vam da dost penez";
        }
        Sleep(3000);
        cout << endl << "Zde mate jeste mapu pane, zavede vas az do jeskyne kde to monstrum prebyva";
        Sleep(3500);
        cout << endl << "A jeste jedna vec; Hodne stesti pane";
        Sleep(3000);
        cout << endl << endl << "Beres mapu, podekujes muzovi a odchazis zabit to monstrum" << endl << endl;
        Sleep(6000);

        system("cls");

        uvodVersaharskaKronika();

        cout << endl << endl;
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
        cout << endl << "Chces jit po nem nahoru? 1 - Ano / 2 - Ne" << endl;
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
                cout << endl << "*Nachazis zde tajemny lektvar, je modry, to bude lektvar many rikas si*";
                Sleep(3500);
                cout << endl << "*Rozhodnes se jej vypit*";
                Sleep(3000);
                cout << endl << "*Tva mana je zvysena o tri body*";
                Sleep(2000);
                manaNAVIC += 3;
                leceniMana(postava, mana, manaNAVIC);
                cout << endl << "Mana: " << mana << endl;

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
        cout << endl << "*To je ten onen Raedon, musis jej nyni skolit*" << endl;
        Sleep(500);
        obrazekMedved();
        Sleep(5000);

        // Zápas Raedon //

        nepritel_jmeno = "Raedon";
        utok_nepritel = 4;
        obrana_nepritel = 3;
        zdravi_nepritel = 8;
        Battle(zdravi, mana, obrana, utok, zdravi_nepritel, utok_nepritel, obrana_nepritel, nepritel_jmeno, jmeno, level, schopnost1, schopnost2, schopnost3, schopnost);

        if (zdravi <= 0) {
            cout << endl << endl << "Umrel jsi, zkus to znova";
            return 0;
        }

        system("cls");

        cout << endl;
        cara();
        Sleep(1000);
        cout << endl << endl << "*Dokazal jsi to, porazil jsi ho, jsi pravy hrdina*";
        Sleep(3500);
        level += 1;
        cout << endl << "Tvuj level se zvysil / Level: " << level;
        Sleep(3500);

        LevelUP(zdraviNAVIC, utok, obrana, manaNAVIC);

        leceni(postava, zdravi, zdraviNAVIC);
        leceniMana(postava, mana, manaNAVIC);



}
