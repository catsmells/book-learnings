#include <stdio.h>
#include <stdlib.h>
int main(){
    system("clear");
    system("nmap -sn -PE 127.0.0.1"); //ping sweep for network
    system("sleep 1 && nmap --open 127.0.0.*"); //scan & show open ports
    system("sleep 1 && nmap -sV 127.0.0.1"); //determine open services
    system("sleep 1 && nmap -p 80,443 127.0.0.1"); //scan two common TCP ports (HTTP, HTTPS)
    system("sleep 1 && nmap -sU -p 53 127.0.0.1"); //scan common UDP port (DNS)
    system("sleep 1 && nmap -v -Pn -sU -sT -p U:53,111,137,T:21-25,80,139,8080 127.0.0.1"); //scan both TCP & UDP, be verbose on a single host, and include optional skip ping
    return(1);
}
