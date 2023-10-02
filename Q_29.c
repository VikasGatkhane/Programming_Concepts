#include<stdio.h>
int main()
{
        char s[1000], ch;
        int count=0, count1=0, count2=0;
        printf("Enter the string: \n");
        fgets(s, sizeof(s),stdin);
        printf("Enter the character to search : \n");
        scanf("%c", &ch);
        for(int i=0; s[i]!='\0';i++)
        {
        	if(s[i]==ch)
        		++count;
        }
        printf("The character %c occured is %d times\n", ch, count);
        for(int i=0; s[i]!='\0'; i++){
        	if(s[i]==" ")
        		++count1;
        }
        printf("The no of spaces occured is %d times\n", count1);
        for(int i=0; s[i]!='\0';i++){
        	if(s[i]==" ")
        		++count2;
        }
        printf("No of words in the string are %d \n", count2);
        
        return 0;
}
