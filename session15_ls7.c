#include<stdio.h> 
int main(){
	char str[]="xin chao tat ca moi nguoi @@ 1234";
	int size= strlen(str);
	int countAlphabet=0;
	int countNumber=0;
	int specialCharacter=0; 
	for(int i=0;i<size;i++){
		if(isalpha(str[i])){
			countAlphabet++; 
		}else if(isdigit(str[i])){
			countNumber++; 
		}else{
			specialCharacter= size-countAlphabet-countNumber; 
		} 
	}
	printf("chuoi co %d chu cai\n",countAlphabet);
	printf("chuoi co %d chu so\n",countNumber);
	printf("chuoi co %d chu so\n",specialCharacter);
	return 0; 
}


