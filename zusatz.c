void test()
{
    char name [] = "Ajay is my name."; // strings are saved as characters in Array

    printf("\nHello World from Zusatz");
    printf("\n%s",name);

    printf("\n0th Index: %c",name[0]); // char at given index

    printf("\nMemory address of name: %p", &name);
    printf("\nMemory address of 0th Index of name: %p\n", &name[0]);


    char str[] = "hello_my_cutie_pie";
//    printf("\nInput and Output Formatting");
    printf("%30s\n", str);
    printf("%-30s\n", str);
    printf("%10.14s\n", str);
    printf("%-10.5s\n", str);
    
    
}


void inputs()
{
   //Input and Output-----------------
    char uni ;
    int d;

    printf("\n Enter your Hochschule: ");
    scanf("%c",&uni);
    printf("\nHochschule is: ",uni);
/*
    printf("Give an Integer: ");
    scanf("%d",&d);
    printf("\nThe Integer is: %d",d);
*/  
}

void integer_promotions(){
    // a and b ar same characters but different values due to data type
    char a = 0xfb;
    unsigned char b = 0xfb;
    printf("\nInteger Promotions-----------------------------");
    printf("\na= %c",a);
    printf("\nb= %c",b); 
    if (a == b){
        printf("\nSame");
    }
    else {
        printf("\nNot SAme");
    }

}
  