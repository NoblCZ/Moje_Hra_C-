#include <iostream>
#include <windows.h>
using namespace std;

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

    cout << "                                             |Versaharska kronika|" << endl;

    for (int i=0; i <= 119; i++) {
        cout << "_";
    }

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

        string schopnost1="Oslnujici_Svetlo";
        string schopnost2="Svetelna_Boure";
        string schopnost3="Soumrak_Svetla";
        cout << endl << "Vase zdravi: " << zdravi << endl << "Vas utok: " << utok << endl << "Vase obrana: " << obrana << endl << "Vase mana: " << mana << endl << "Vas pocet zlataku: " << penize;
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

        string schopnost1="Ostri_Noze";
        string schopnost2="Cepel_Pravdy";
        string schopnost3="Soud_Padlych";
        cout << endl << "Vase zdravi: " << zdravi << endl << "Vas utok: " << utok << endl << "Vase obrana: " << obrana << endl << "Vase mana: " << mana << endl << "Vas pocet zlataku: " << penize;
        cout << endl << "Jste s vyberem spokojen? (ano/ne): " << endl;
        cin >> potvrzeni;
        }

    if (postava == "lovec") {
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

        string schopnost1="Oslnujici_Svetlo";
        string schopnost2="Svetelna_Boure";
        string schopnost3="Soumrak_Svetla";

        cout << endl << "Vase zdravi: " << zdravi << endl << "Vas utok: " << utok << endl << "Vase obrana: " << obrana << endl << "Vase mana: " << mana << endl << "Vas pocet zlataku: " << penize;
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

        string schopnost1="Uder";
        string schopnost2="Hlavodrt";
        string schopnost3="Zemetreseni";

        cout << endl << "Vase zdravi: " << zdravi << endl << "Vas utok: " << utok << endl << "Vase obrana: " << obrana << endl << "Vase mana: " << mana << endl << "Vas pocet zlataku: " << penize;
        cout << endl << "Jste s vyberem spokojen? (ano/ne): " << endl;
        cin >> potvrzeni;
        }
   } while (potvrzeni != "ano");

        cout << endl << "Oo takze ty jsi " << postava << " to je stejne jako tve jmeno fascinujici";
        Sleep(1000);
        cout << endl << "Nyni ti reknu neco o svete ve kterem se nachazis, a to o svete Versaharu" << endl;

        for (int i=0; i <= 119; i++) {
        cout << "_";
    }

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

    for (int i=0; i <= 119; i++) {
        cout << "_";
    }

    Sleep(1000);
    cout << endl << "*Hned jak Aermirus domluvi, ocitas se na planine plne rostlin, ale sirokodaleko nic nevidis";
    Sleep(4500);
    cout << endl << "Jaky je tvuj plan? 1 - Jit najit vodu / 2 - Zkusit pockat, nez nekdo prijde";
    cin >> odpoved;

    for (int i=0; i <= 119; i++) {
        cout << "_";
    }

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
            cout << endl << endl << "Chce se = 1 - pokusit reku prekrocit a promluvit si s timto clovekem / 2 - nebo radsi zustanes na teto strane?: " << endl;
            cin >> odpoved_reka;

            if (odpoved_reka == 1) {

                    for (int i=0; i <= 119; i++) {
        cout << "_";
    }

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

                if (odpoved_muz_u_reky == 2) {

                        for (int i=0; i <= 119; i++) {
        cout << "_";
    }
                    reputace -= 1;
                    Sleep(1000);
                    cout << endl << endl << "Tva reputace byla snizena o jeden bod";
                    Sleep(2000);
                    cout << endl << "Reputace: " << reputace << endl;
                }

                for (int i=0; i <= 119; i++) {
        cout << "_";
    }
                Sleep(1000);
                cout << endl << endl << "Jste velice odvazny ze jste se takto vrhnul primo do reky";
                Sleep(4000);
                cout << endl << "Pojdte se mnou zavedu vas k jedne vesnici co je pobliz";
                Sleep(4000);
                cout << endl << "*Pomalu odchazis s cizincem do vesnice*" << endl;

            }

        if (odpoved_reka == 2) {

            for (int i=0; i <= 119; i++) {
        cout << "_";
    }
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
            cout << endl << "*Chces si: 1 - postavit provizorni pristresek a utratit 20 zlataku / 2 - nebo jen tak pockat a nic neutratit?: *" << endl;
            cin >> odpoved_pristresek;

            if (odpoved_pristresek == 2) {

                for (int i=0; i <= 119; i++) {
        cout << "_";
    }
                Sleep(1000);
                cout << endl << endl << "*Rozhodnul si se pristresek si nepostavit. Pomalu tak jenom lezis a cekas na planine. Pomalu se stmiva*";
                Sleep(4500);
                cout << endl << "*Hned jak se zcerna, zacnes slyset podivne zvuky z krovi za tebou, otocis se a koukas na ker*";
                Sleep(4000);
                cout << endl << "*Najednou se objevi divoky vlk, ten na tebe zautoci. Zacnes se branit*";
                Sleep(4000);
                cout << endl << "*Nakonec utok vlka ustojis a zazenes jej, ale pritom te vlk zrani na ruce*";
                Sleep(4000);
                zdravi = zdravi - 2;
                cout << endl << "Tvoje zdravi je nyni: " << zdravi << endl;
            }

            if (odpoved_pristresek == 1) {

                for (int i=0; i <= 119; i++) {
        cout << "_";
    }
                penize -= 20;
                cout << endl << endl << "Momentalne mas u sebe: " << penize << " zlataku" << endl;

                for (int i=0; i <= 119; i++) {
        cout << "_";
    }
                cout << endl << endl << "*Rozhodnul si se postavit si pristresek, pomalu jej stavis, pouzivas klacky, klady ale i listi*";
                cout << endl << "*Nakonec kdyz pristresek postavis, tak akorat padne noc. Schovas se do pristresku a cekas na den*" << endl;
            }

            for (int i=0; i <= 119; i++) {
        cout << "_";
    }
                Sleep(1000);
                cout << endl << endl << "*Pomalu se probouzis a vidis ze je jiz den. Najednou v dali uvidis stat nejakeho cloveka*";
                Sleep(4000);
                cout << endl << "*Hned jak si jej vsimnes, bezim s nadsenim za nim, konecne nejaky clovek*";
                Sleep(4000);
                cout << endl << endl << "Aaa, kdo pak jste pane? Zepta se te clovek, hned jak k nemu dobehnes";
                Sleep(4000);
                cout << endl << "Jak odpovis_?: 1 - Jsem pouhy pocestny a ztratil jsem se, mohl by jste mi prosim pomoci pane? / 2 - Co je vam do toho? Potrebuju pomoc, to je to" << endl;
                cin >> odpoved_panovi;

                if (odpoved_panovi == 2) {

                    for (int i=0; i <= 119; i++) {
        cout << "_";
    }
                    Sleep(1000);
                    reputace -= 1;
                    cout << endl << endl << "Tva reputace byla snizena o jeden bod";
                    Sleep(2000);
                    cout << endl << "Reputace: " << reputace << endl;

                    for (int i=0; i <= 119; i++) {
        cout << "_";
    }
                    Sleep(1000);
                    cout << endl << endl << "No prominte ze se ptam pane, ale nevim prece kdo muzete byt";
                    Sleep(3500);
                    cout << endl << "Ale mate stesti pane ze ja mam nejake zpusoby, pomohu vam, nedaleko je vesnice ve ktere bydlim, zavedu vas tam";
                }

                if (odpoved_panovi == 1) {

                    for (int i=0; i <= 119; i++) {
        cout << "_";
    }
                    Sleep(1000);
                    reputace += 1;
                    cout << endl << endl << "Tva reputace byla zvysena o jeden bod";
                    Sleep(2000);
                    cout << endl << "Reputace: " << reputace << endl;

                    for (int i=0; i <= 119; i++) {
        cout << "_";
    }
                    Sleep(1000);
                    cout << endl << endl << "Jiste pane, nedaleko je vesnice ve ktere ziji, rad vas tam zavedu";
                }

                Sleep(3500);
                cout << endl << endl << "*Pomalu odchazis s cizincem do vesnice o ktere ti rikal*" << endl;

                    break;
    }

    for (int i=0; i <= 119; i++) {
        cout << "_";
    }

    Sleep(1000);
    cout << endl << endl << "*Pokracujes s cizincem na ceste k vesnici. Uz tam skoro budeme, rekne cizinec*";
    Sleep(4000);
    cout << endl << "A vidite? Tamhle uz jsou budovy me vesnice pane, uz tak jenom sedm minut chuze pane";
    Sleep(4000);
    cout << endl << "*Po sedmi minutach vchazis s cizincem do vesnice, ale je to spise vetsi vesnice, takove male mestecko*";
    Sleep(4000);
    cout << endl << endl << "Tak pane vitam vas v me rodne vesnici jmenem: Urth. Pojdme za mnou provedu vas zde";
    Sleep(4000);
    cout << endl << "Vidite tamto? To je obchodni ctvrt, tam muzete koupit prakticky vse co nase kralovstvi nabizi";
    Sleep(4000);

    do {cout << endl << "Chtel by jste se jit pane do nejakeho obchodu podivat? 1 - Do obchodu s lektvary / 2 - Do obchodu se zbranemi / 3 - Do obchodu s vyzbroji / 4 - Nikam nechci";
    cin >> odpoved_mesto;

    switch (odpoved_mesto) {

        case 1:

            for (int i=0; i <= 119; i++) {
        cout << "_";
    }
            Sleep(1000);
            cout << endl << endl << "Vitejte pane v obchodu s lektvary. Co si budete prat?";
            Sleep(2500);
            cout << endl << "*V obchodu s lektvary si muzes kupovat vylepseni svych statistik, a to zdravi a manu. Zaroven kdyz do nej vkrocis, automaticky se vylecis";

                if (postava == "mag") {
                    zdravi = 5 + zdraviNAVIC;
                }
                if (postava == "rytir") {
                    zdravi = 6 + zdraviNAVIC;
                }
                if (postava == "lovec") {
                    zdravi = 5 + zdraviNAVIC;
                }
                if (postava == "cestovatel") {
                    zdravi = 3 + zdraviNAVIC;
                }

            Sleep(2000);
            do {cout << endl << endl << "1 - Lektvar Zivota_________Zvysuje celkove zdravi o jeden bod, zaroven pokud jste utrpeli poskozeni, tak vas po zakoupeni vyleci - 80 zlataku";
            cout << endl << "2 - Lektvar Magie__________Zvysi vasi manu o pet bodu - 65 zlataku";
            cout << endl << "3 - odejit z obchodu" << endl;
            cout << endl << "Vase penize: " << penize;
            cin >> obchod_lektvary;

            if (obchod_lektvary == 1) {

                    if ((penize - 80) <= 0) {
                    cout << endl << endl << "Prominte pane, ale nemate dostatek zlata" << endl;
                    obchod_lektvary = 0;
                }

                else {
                zdraviNAVIC++;
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

                if ((penize - 65) <= 0) {
                    cout << endl << endl << "Prominte pane, ale nemate dostatek zlata" << endl;
                    obchod_lektvary = 0;
                }
                else {
                    mana += 5;
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

            for (int i=0; i <= 119; i++) {
        cout << "_";
    }
            Sleep(1000);
            cout << endl << endl << "Vitejte pane v obchodu se zbranemi. Co si budete prat?";
            cout << endl << "*V obchodu se zbranemi si muzes kupovat zbrane, ktere ti buduvou vylepsovat attack stat. Zaroven kdyz do nej vkrocis, automaticky se vylecis*";

             if (postava == "mag") {
                    zdravi = 5 + zdraviNAVIC;
                }
                if (postava == "rytir") {
                    zdravi = 6 + zdraviNAVIC;
                }
                if (postava == "lovec") {
                    zdravi = 5 + zdraviNAVIC;
                }
                if (postava == "cestovatel") {
                    zdravi = 3 + zdraviNAVIC;
                }

            Sleep(2000);
            do {cout << endl << endl << "1 - Mec Pomsty_________Zvysuje tvuj utok o dva body na trvalo - 70 zlataku";
            cout << endl << "2 - Kopi Spravedlivych__________Zvysi tvuj utok o jeden bod - 45 zlataku";
            cout << endl << "3 - odejit z obchodu" << endl;
            cout << endl << "Vase penize: " << penize;
            cin >> obchod_zbrane;

            if (obchod_zbrane == 1) {

                    if ((penize - 70) <= 0) {
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

                if ((penize - 45) <= 0) {
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
                }
            }


            }while (obchod_zbrane != 3 || penize <= 0);
            break;

        case 3:

            for (int i=0; i <= 119; i++) {
        cout << "_";
    }
            Sleep(1000);
            cout << endl << endl << "Vitejte pane v obchodu se zbroji. Co si budete prat?";
            cout << endl << "*V obchodu se zbroji si muzes kupovat zbroj, ktera ti bude vylepsovat defence stat. Zaroven kdyz do nej vkrocis, automaticky se vylecis*";

             if (postava == "mag") {
                    zdravi = 5 + zdraviNAVIC;
                }
                if (postava == "rytir") {
                    zdravi = 6 + zdraviNAVIC;
                }
                if (postava == "lovec") {
                    zdravi = 5 + zdraviNAVIC;
                }
                if (postava == "cestovatel") {
                    zdravi = 3 + zdraviNAVIC;
                }

            Sleep(2000);
            do {cout << endl << endl << "1 - Platy Titanu_________Zvysuje tvoji defence o dva body na trvalo - 80 zlataku";
            cout << endl << "2 - Krouzkova Zbroj__________Zvysi tvoji defence o jeden bod - 50 zlataku";
            cout << endl << "3 - odejit z obchodu" << endl;
            cout << endl << "Vase penize: " << penize;
            cin >> obchod_vyzbroj;

            if (obchod_vyzbroj == 1) {

                    if ((penize - 80) <= 0) {
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

                if ((penize - 50) <= 0) {
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

    for (int i=0; i <= 119; i++) {
        cout << "_";
    }

    cout << endl << endl << "Inu dobre, nyni vas zavedu do meho domu";
    cout << endl << "*Odchazis s cizincem do jeho domu, zatimco se snazis zorientovat*";
    cout << endl << "Tady pane, pojdte, ukazu vam to vevnitr" << endl;

    for (int i=0; i <= 119; i++) {
        cout << "_";
    }

    Sleep(1000);
    cout << endl << endl << "Takze, budte tu jako doma, tak za 20 minut se vratim, tak chvilku pockejte";
    Sleep(3500);
    cout << endl << "*Tak jsi nyni sam doma, chcete nekam jit?* 1 - Do kuchyne / 2 - Do loznice";
    cin >> odpoved_dom;

    for (int i=0; i <= 119; i++) {
        cout << "_";
    }

    Sleep(1000);

    switch (odpoved_dom) {

        case 1:

            cout << endl << endl << "*Rozhodnul si se jit do muzovi kuchyne, pomalu se rozhlizis*";
            Sleep(3500);
            cout << endl << "**";
    }

}
