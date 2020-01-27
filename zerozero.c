#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void easter(void);
void sans();
void qsans();
void msans();
void san();
void sangs();
int main(void){
    system("color 70");
    int olil, yesang, hthit, rolil, ryesang, ms, es, win = 0, event, sinip, nanido, lhp = 5, rhp = 5, rlhp = 5, rrhp = 5, marm = 1, rarm = 1;
    printf("\n\n\n                          ☆★☆★☆★☆★☆★☆★제로 게임랜드☆★☆★☆★☆★☆★☆★");
    for(int i = 0, j = 5;i < j; i++){
        system("color 70");
        Sleep(200);
        system("color 74");
        Sleep(200);
        system("color 76");
        Sleep(200);
        system("color 72");
        Sleep(200);
        system("color 71");
        Sleep(200);
        system("color 75");
        Sleep(200);
    }
    system("color 70");
    Sleep(1000);
    putchar('\n');
    qsans(" 어이 신입인갑쇼?");
    Sleep(2000);
menu:
    sans("신입이시면 1, 신입이 아니시면 0을 입력해주세요");
    scanf("%d", &sinip);
    if(sinip == 1){
        qsans(" 그럼 이쪽 규칙에 대해서 잘 모를터이니 내가 한수 알려주지");
        qsans(" 여기 좀만 있다보면 사람들이 다짜고짜 니한테 승부를 걸거시여");
        qsans(" 그럼 정체모를 말이 들리는데 당황허지말고 그 말만 따라서 해봐");
        msans("?? 그게 다에요??");
        qsans(" 그럼 뭐 더 있을줄 알고? 사실 규칙같은것도 없어~");
        printf("나:");
        san(" 음");
        Sleep(200);
        printf(".");
        Sleep(200);
        printf(".");
        Sleep(200);
        printf(".");
        Sleep(200);
        printf(".");
        Sleep(300);
        printf("알");
        Sleep(200);
        printf("겠");
        Sleep(200);
        printf("어");
        Sleep(200);
        printf("요");
        Sleep(200);
        printf(".");
        Sleep(200);
        printf(".");
        Sleep(200);
        printf(".");
        Sleep(200);
        printf(".");
        Sleep(200);
        printf(".\n");
        Sleep(1000);
        qsans(" 그럼 잘 해봐~");
    }else if(sinip == 0){
        qsans(" 그럼 잘 해봐~");
        Sleep(400);

    }else {
        qsans(" 어이 뭐라고?? 안들려 좀 크게 말해봐");
        Sleep(400);
        goto menu;
    }
    Sleep(1000);
    msans(" 눈앞에 \"초보방\"과 \"고수들만\"이라고 써진 두개의 방이 있다 어느 방으로 갈까?");
nanana:
    Sleep(1000);
    sans("초보방에 들어가려면 1, 옆에 철퇴가 보이는 고수들만 들어간다는 고수방에 들어가시려면 2019학년도 수학 나형 17번 문제의 답을 입력하세요.");
    scanf("%d", &nanido);
    switch(nanido){
        case 1:
        Sleep(1000);
        sans("초보방에 들어갔습니다. 만만해보이는 상대 한명이 승부를 걸었습니다.");
        break;
        case 4:
        Sleep(1000);
        printf(".");
        Sleep(200);
        printf(".");
        Sleep(200);
        printf(".");
        Sleep(200);
        printf(".");
        Sleep(200);
        sans("후회할거에요 당신, 오우! 마침 불리언파 두목이 승부를 거네요!");
        break;
        default:
        sans("괜한짓 말고 그냥 1번 입력해요");
        goto nanana;
    }

start:
    srand((int)time(NULL)); //rand() 함수들을 위한 임의의 수 심기
    rolil = rand()%3;
    ryesang =  rand()%5;
    while(1){
        if(nanido == 4){
        if(rolil == ryesang){
            rolil = 0;
            ryesang = 0;
            break;
        }else if(ryesang - rolil == 1){
            ryesang = 3;
            rolil = 2;
            break;
        }else if(ryesang - rolil == 2){
            ryesang = 4;
            rolil = 2;
            break;
        }
    }
    if(ryesang > 2 + rolil || rolil > ryesang){
        ryesang = rand()%3;
    }else
    {
        break;
    }
    }
    if (win == 1){
        Sleep(500);
        sans("상대방의 차례입니다!\n올릴 손가락의 수를 입력하세요!");
    scanf("%d", &olil);
    if (olil > 2 ){
        sans("음 다시생각해봐요 손가락은 2개까지밖에 못 든다구요");
        Sleep(500);
        goto start;
    }
    if(rolil + olil == ryesang){
        if(ryesang == 0){
            Sleep(500);
            san("\n상대가 올린 손가락의 수: ");
            Sleep(200);
            printf("%d", rolil);
            Sleep(200);
            san(" 내가 올린 손가락의 수: ");
            Sleep(200);
            printf("%d", olil);
            Sleep(200);
            san(" 상대가 예상할 수: ");
            Sleep(200);
            printf("%d\n", ryesang);
            Sleep(1000);
            win = 1;
            event = rand()%4;
            switch (event){
        case 0:
            putchar('\n');
            sangs(" 잔말말고 팔 걷어라");
            Sleep(1000);
            break;
        case 1:
            putchar('\n');
            sangs(" ㅎㅎ");
            Sleep(1000);
            break;
        case 2:
            putchar('\n');
            sangs(" 자 이제 누가 형이지?");
            Sleep(1000);
            break;
        case 3:
            putchar('\n');
            sangs(" 몽둥이가 어디갔었지~?");
            Sleep(1000);
            break;
            }
            for(int i = 0; i < 5; i++){
                system("color 40");
                Sleep(500);
                system("color 70");
                Sleep(500);
            }
            Sleep(1000);
             if(marm == 1){
                    san("\n\n결과: 왼팔 소멸, 남은오른팔 체력: ");  
                    Sleep(200);
                    printf("%d", rhp);
                    Sleep(1000);
                    marm = 0;                
            }
            else
            {
                    sans("\n\n결과: 오른팔도 소멸 남은건 몸뿐");  
                    Sleep(1000);
                    sans("몸 주변에 피같은것이 흐르고 있었다.");
                    Sleep(3000);
                    sans("나조차 꺠닫지 못한 사이에 몸은 이미 바닥에 쓰러져있었다.");
                    Sleep(3000);
                    sans("이런곳에서, 이렇게 비참한 모습으로 최후를 맞이할 줄이야.");
                    Sleep(3000);
                    sans("결국... 이번에도 그들이 바라는대로 농락 당했을뿐인가");
                    system("pause");
                    sans("DEAD MEN NO TELL");
                    system("pause");
                    return 2;                                  
                }
            goto start;
        }else{
            san("상대가 올린 손가락의 수: ");
            Sleep(200);
            printf("%d", rolil);
            Sleep(200);
            san(" 내가 올린 손가락의 수: ");
            Sleep(200);
            printf("%d", olil);
            Sleep(200);
            san(" 상대가 예상한 수: ");
            Sleep(200);
            printf("%d", ryesang);
            Sleep(1000);
            if(marm == 1){
                lhp -= ryesang;
                if(lhp <= 0){
                    printf("\n\n결과: 왼팔 소멸, 남은오른팔 체력: %d\n\n", rhp);  
                    Sleep(1000);
                    puts("참고로 한쪽손이 없어졌지만 검지손가락 까지써서 2를 할 수 있음니다 건투를 빌죠");
                    marm = 0;                  
                }else
                printf("\n\n결과: 왼팔에 멍자국 +%d, 남은 체력 왼팔: %d 오른팔: %d\n\n", ryesang, lhp, rhp);
            }else{
                rhp -= ryesang;
                if(rhp <= 0){
                    printf("\n\n결과: 오른팔도 소멸 남은건 몸뿐");  
                    Sleep(1000);
                    sans("몸 주변에 피같은것이 흐르고 있었다.");
                    Sleep(3000);
                    sans("나조차 꺠닫지 못한 사이에 몸은 이미 바닥에 쓰러져있었다.");
                    Sleep(3000);
                    sans("이런곳에서, 이렇게 비참한 모습으로 최후를 맞이할 줄이야.");
                    Sleep(3000);
                    sans("결국... 이번에도 그들이 바라는대로 농락 당했을뿐인가");
                    system("pause");
                    sans("DEAD MEN NO TELL");
                    system("pause");
                    return 2;     
                }else
                san("\n\n결과: 오른팔에 멍자국 +");
                Sleep(200);
                printf("%d", ryesang);
                Sleep(200);
                san(", 남은 오른팔의 체력: ");
                Sleep(200);
                printf("%d\n", rhp);
            }
            for(int i = 0; i < ryesang; i++){
                system("color 40");
                Sleep(500);
                system("color 70");
                Sleep(500);
            }
            win = 1;
            goto start;
        }
    }else{
        Sleep(500);
    san("상대가 올린 손가락의 수: ");
    Sleep(200);
    printf("%d", rolil);
    Sleep(200);
    san(" 내가 올린 손가락의 수: ");
    Sleep(200);
    printf("%d", olil);
    Sleep(200);
    san(" 상대가 예상한 수: ");
    Sleep(200);
    printf("%d", ryesang);
    Sleep(1000);
    sans("\n결과:상대가 못마춰서 안 맞음");
    Sleep(500);
    win = 0;
    goto start;
    }
    }else{
        sans("\n\n당신의 차례입니다!\n당신이 올릴 손가락의 수와 당신이 외칠 수를 입력 하세요");
    scanf("%d %d", &olil, &yesang);
    if (olil == 12){
        easter();
        system("pause");
        return 1;
    }
    if (olil > 2 || yesang > 2 + olil || olil > yesang){
        sans("\n음 다시생각해봐요 손가락은 2개까지밖에 못 든다구요");
        goto start;
    }
    san("\n상대가 올린 손가락의 수: ");
    Sleep(200);
    printf("%d", rolil);
    Sleep(200);
    san(" 내가 올린 손가락의 수: ");
    Sleep(200);
    printf("%d", olil);
    Sleep(200);
    san(" 내가 떄려야 할 횟수: ");
    Sleep(200);
    if(rolil + olil == yesang){
        if(yesang == 0){
            Sleep(200);
            printf("5\n");
            event = rand()%4;
            switch (event){
            case 0:
            Sleep(1000);
            sangs(" 어케 맞추셨죠?");
            Sleep(1000);
            break;
            case 1:
            Sleep(1000);
            sangs(" 좀 하시네");
            Sleep(1000);
            break;
            case 2:
            Sleep(1000);
            sangs(" 살살 때려주세요~");
            Sleep(1000);
            break;
            case 3:
            Sleep(1000);
            sangs(" 형님 이번만 봐주세요");
            Sleep(1000);
            break;
            win = 0;
            }
            Sleep(1000);
            if(rarm == 1){
                rlhp -= 5;
                    san("\n\n결과: 상대의 왼팔 소멸, 남은 상대의 오른팔 체력: "); 
                    Sleep(200);
                    printf("%d\n\n", rrhp); 
                    Sleep(1000);
                    rarm = 0;                  
            }else{
                rrhp -= 5;
                if(rrhp <= 0){
                    if(nanido == 4){
                    sans("\n\n결과: 상대가 쓰러졌다...");  
                    Sleep(1000);
                    sans("\n상대가 보유한 노트를 읽으며 나는 비로소 깨달을 수 있었다.");  
                    Sleep(1000);
                    sans("\n내가 왜 이곳에 있게 되었는지, 이곳에서 어떤 일이 발생하고 있었는지.");  
                    Sleep(1000);
                    sans("\n제로 게임의 진상에 대해 알게 된 이후, 여러 감정이 동시에 들었다.");  
                    Sleep(1000);
                    sans("\n분노, 무력감, 굴복감, 두려움.");
                    Sleep(1000);
                    sans("\n한편으로는 일종의 경외심마저 들었다.");
                    Sleep(1000);
                    sans("\n본능적으로 도망쳐야 한다는 생각이 들었지만 왠지 발이 떨어지지 않았다.");
                    Sleep(1000);
                    sans("\n나의 발버둥이 갖는 의미가 크지 않다는 것을 이미 알게 되었기 떄문에.\n");
                    system("pause");
                    sans("\nOCCUPATION");
                    Sleep(10004);
                    return 2;
                    }else
                    {
                        san("\n\n결과: 상대를 쓰러트렸다.........\n");
                        Sleep(3000);
                        san("나는 이겼다는 기쁨도 잠시\n");
                        Sleep(3000);
                        san("이곳에 내가 왜있는지, 이곳은 무엇을 하는 곳인지, 게임을 진행하는 목소리의 정체는 무엇인지 의문이 들었다.\n");
                        Sleep(3000);
                        san("치직.....치지직...\n");
                        Sleep(3000);
                        san("안내방송: 관리자 여러분께서는 패배자의 사체를 깔끔하게 처리 부탁드립니다.\n");
                        Sleep(3000);
                        san("안내방송: 승자는 연구소 교육실로 안내해주시기 바랍니다.\n");
                        Sleep(3000);
                        san("마스크를 착용한 남자가 나를 어딘가로 끌고 갔다.\n");
                        Sleep(3000);
                        san("연구소 교육실 생활은 그리 길지 않았다.\n");
                        Sleep(3000);
                        san("그저 의문 하나가 생길 정도의 시간이었다.\n");
                        system("pause");
                        san("SAMPLE TESTING\n");
                        system("pause");
                        return 2;
                    }
                    
                }else
                san("\n\n결과: 오른팔에 멍자국 +");
                Sleep(200);
                printf("%d", yesang);
                Sleep(200);
                san(", 남은 상대의 오른팔 체력:");
                Sleep(200);
                printf("%d\n\n", rrhp);
                
            }
        }else{
            printf("%d\n", yesang);
            win = 0;
            Sleep(1000);
            if(rarm == 1){
                rlhp -= yesang;
                if(rlhp <= 0){
                    san("\n\n결과:상대의 왼팔 소멸, 남은 상대의 오른팔 체력: ");  
                    Sleep(200);
                    printf("%d\n\n", rrhp);
                    Sleep(1000);
                    rarm = 0;                  
                }else
                san("\n\n결과:상대 왼팔에 멍자국 +");
                Sleep(200);
                printf("%d", yesang);
                Sleep(200);
                san(", 남은 상대의체력 왼팔: ");
                Sleep(200);
                printf("%d", rlhp);
                Sleep(200);
                san(" 오른팔: ");
                Sleep(200);
                printf("%d\n\n", rrhp);
            }else{
                rrhp -= yesang;
                if(rrhp <= 0){
                    if(nanido == 4){
                    sans("\n결과: 상대가 쓰러졌다...");  
                    Sleep(3000);
                    sans("상대가 보유한 노트를 읽으며 나는 비로소 깨달을 수 있었다.");  
                    Sleep(3000);
                    sans("내가 왜 이곳에 있게 되었는지, 이곳에서 어떤 일이 발생하고 있었는지.");  
                    Sleep(3000);
                    sans("제로 게임의 진상에 대해 알게 된 이후, 여러 감정이 동시에 들었다.");  
                    Sleep(3000);
                    sans("분노, 무력감, 굴복감, 두려움.");
                    Sleep(3000);
                    sans("한편으로는 일종의 경외심마저 들었다.");
                    Sleep(3000);
                    sans("적으로 도망쳐야 한다는 생각이 들었지만 왠지 발이 떨어지지 않았다.");
                    Sleep(3000);
                    sans(" 발버둥이 갖는 의미가 크지 않다는 것을 이미 알게 되었기 떄문에.");
                    system("pause");
                    puts("OCCUPATION");
                    Sleep(10004);
                    return 2;
                    }else
                    {
                        sans("\n\n결과: 상대를 쓰러트렸다.........");
                        Sleep(3000);
                        sans("나는 이겼다는 기쁨도 잠시");
                        Sleep(3000);
                        sans("이곳에 내가 왜있는지, 이곳은 무엇을 하는 곳인지, 게임을 진행하는 목소리의 정체는 무엇인지 의문이 들었다.");
                        Sleep(3000);
                        sans("치직.....치지직.");
                        Sleep(3000);
                        printf("안내방송: ");
                        sans("관리자 여러분께서는 패배자의 사체를 깔끔하게 처리 부탁드립니다.");
                        Sleep(3000);
                        printf("안내방송: ");
                        sans("승자는 연구소 교육실로 안내해주시기 바랍니다.");
                        Sleep(3000);
                        sans("마스크를 착용한 남자가 나를 어딘가로 끌고 갔다.");
                        Sleep(3000);
                        sans("연구소 교육실 생활은 그리 길지 않았다.");
                        Sleep(3000);
                        sans("그저 의문 하나가 생길 정도의 시간이었다.");
                        Sleep(3000);
                        sans("SAMPLE TESTING");
                        Sleep(3000);
                        return 2;
                    }
                    
                }else
                san("\n\n결과: 오른팔에 멍자국 +");
                Sleep(100);
                printf("%d", yesang);
                Sleep(100);
                san(", 남은 상대의 오른팔의 체력: ");
                Sleep(100);
                printf("%d\n\n", rrhp);
            }
            goto start;
        }
    }else{
        Sleep(1000);
    sans("없음 \n결과: 못맞춰서 못때림\n");
    win = 1;
    goto start;
    }
    goto start;
    }
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
    puts("      :;;:::;III=:      ~:~~:~~~~~~~:::~..~~.~.~:~~~~~.```..~~~..`.~.~.``..~~~;:;=      ");
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

    void qsans(char wa[100])
    {   
        printf("???:");
        for(int i = 0;wa[i] != '\0'; i++){
        putchar(wa[i]);
        Sleep(30);
        }
        putc('\n', stdout);
        return;
    }
    void sans(char wa[100])
    {   
        for(int i = 0;wa[i] != '\0'; i++){
        putchar(wa[i]);
        Sleep(30);
        }
        putc('\n', stdout);
        return;
    }
    void msans(char wa[100])
    {   
        printf("나:");
        for(int i = 0;wa[i] != '\0'; i++){
        putchar(wa[i]);
        Sleep(30);
        }
        putc('\n', stdout);
        return;
    }
    void san(char wa[100])
    {   
        for(int i = 0;wa[i] != '\0'; i++){
        putchar(wa[i]);
        Sleep(30);
        }
        return;
    }
    void sangs(char wa[100])
    {   
        printf("상대: ");
        for(int i = 0;wa[i] != '\0'; i++){
        putchar(wa[i]);
        Sleep(30);
        }
        putchar('\n');
        return;
    }