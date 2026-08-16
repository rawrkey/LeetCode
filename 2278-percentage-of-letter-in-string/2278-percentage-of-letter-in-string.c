int percentageLetter(char* s, char letter) {
    int occur=0;
    size_t totallength=strlen(s);
    for(int i=0;i<totallength;i++){
        if(s[i]==letter){
            occur++;
        }
    }
    if(totallength==0)return 0;
    return (occur*100)/totallength;
}