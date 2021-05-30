int main() {

	// Declare Variables
   int i = 0;
   char ch;
 
	//Print ASCII Values
   for (i = 33; i < 256; i++) {
      printf("%d : %c ",i,ch);
      ch = ch + 1;
   }
   
   return 0;
}