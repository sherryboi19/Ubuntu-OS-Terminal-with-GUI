#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

// macros (constant) -for text colors
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define WHITE   "\x1b[37m"
#define RESET   "\x1b[0m"
#define BGREEN "\e[4;32m"
#define BYELLOW "\e[4;33m"

int learn=0;
int flag=0;

void *runcmd(void *prm)
{
   char *command=(char *)prm;
   if(learn==1)
   {
       printf("\nCommand : %s\n\n",command);
   }
   system(command);
}

int main()
{
   char *un=getlogin();
   int num,temp=0;
   int dirOp,temp1=0;
   int fOp,temp2=0;
   int fcOp,temp3=0;
   int uOp,temp4=0;
   int utOp,temp5=0;
   int cmOp,temp6=0;
   system("clear");
   printf("\n\n\n\n\n\n\n");
   printf(BLUE"\t\t\t =================================\n\n");
   system("sleep 1");
   printf("\t\t\t\t   🆆 🅴 🅻 🅲 🅾 🅼 🅴 \n\n");
   system("sleep 1");
   printf("\t\t\t =================================\n");
   system("sleep 2");
   system("clear");
   printf("\n\n\n\n\n\n\n\n\n");
   printf("\t\t\t\t\t😋️\n");
   system("sleep 2");
   system("clear");
   do
   {
   system("clear");
   printf(BLUE"\t      ***** %s ,\b 𝘞 𝘦𝘭𝘤𝘰𝘮 𝘦 𝘵𝘰 𝘓𝘢𝘺𝘮 𝘢𝘯 𝘛𝘦𝘳𝘮 𝘪𝘯𝘢𝘭*****\n\n",un);
   printf(YELLOW"\t\t\t \t🅼 🅰 🅸 🅽  🅼 🅴 🅽 🆄\n");
   printf(RESET);
   printf(YELLOW"\t      -");
   printf(YELLOW"-------------------------------------------------\n");
   printf(YELLOW"\t      -");
   printf(WHITE "\t ★彡[1. ᴅɪʀᴇᴄᴛᴏʀʏ ᴏᴘᴇʀᴀᴛɪᴏɴꜱ.]彡★              ");
   printf(YELLOW"-\n" );
   printf(YELLOW"\t      -");
   printf(WHITE"\t ★彡[2. ꜰɪʟᴇ ᴏᴘᴇʀᴀᴛɪᴏɴꜱ.]彡★                   ");
   printf(YELLOW"-\n" );
   printf(YELLOW"\t      -");
   printf(WHITE"\t ★彡[3. ꜰɪʟᴇ ᴄᴏɴᴛᴇɴᴛ ᴏᴘᴇʀᴀᴛɪᴏɴꜱ.]彡★           ");
   printf(YELLOW"-\n" );
   printf(YELLOW"\t      -");
   printf(WHITE"\t ★彡[4. ᴜꜱᴇʀ ᴏᴘᴇʀᴀᴛɪᴏɴꜱ.]彡★                   ");
   printf(YELLOW"-\n" );
   printf(YELLOW"\t      -");
   printf(WHITE"\t ★彡[5. ᴜᴛɪʟɪʏ ᴏᴘᴇʀᴀᴛɪᴏɴꜱ.]彡★                 ");
   printf(YELLOW"-\n" );
   printf(YELLOW"\t      -");
   printf(WHITE"\t ★彡[6. ᴄᴏᴍᴘɪʟᴇʀ.]彡★                          ");
   printf(YELLOW"-\n" );
   printf(YELLOW"\t      -");
   printf(RED"\t ★彡[7. ᴇxɪᴛ.]彡★                              ");
   printf(YELLOW"-\n" );
   printf(YELLOW"\t      -");
   printf(YELLOW"-------------------------------------------------\n");
   if(flag==0)
   {
      printf(WHITE"\nDo You Want to Enable Learning Mode?\n");
      printf(BLUE"PRESS '1' TO ENABLE \n");
      printf(BLUE"PRESS '0' TO DISABLE \n");
      printf(WHITE);
      scanf("%d",&learn);
      while(learn < 0||learn > 1)
      {
          printf(RED "\nINVALID INPUT!\n");
          printf(WHITE "\nDo You Want to Enter Learning Mode: ");
          printf(WHITE);
          scanf("%d",&learn);
      }
      flag=1;
   }
   printf(CYAN"\nDear User,Enter Number for Required Operation: ");
   printf(WHITE "");
   scanf("%d",&num);
   while(num<1||num>7)
   {
      printf(RED "\n OOPS!INVALID INPUT!\n");
      printf(BLUE "\nEnter Again: ");
      printf(WHITE "");
      scanf("%d",&num);
   }
   if(num==1)
   {
      do
      {
      system("clear");
      printf(YELLOW"\t\t---------------------------------------\n");
      printf(YELLOW"\t\t🅳 🅸 🆁 🅴 🅲 🆃 🅾 🆁 🆈  🅾 🅿 🅴 🆁 🅰 🆃 🅸 🅾 🅽 🆂\n");
      printf(YELLOW"\t\t---------------------------------------\n");
     
      printf(WHITE "\n\t\t 1. Current Directory Address.\n");
      printf("\t\t 2. Create Directory.\n");
      printf("\t\t 3. Delete Directory.\n"); 
      printf("\t\t 4. Show List.\n");
      printf("\t\t 5. Show List With Details of Subfolders.\n");
      printf("\t\t 6. Show List Including Hidden Files.\n");
      printf("\t\t 7. Show List With Complete Info.\n");
      printf("\t\t 8. Forward Current Directory.\n");
      printf("\t\t 9. Main Menu.\n");
      printf(YELLOW"\t\t---------------------------------------\n");
      printf(CYAN"\nDear user,Enter your choice:");
      
      printf(WHITE "");
      scanf("%d",&dirOp);
      while(dirOp<1||dirOp>9)
      {
         printf(RED "\nINVALID INPUT!\n");
         printf(BLUE "\nEnter Num : ");
         printf(WHITE "");
         scanf("%d",&dirOp);
      }
      printf("\n");
      if(dirOp==1)
      {
         char cmd[]="pwd"; //current open directory address
         pthread_t pid;
         pthread_create(&pid,NULL,runcmd,(void *)cmd);
         pthread_join(pid,NULL);
      }
      if(dirOp==2)
      {
         system("ls");
         char dirname[25];
         printf(CYAN"\n\nEnter Directory Name : ");
         scanf("%s",dirname);
         char cmd[]="mkdir ";
         strcat(cmd,dirname);
         pthread_t pid;
         pthread_create(&pid,NULL,runcmd,(void *)cmd);
         pthread_join(pid,NULL);
         printf("\n");
         system("ls");
      }
      if(dirOp==3)
      {
         system("ls");
         char dirname[25];
         printf(CYAN"\n\nEnter Directory Name to Delete : ");
         scanf("%s",dirname);
         char cmd[]="rmdir ";
         strcat(cmd,dirname);
         pthread_t pid;
         pthread_create(&pid,NULL,runcmd,(void *)cmd);
         pthread_join(pid,NULL);
         printf("\n");
         system("ls");
      }
      if(dirOp==4)
      {         
         char cmd[]="ls"; 
         pthread_t pid;
         pthread_create(&pid,NULL,runcmd,(void *)cmd);
         pthread_join(pid,NULL);     
      }
      if(dirOp==5)
      {
         char cmd[]="ls -R"; 
         pthread_t pid;
         pthread_create(&pid,NULL,runcmd,(void *)cmd);
         pthread_join(pid,NULL);  
      }
      if(dirOp==6)
      {
         char cmd[]="ls -a"; 
         pthread_t pid;
         pthread_create(&pid,NULL,runcmd,(void *)cmd);
         pthread_join(pid,NULL);       
      }
      if(dirOp==7)
      {
         char cmd[]="ls -l"; 
         pthread_t pid;
         pthread_create(&pid,NULL,runcmd,(void *)cmd);
         pthread_join(pid,NULL);       
      }
      if(dirOp==8)
      {
         char dirname[25];
         printf(CYAN"\n\nEnter Directory Name to Move Forword : ");
         scanf("%s",dirname);
         char cmd[]="cd ";
         strcat(cmd,dirname);
         pthread_t pid;
         pthread_create(&pid,NULL,runcmd,(void *)cmd);
         pthread_join(pid,NULL); 
      }
      if(dirOp==9)
      {
         break;
      }
      printf("\n\nEnter 0 to Continue....");
      scanf("%d",&temp1); 
      }while(1);  
   }
    if(num==2)
   {
      do
      {
      system("clear");
      printf(YELLOW"\t\t--------------------------------------------\n");
      printf(YELLOW"\t\t\t🅵 🅸 🅻 🅴  🅾 🅿 🅴 🆁 🅰 🆃 🅸 🅾 🅽 🆂\n");
      printf(YELLOW"\t\t--------------------------------------------\n");
      printf(WHITE "\n\t\t 1. Create File.\n");
      printf("\t\t 2. Create File and Open/Open Exsisting File.\n");
      printf("\t\t 3. Create File and Take Input.\n");
      printf("\t\t 4. Display File Content.\n");
      printf("\t\t 5. Delete File.\n");
      printf("\t\t 6. Copy File.\n");
      printf("\t\t 7. Move File.\n");
      printf("\t\t 8. Main Menu.\n");
      printf(YELLOW"\t\t--------------------------------------------\n");
      printf(CYAN "\nDear User,Enter your choice: ");
      printf(WHITE "");
      scanf("%d",&fOp);
      while(fOp<1||fOp>8)
      {
         printf(RED "\nINVALID INPUT!\n");
         printf(BLUE "\nEnter Num : ");
         printf(WHITE "");
         scanf("%d",&fOp);
      }
      printf("\n");
      if(fOp==1)
      {
         char tfname[25];
         printf("\n\nEnter File Name (name.extenstion) : ");
         scanf("%s",tfname);
         char cmd[]="touch ";
         strcat(cmd,tfname);
         pthread_t pid;
         pthread_create(&pid,NULL,runcmd,(void *)cmd);
         pthread_join(pid,NULL); 
      }
      if(fOp==2)
      {
         char tfname[25];
         printf("\n\nEnter File Name (name.extenstion) : ");
         scanf("%s",tfname);
         char cmd[]="gedit ";
         strcat(cmd,tfname);
         pthread_t pid;
         pthread_create(&pid,NULL,runcmd,(void *)cmd);
         pthread_join(pid,NULL);
      }
      if(fOp==3)
      {
         char tfname[25];
         printf("\n\nEnter File Name (name.extenstion) : ");
         scanf("%s",tfname);
         printf("Press Ctrl+D to Save!\n\n");
         char cmd[]="cat > ";
         strcat(cmd,tfname);
         pthread_t pid;
         pthread_create(&pid,NULL,runcmd,(void *)cmd);
         pthread_join(pid,NULL);
      }
      if(fOp==4)
      {
         char tfname[25];
         printf("\n\nEnter File Name (name.extenstion) : ");
         scanf("%s",tfname);
         char cmd[]="cat ";
         strcat(cmd,tfname);
         pthread_t pid;
         pthread_create(&pid,NULL,runcmd,(void *)cmd);
         pthread_join(pid,NULL);
      }
      if(fOp==5)
      {
         char tfname[25];
         printf("\n\nEnter File Name to Delete : ");
         scanf("%s",tfname);
         char cmd[]="rm ";
         strcat(cmd,tfname);
         pthread_t pid;
         pthread_create(&pid,NULL,runcmd,(void *)cmd);
         pthread_join(pid,NULL);
      }
      if(fOp==6)
      {
         char tfname[25];
         char tfname1[25];
         printf("\n\nEnter Source File Name : ");
         scanf("%s",tfname);
         printf("\n\nEnter Destination File/Directory Name : ");
         scanf("%s",tfname1);
         char cmd[]="cp ";
         strcat(cmd,tfname);
         char sp[]=" ";
         strcat(cmd,sp);
         strcat(cmd,tfname1);
         pthread_t pid;
         pthread_create(&pid,NULL,runcmd,(void *)cmd);
         pthread_join(pid,NULL);
      }
      if(fOp==7)
      {
         char tfname[25];
         char tfname1[25];
         printf("\n\nEnter File Name : ");
         scanf("%s",tfname);
         printf("\n\nEnter Directory Path : ");
         scanf("%s",tfname1);
         char cmd[]="mv ";
         strcat(cmd,tfname);
         char sp[]=" ";
         strcat(cmd,sp);
         strcat(cmd,tfname1);
         pthread_t pid;
         pthread_create(&pid,NULL,runcmd,(void *)cmd);
         pthread_join(pid,NULL);
      }
      if(fOp==8)
      {
         break;
      }
      printf("\n\nEnter 0 to Continue....");
      scanf("%d",&temp2); 
      }while(1);    
   }
    if(num==3)
   {
      do
      {
      system("clear");
      printf(YELLOW"\t\t---------------------------------------------\n");
      printf(YELLOW"\t\t🅵 🅸 🅻 🅴  🅲 🅾 🅽 🆃 🅴 🆇 🆃  🅾 🅿 🅴 🆁 🅰 🆃 🅸 🅾 🅽 🆂\n");
      printf(YELLOW"\t\t---------------------------------------------\n");
      printf(WHITE "\n\t\t 1. Display First 10 Lines.\n");
      printf("\t\t 2. Display Last 10 Lines.\n");
      printf("\t\t 3. Display in Reverse.\n"); 
      printf("\t\t 4. Main Menu.\n");
      printf(YELLOW"\t\t---------------------------------------------\n");
      printf(CYAN "\n Dear User,Enter Your Choice : ");
      printf(WHITE "");
      scanf("%d",&fcOp);
      while(fcOp<1||fcOp>4)
      {
         printf(RED "\nINVALID INPUT!\n");
         printf(BLUE "\nEnter Num : ");
         printf(WHITE "");
         scanf("%d",&fcOp);
      }
      printf("\n");
      if(fcOp==1)
      {
         char tfname[25];
         printf("\n\nEnter File Name : ");
         scanf("%s",tfname);
         char cmd[]="head ";
         strcat(cmd,tfname);
         pthread_t pid;
         pthread_create(&pid,NULL,runcmd,(void *)cmd);
         pthread_join(pid,NULL);
      }
      if(fcOp==2)
      {
         char tfname[25];
         printf("\n\nEnter File Name : ");
         scanf("%s",tfname);
         char cmd[]="tail ";
         strcat(cmd,tfname);
         pthread_t pid;
         pthread_create(&pid,NULL,runcmd,(void *)cmd);
         pthread_join(pid,NULL);
      }
      if(fcOp==3)
      {
         char tfname[25];
         printf("\n\nEnter File Name : ");
         scanf("%s",tfname);
         char cmd[]="tac ";
         strcat(cmd,tfname);
         pthread_t pid;
         pthread_create(&pid,NULL,runcmd,(void *)cmd);
         pthread_join(pid,NULL);
      }
      if(fcOp==4)
      {
         break;
      }
      printf("\n\nEnter 0 to Continue....");
      scanf("%d",&temp3); 
      }while(1);
   }
    if(num==4)
   {
      do
      {
      system("clear");
      printf(YELLOW"\t\t--------------------------------------------\n");
      printf(YELLOW "\t\t\t🆄 🆂 🅴 🆁  🅾 🅿 🅴 🆁 🅰 🆃 🅸 🅾 🅽 🆂  \n");
      printf(YELLOW"\t\t--------------------------------------------\n");
      printf(WHITE "\n\t\t1. Provide Administrative Access to User.\n");
      printf("\t\t2. Display UserID & GroupID.\n");
      printf("\t\t3. Add User.\n");
      printf("\t\t4. Create or Change Password.\n");
      printf("\t\t5. Add Group.\n");
      printf("\t\t6. Main Menu.\n");
      printf(YELLOW"\t\t-------------------------------------------\n");
      printf(CYAN"\n Dear User,Enter Your Choice: ");
      printf(WHITE "");
      scanf("%d",&uOp);
      while(uOp<1||uOp>6)
      {
         printf(RED "\nINVALID INPUT!\n");
         printf(BLUE "\nEnter Num : ");
         printf(WHITE "");
         scanf("%d",&uOp);
      }
      printf("\n");
      if(uOp==1)
      {
         char tuname[25];
         printf("\n\nEnter User Name : ");
         scanf("%s",tuname);
         char cmd[]="su ";
         strcat(cmd,tuname);
         pthread_t pid;
         pthread_create(&pid,NULL,runcmd,(void *)cmd);
         pthread_join(pid,NULL);
      }
      if(uOp==2)
      {
         char cmd[]="id";
         pthread_t pid;
         pthread_create(&pid,NULL,runcmd,(void *)cmd);
         pthread_join(pid,NULL);
      }
      if(uOp==3)
      {
         char tuname[25];
         printf("\n\nEnter User Name : ");
         scanf("%s",tuname);
         char cmd[]="sudo useradd ";
         strcat(cmd,tuname);
         pthread_t pid;
         pthread_create(&pid,NULL,runcmd,(void *)cmd);
         pthread_join(pid,NULL);
      }
      if(uOp==4)
      {
         char tuname[25];
         printf("\n\nEnter User Name : ");
         scanf("%s",tuname);
         char cmd[]="sudo passwd ";
         strcat(cmd,tuname);
         pthread_t pid;
         pthread_create(&pid,NULL,runcmd,(void *)cmd);
         pthread_join(pid,NULL);
      }
      if(uOp==5)
      {
         char tgname[25];
         printf("\n\nEnter Group Name : ");
         scanf("%s",tgname);
         char cmd[]="sudo groupadd ";
         strcat(cmd,tgname);
         pthread_t pid;
         pthread_create(&pid,NULL,runcmd,(void *)cmd);
         pthread_join(pid,NULL);
      }
      if(uOp==6)
      {
         break;
      }
      printf("\n\nEnter 0 to Continue....");
      scanf("%d",&temp4); 
      }while(1);
   }
   if(num==5)
   {
      do
      {
      system("clear");
      printf(YELLOW"\t\t---------------------------------------\n");
      printf(YELLOW"\t\t  🆄 🆃 🅸 🅻 🅸 🆃 🆈  🅾 🅿 🅴 🆁 🅰 🆃 🅸 🅾 🅽 🆂 \n");
      printf(YELLOW"\t\t---------------------------------------\n");
      printf(WHITE "\n\t\t 1. Show Date.\n");
      printf("\t\t 2. Show Calendar.\n"); 
      printf("\t\t 3. Sleep.\n");
      printf("\t\t 4. Show Time to Execute Command.\n");
      printf("\t\t 5. Show Disk Fragments.\n");
      printf("\t\t 6. Main Menu.\n");
      printf(YELLOW"\t\t---------------------------------------\n");
      printf(CYAN "\nDear User,Enter Your Choice : ");
      printf(WHITE "");
      scanf("%d",&utOp);
      while(utOp<1||utOp>6)
      {
         printf(RED "\nINVALID INPUT!\n");
         printf(BLUE "\nEnter Num : ");
         printf(WHITE "");
         scanf("%d",&dirOp);
      }
      printf("\n");
      if(utOp==1)
      {
         char cmd[]="date";
         pthread_t pid;
         pthread_create(&pid,NULL,runcmd,(void *)cmd);
         pthread_join(pid,NULL);
      }
      if(utOp==2)
      {
         char cmd[]="cal";
         pthread_t pid;
         pthread_create(&pid,NULL,runcmd,(void *)cmd);
         pthread_join(pid,NULL);
      }
      if(utOp==3)
      {
         char sec[5];
         printf("\n\nEnter Number of Seconds : ");
         scanf("%s",sec);
         char cmd[]="sleep ";
         strcat(cmd,sec);
         pthread_t pid;
         pthread_create(&pid,NULL,runcmd,(void *)cmd);
         pthread_join(pid,NULL);
      }
      if(utOp==4)
      {
         char cmd[]="time";
         pthread_t pid;
         pthread_create(&pid,NULL,runcmd,(void *)cmd);
         pthread_join(pid,NULL);
      }
      if(utOp==5)
      {
         char cmd[]="df";
         pthread_t pid;
         pthread_create(&pid,NULL,runcmd,(void *)cmd);
         pthread_join(pid,NULL);
      }
      if(utOp==6)
      {
         break;
      }
      printf("\n\nEnter 0 to Continue....");
      scanf("%d",&temp5); 
      }while(1);
   }
   if(num==6)
   {
      do
      {
      system("clear");
      printf(YELLOW"\t\t---------------------------------------\n");
      printf(YELLOW "\t\t  🅲 🅾 🅼 🅿 🅸 🅻 🅴 🆁  🅾 🅿 🅴 🆁 🅰 🆃 🅸 🅾 🅽 🆂  \n");
      printf(YELLOW"\t\t---------------------------------------\n");
      printf(WHITE "\n\t\t 1. Compile File.\n");
      printf("\t\t 2. Compile and Run.\n");
      printf("\t\t 3. Main Menu.\n");
      printf(YELLOW"\t\t---------------------------------------\n");
      printf(CYAN"\n Dear User,Enter your Choice: ");
      printf(WHITE "");
      scanf("%d",&cmOp);
      while(cmOp<1||cmOp>3)
      {
         printf(RED "\nINVALID INPUT!\n");
         printf(BLUE "\nEnter Num : ");
         printf(WHITE "");
         scanf("%d",&cmOp);
      }
      printf("\n");
      if(cmOp==1)
      {
         int th=0;
         printf("Enter 1 for Normal 2 for Threaded File : ");
         scanf("%d",&th);
         while(th<1||th>2)
         {
            printf(RED "\nINVALID INPUT!\n");
            printf(WHITE "\nEnter Num : ");
            scanf("%d",&th);
         }
         if(th==1)
         {
            char ifname[25];
            char ofname[25];
            printf("\n\nEnter Input File Name (name.extenstion) : ");
            scanf("%s",ifname);
            printf("\n\nEnter Output File Name : ");
            scanf("%s",ofname);
            char cmd[]="gcc ";
            strcat(cmd,ifname);
            int size=strlen(cmd);
    	    char *newcmd=(char *)malloc(size+4);
            int k=0;
            for(int i=0;i<size;i++)
            {
               newcmd[i]=cmd[i];
               k++;
            }
            newcmd[k]=' ';
            k++;
            newcmd[k]='-';
            k++;
            newcmd[k]='o';
            k++;
            newcmd[k]=' ';
            k++;
            strcat(newcmd,ofname);
            pthread_t pid;
            pthread_create(&pid,NULL,runcmd,(void *)newcmd);
            pthread_join(pid,NULL);
         }
         else
         {
            char ifname[25];
            char ofname[25];
            printf("\n\nEnter Input File Name (name.extenstion) : ");
            scanf("%s",ifname);
            printf("\n\nEnter Output File Name : ");
            scanf("%s",ofname);
            char cmd[]="gcc -pthread ";
            strcat(cmd,ifname);
            int size=strlen(cmd);
    	    char *newcmd=(char *)malloc(size+4);
            int k=0;
            for(int i=0;i<size;i++)
            {
               newcmd[i]=cmd[i];
               k++;
            }
            newcmd[k]=' ';
            k++;
            newcmd[k]='-';
            k++;
            newcmd[k]='o';
            k++;
            newcmd[k]=' ';
            k++;
            strcat(newcmd,ofname);
            pthread_t pid;
            pthread_create(&pid,NULL,runcmd,(void *)newcmd);
            pthread_join(pid,NULL);
         }
      }
      if(cmOp==2)
      {
         int th=0;
         printf("Enter 1 for Normal 2 for Threaded File : ");
         scanf("%d",&th);
         while(th<1||th>2)
         {
            printf(RED "\nINVALID INPUT!\n");
            printf(WHITE "\nEnter Num : ");
            scanf("%d",&th);
         }
         if(th==1)
         {
            char ifname[25];
            char ofname[25];
            printf("\n\nEnter Input File Name (name.extenstion) : ");
            scanf("%s",ifname);
            printf("\n\nEnter Output File Name : ");
            scanf("%s",ofname);
            char cmd[]="gcc ";
            strcat(cmd,ifname);
            int size=strlen(cmd);
    	    char *newcmd=(char *)malloc(size+4);
            int k=0;
            for(int i=0;i<size;i++)
            {
               newcmd[i]=cmd[i];
               k++;
            }
            newcmd[k]=' ';
            k++;
            newcmd[k]='-';
            k++;
            newcmd[k]='o';
            k++;
            newcmd[k]=' ';
            k++;
            strcat(newcmd,ofname);
            pthread_t pid;
            pthread_create(&pid,NULL,runcmd,(void *)newcmd);
            pthread_join(pid,NULL);
            char cmp[]="./";
            strcat(cmp,ofname);
            printf("\nCompiled File Executing in 3 seconds....\n");
            system("sleep 3");
            pthread_t pid1;
            pthread_create(&pid1,NULL,runcmd,(void *)cmp);
            pthread_join(pid1,NULL);
         }
         else
         {
            char ifname[25];
            char ofname[25];
            printf("\n\nEnter Input File Name (name.extenstion) : ");
            scanf("%s",ifname);
            printf("\n\nEnter Output File Name : ");
            scanf("%s",ofname);
            char cmd[]="gcc -pthread ";
            strcat(cmd,ifname);
            int size=strlen(cmd);
    	    char *newcmd=(char *)malloc(size+4);
            int k=0;
            for(int i=0;i<size;i++)
            {
               newcmd[i]=cmd[i];
               k++;
            }
            newcmd[k]=' ';
            k++;
            newcmd[k]='-';
            k++;
            newcmd[k]='o';
            k++;
            newcmd[k]=' ';
            k++;
            strcat(newcmd,ofname);
            pthread_t pid;
            pthread_create(&pid,NULL,runcmd,(void *)newcmd);
            pthread_join(pid,NULL);
            char cmp[]="./";
            strcat(cmp,ofname);
            printf("\nCompiled File Executing in 3 seconds....\n");
            system("sleep 3");
            pthread_t pid1;
            pthread_create(&pid1,NULL,runcmd,(void *)cmp);
            pthread_join(pid1,NULL);
         }
      }
      if(cmOp==3)
      {
         break;
      }
      printf("\n\nEnter 0 to Continue....");
      scanf("%d",&temp6); 
      }while(1);
   }
   if(num==7)
   {
      system("clear");
      printf("\n\n\n\n\n\n\n\n\n");
      printf(BLUE"\n\t\t\t ▀▄▀▄▀▄🅃 🄷 🄰 🄽 🄺   🅈 🄾 🅄 ▀▄▀▄▀▄\n");
      system("sleep 3");
      return 0;
   }
   printf("\n\nEnter 0 to Continue....");
   scanf("%d",&temp);
   }while(1);
}
