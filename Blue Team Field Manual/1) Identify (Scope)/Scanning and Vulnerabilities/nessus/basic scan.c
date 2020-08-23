#include <stdio.h>
#include <stdlib.h>
int main(){
    system("clear");
    system("nessus -q -x -T html 127.0.0.1 1241 admin password targets.txt results.txt");
    return(1);}
