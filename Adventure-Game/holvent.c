#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

const char* const large_mask[] = {
    "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@",
    "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=-%%@@@@@@@@@@@",
    "@@@@@@@@@@@@@@@@@@*.:#@@@@@@%%- .#@@@@@@@@@@",
    "@@@@@@@@@@@@@@@@%%-..-%%@@@@@@@:  +@@@@@@@@@@",
    "@@@@@@@@@@@@@@@@*. =*+++*#%%@@* +@@@@@@@@@@",
    "@@@@@@@@@@@@@@@@*.        .:-. .#@@@@@@@@@@",
    "@@@@@@@@@@@@@@@@=-=-..:=*=:..  .*@@@@@@@@@@@",
    "@@@@@@@@@@@@@@@%%+@@@-:+@@@+. :@@@@@@@@@@@@@",
    "@@@@@@@@@@@@@@@#=%%*:.=%%@*:. :@@@@@@@@@@@@@",
    "@@@@@@@@@@@@@@@#....  .....  =@@@@@@@@@@@@@",
    "@@@@@@@@@@@@@@@@+.          :@@@@@@@@@@@@@@",
    "@@@@@@@@@@@@@@@@@%%:       -%%@%%*@@@@@@@@@@@@",
    "@@@@@@@@@@@@@@@@@+.     ..::--#@@@@@@@@@@@@",
    "@@@@@@@@@@@@@@#+.        .:-@@@@@@@@@@@@@@@",
    "@@@@@@@@@@%%+:..           .-%%@@@@@@@@@@@@@@@",
    "@@@@@@@@*:.:               .:=#@@@@@@@@@@@@",
    "@@@@@@%%-:%%..*@-                 .#@@@@@@@@",
    "@@@@@@*-%@#.--.::. .           .::=*@@@@@@@",
    "@@@@@@+-%@= -*@@%%-.=*-.         :=++#@@@@@@",
    "@@@@@@%%-#-#-+@@@@%%-.*@%%=.-=-..*=.=#%%@@@@@@@",
    "@@@@@@@+#@@*+@@@@@@*:#@@:*@@@%%=@@:-*@@@@@@@",
    "@@@@@@@@@@@%%@@@@@@@+%%@@@%%@@@@@@@@@@@@@@@@@",
    "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
};

void animateHornetWin() {
    system("cls");
    printf("\n   --- GREENPATH GUARDIAN ---\n\n");
    printf("                                                  #####     ###                             \n"
           "                             %%#   #            *#               %%                           \n"
           "                           %%@*****@#######  ++                  %%%%                          \n"
           "                       *+*%%@#    %%@       + *####%%%%           *%%                           \n"
           "                    +#   #@@    %%@@     #               #%%%%####                              \n"
           "                    #   #@@@   %%@@+   ##                                                    \n"
           "                    ** @@@@  @@@@    %%:--==-                                               \n"
           "                       #%%@@@@@%%%%**+=:-:==--.  ###* *%%%%                               \n"
           "                       #%%%%%%%%#  --:-=-::---:               %%%%                            \n"
           "                       +%%%%%%+ :%%=- ::--::=--:::-                %%                            \n"
           "                        :*%%..=-:::::--:::::::   :=#%%** %%                             \n"
           "                         ##*:. .:::::::::::::        *##%%%%* %%                              \n"
           "                               ::::::::::-::               ##%%@#                            \n"
           "                       +=      :-:::::::::               %%%%       *#** \n"
           "                      ** ...-::-:::::...          %%%%                =-                  \n"
           "                      * ...... :::       ..     %%%%                                       \n"
           "                      #                       +=+                                           \n"
           "                      #%%                 %%%%%%    ..                                          \n"
           "                         ###    %%%%%%%%%%             .                                        \n"
           "                                                    ::                                      \n");
    printf("\n   Hornet leaps away into the leaves. 'Git gud,' she whispers.\n");
    fflush(stdout);
}

void animateNailWin() {
    system("cls");
    printf("\n   --- VICTORY ---\n\n");
    printf(":-=-                                         \n"
           " ---:                                        \n"
           "  -=-                                        \n"
           "   -=-                                       \n"
           "    -=:                                      \n"
           "     ==:                                     \n"
           "     :=-                                     \n"
           "      -=-                                    \n"
           "       -=-                                   \n"
           "        ==-                                  \n"
           "        -=-:                                 \n"
           "         -=-                     .           \n"
           "          -=-                    -   ::      \n"
           "           -=:                  =-   :=      \n"
           "            -=:                :+-   .+:     \n"
           "            :-=    :--==-==-   ++:   .+-     \n"
           "             :=-===-+++=====-=:*+:   :+=     \n"
           "             :++++=*+++--=====-*+:   :+=     \n"
           "           -==++++-++++====-==-++==- :+=     \n"
           "          :+-+++++-++==+++-===-*+=++--+=     \n"
           "         .-=-=++++===---===++=-+*-=++=+=     \n"
           "         :=+-+++++-=====--==+=+*+==#%%@##%%#++ \n"
           "         :++=++++=:--====-===+*++%%@@@@@@@%%#+ \n"
           "        .:-==--==-::---===:=:-++@@@@@@@%%%%#+\n"
           "       :--:-=---:----::--::+=--*@%%@%%#-:%%#%%*\n"
           "  ---=:-:-------::::-==++++++=--%%%%%%%%%%*#*+#+\n"
           " ------=:---------=+++==+++++++=-#%%%%+=+%%**\n"
           "    :::::::::::-:-======-======-::+##%%%%##* \n");
    printf("\n   The False Knight falls. The City Crest is yours.\n");
    fflush(stdout);
}

void animateLose() {
    int invisible[23] = {0};
    srand((unsigned int)time(NULL));
    for (int iter = 0; iter < 20; iter++) {
        system("cls");
        printf("\n   --- SHATTERED ---\n\n");
        int to_hide = rand() % 4;
        for(int j=0; j<to_hide; j++) invisible[rand() % 23] = 1;
        for (int i = 0; i < 23; i++) {
            if (!invisible[i]) printf("   %s\n", large_mask[i]);
            else printf("\n");
        }
        fflush(stdout);
        Sleep(100);
    }
}

int main(int argc, char *argv[]) {
    int choice;
    system("cls");
    printf("--- DIRTMOUTH ---\n\n");
    printf("The fading town of Dirtmouth lies quiet under a pale wind.\n");
    printf("The iron well leads to the ruins of Hallownest.\n\n");
    
    printf("Where will you go?\n");
    printf("1. The Forgotten Crossroads\n");
    printf("2. Greenpath\n");
    printf("Choice: ");
    
    if (scanf("%d", &choice) != 1) return 0;

    if (choice == 1) {
        system("cls");
        printf("\n--- FORGOTTEN CROSSROADS ---\n\n");
        printf("A False Knight guards the path. Fight him?\n1. Yes 2. No: ");
        scanf("%d", &choice);
        if (choice == 1) animateNailWin(); else animateLose();
    } else {
        system("cls");
        printf("\n--- GREENPATH ---\n\n");
        printf("Hornet stands on a bridge of thorns. Bow to her?\n1. Yes 2. No: ");
        scanf("%d", &choice);
        if (choice == 1) animateHornetWin(); else animateLose();
    }

    printf("\nPress Enter to exit Hallownest...");
    int c;
    while ((c = getchar()) != '\n' && c != EOF); 
    getchar(); 

    return 0;
}