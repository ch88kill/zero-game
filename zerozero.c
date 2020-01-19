#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void easter(void);
int main(void){
    int olil, yesang, hthit, rolil, ryesang, ms, es;
start:
    srand((int)time(NULL)); //rand() 함수들을 위한 임의의 수 심기
    rolil = rand()%3;
    printf("당신이 올릴 손가락의 수와 당신이 예상하는 올린 손가락의 수를 입력 하세요\n");
    scanf("%d %d", &olil, &yesang);
    if (olil > 11)
        easter();
        return 1;
    if (olil > 2 || yesang > 2 + olil || olil > yesang){
        puts("음 다시생각해봐요 손가락은 2개까지밖에 못 든다구요\n");
        goto start;
    }
    printf("상대가 올린 손가락의 수:%d 내가 올린 손가락의 수: %d 내가 때려야할 횟수: ", rolil, olil);
    if(rolil + olil == yesang){
        if(yesang == 0){
            printf("5\n");
        }else{
            printf("%d\n", yesang);
        }
    }else
    puts("없음ㅋ\n");
    }

    void easter(void){
    puts("                                                  `.~~~.");
    puts("                               .:;;;;:          `::::;III;");
    puts("                              ;:~:;;II+:        ~:::~;;IIii               `.`");
    puts("                             `:::~:;II=o~       .:::::;;==+             ::::;II~");
    puts("                              ::::~;;I==+        ;:::::;IIi;           ::~:::;IiI");
    puts("                              `;:::::;IIi=       ::~:::;II=+           :~:~:::I=+:");
    puts("                               :::~:::;=I+:      ~:::::;;II+:          :~~~;;:;Ii+");
    puts("                .:;III:        `::::::;II=o.     .:~~::;;IIi+          :~~~:::;I=o~");
    puts("               :::::IIi=        :~~:::;;I=i+     .:~~~::;;;I+.         ~~~~:::;I=oI");
    puts("              ~:::::;=I+I       .::~~::;;;I+;     ~~~::::;;I+;         ~~~~~::;I=+=");
    puts("               ;::::;II=+.       :~~~:::;;I=+     ~~~:::;;;Ii=         ~~~~:;;;I=+i");
    puts("               .;~::;;IIi+       .~~::::;;;I+;    :~~:::::;;=+         ~~.~~~:;;Iio");
    puts("                ;:~~::;;=i=       ~~~:::::;;=+.   :~~:::;;:;Ii:        ~.~~:::;;IiO");
    puts("                .::~~:;;I=+:      ~~~~:::::;Iii   :~~~:::::;Ii+        ~.~~~::;;;io`");
    puts("                 :~~::;II=io`     .~~~:::::;;I+;  :~~::::~:;I=o`      `..~~~::;;Iio~");
    puts("                 .:~~~:;;II=i      :~~~:::::;Iio` ::~~~::~~;I=+~      ~..~~~:::;Ii+;");
    puts("                  ;~~~::;;IIi:     :~~~:::~~;I=+I :~...~~.~~:;i:      ~..~~~:::;;=+=");
    puts("   .:;I:`         `:~~~:::;IIi`    .:~~~~~~~~:;=i ~~..~~~~~~:Ii:     `~....~:::II=o=");
    puts("  ::~:;I=I         ~~~~::::;;Ii    `:~..~~~~~:;Ii.`~~~~~~~~:;Ii:     ........~:;=io~");
    puts(" `;:~:;IIii         :~~~::;;;IIi    :~..~~~~~::Ii; ~~~~~~~~::;=~     ....~~~~::;I=o");
    puts("  :::;;;==i+`       ~:..~::;;II==   `:~~~~~~~::;== ~~~~~~~~::;=~     ~~~~~~~:::IIii");
    puts("  `;::;;II==+`       ....~:::~..~:   `.~~~~~~~::;i ~~~:::::::;i:     ~~~~~~~:::II+I");
    puts("   .;:;;I;IIi+`      .~...~...~::I=   :~~~~:...~;i::~~~~~~:::::I    ~.~~~~~~::;I=+:");
    puts("    ~;:;;II=i++`      ;:~~~`...;;;I=  .~~~~:...~:;:.....~~~~.~~.~~......~~~~~:;Ii+.");
    puts("     :::;;I==IIi.      ~.~~~....~:;== .:```.......``~.~~....````......~.````..~:;i");
    puts("      :;;:::;III=:      ~:~~:~~~~~~~:::~..~~.~.~:~~~~~.```..~~~..`.~.~.``..~~~;:;=      `");
    puts("       ::~::;;III=i`     ;:~~::;;::~.......~~~~::~....```~~~~~~~.``.~.`..~~~~~;ii+");
    puts("        ::::::;III=i;     ::~~~~:;::~...~.~:...~~~..~```.~~~~~~~.```:....~~~:::Io+");
    puts("         ~::::;;I;;;I:`   `;...~.~;;~~.`~~~:...~~~....```.~:~~:.```~~~...~:~~;::==");
    puts("          ~:::;:::::;::.   .````..~....~.~~~~..........``...~...`.~~~~~.......~.;~");
    puts("           .;:~~:::::::::;~.........~~~~~~~~~~~~....~..~~~~~~~.~~~~~~~::::~~~~~;I:                          .~~:::::~~.");
    puts("             :::::::::;;::~~~~~~~~~~~~~~~~~~::::::~~~~~~::~:::~::~~~:~~:::;III;:I;                      .:;;;;;;;III=====;`");
    puts("              ~:~~~:::~:~~~~~~~~~~~~~::~~~::~::::~:~~~~~~~~::~~~~:.~~::::~.~~;;;~:~                 `.:::::::::::;;;IIIII=+I");
    puts("               .:~~::~~.~~:::~~~~~~~~::~::::~:;~;:::~..~~:~:~:~~~:~:~~~~~~~::~::I:;~         `    `~~~~~~~~~:::;;;III==ii++;");
    puts("                `:~~:~...~~~~~~~::::::::::;;::;;::~~~~~.~~~:~:~:~~.~.......~~:;:;:;;:    `      `.~~~....~~~::;;II==iiI:.");
    puts("                 `:~~~....~~~~:::::::::::;;;;::::~~~~~~~~~::::~~~..............~~::;II        `...........~;;;I==i=:.");
    puts("                  .~.~~....~~~::;;;:::;;;:::::::::~~~~~~::~~~~.................~~~~::;;~.```.~.......~~~~~:;I=ii;`");
    puts("                   ~~~~~...~~:::;;;;;;:::~:::::::::::::~~~......~........~~~..~~~::::~:~~~~~........~~~~~;I=i=`");
    puts("                    ~~~~~..~~:::;;;::::::::::::::::::~~~~~..............~~.~.~~~~~~~~~~~~~........~~~~~;Ii+I`");
    puts("                     ~:~~~~~~~~~:::::::::::::::::::~~~~~.................~.......~~~~~~~~~......~~~~~:Ii+;");
    puts("                      .~::~~...~~:::::::::::::::::::~~~~~........................~~~~~~~~~~..~~~.~~:;=+I");
    puts("                       .:~~~....~~~~:::::::::::::::::~~~~.....```.........~.~~~~~~~~~~~~~~~.....~~:;io:");
    puts("                        ~~~~~..~~~~~~~:::::::::::::::::~~.............~~.~.~...~~~~~~~~~~~~.~~~::;I=+~");
    puts("                         ~~~~~~~.~..~~:::::::::::::::::~~~.........~~~..~~~.~~~~~~~~~~~~~~:::;;;II=+~");
    puts("                          :~~~~.....~~~::::::~~~:::::::~~~~.~....~~~...~~.~~~.~~~~~~~~~~~:;IIIII=ii.");
    puts("                          `:~~~~.....~~~~:::~~~::::::::~~~~~~...~~~~...~...~~~~~~~~~~~:::;;=II=ii;");
    puts("                           ~:~~~~......~~~~::::~~~~:::~~~~~~~.........~...~~~~~~~~~:::;I;;II=i+;");
    puts("                            ::~~~.......~~~~:~~~~~::~~~~~~~~~..........~~~~~~:::::::;;;IIII=+I");
    puts("                            `:~~~~~.....~~~~~~~~~~~~~~~~~~~~...........~~~~:::;;;;;;;;II==ii`");
    puts("                             .:~~~~~~...~~~~~~~~~~~~.~~~~~~~..~....~~~~~::::::;;;;;;III=i+:");
    puts("                              :::~~~~~.~.~~~~~~~~~~~.~~~~~~~~..~~~~~::::::::;;;;;;II==i+=`");
    puts("                               ::::~~~~~..~~~~~~~~~~~~::~~~~~~:~::~:::::::;;;;I;III=i++~");
    puts("                                :::~~~~~~~~~~~~~~~:::::::;:;:::::::::::;;;;IIIIII==i+I");
    puts("                                 ::~~~~~~~.~::~~::::;I:;IIII;;;;;;;;;IIIIIIIIII==ii;`");
    puts("                                  ::~~~~~~::::::;;:;I=I;I=I;;::::;;II=I=======iiI.");
    puts("                                   ::~::::::::::;;;Ii=;;I;;::::;;;II==iiiii++i=:");
    puts("                                    ;:::;;;:::;;;;;iI:;III;:::::;I=i++ooooooooi");
    puts("                                     ::::::::;I;;I+=;;;~~~~~~~~::;I=ii+++++ooo.");
    puts("                                      :::::::;II=i;~:~~::::~:::::;Iii++oooOoo+");
    puts("                                       ::::::;;II;::::::;;;:::::~:I=i++oOOooOi");
    puts("                                        .:;;III=::~~:~::::::::::::;iooOO8Ooooo");
    puts("                                         `:~~::~~~::::::::::::::~~;iOOOOooo+oo.");
    puts("                                          ::~~~~~~~~~~~~~~~~::::~~;=OOooooo+oo:");
    puts("                                          .;:~~:~~~~~~~~~~~~~:~:~~:=OooooooooO=");
    puts("                                          `;:~~~~~~~~~~~~~~~~:::~~:=oo+ooooooo+");
    puts("                                           ;:~~~~~~~~~~~~~~~~:~~~~:Iooo+++ooOOo`");
    puts("                                           ;;:~~~~~~~~~~~~~~~:~~~~:I+o++++oOOOO~");
    puts("                                           .;:~~~~~~~~~~~~~~:~:~~~:Ii+++++ooO8O:");
    puts("                                           `;::~~~~~~~~~~~~:~~~~:::;i++i++ooO8OI");
    puts("                                            ;::~~~~~~~~~~~~~:::::~::=iii+++OO8O+`");
    puts("                                            ~;::~::~~~~~~::::::~:::;=iii+++oO88O;");
    puts("                                            `;::::::~~:~~::::~:::::;=++++++O888O+");
    }