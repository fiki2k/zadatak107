//Program treba naci i ispisat neparne elemente matrice. 

int main()

{
	int i,j;
	int m[3][3];
	printf("Unesi elemnete matrice:\n");
for(i=0;i<3;i++){    
for(j=0;j<3;j++)    
{    
	scanf("%d",&m[i][j]);    
}    
}   

for(i=0;i<3;i++){
for(j=0;j<3;j++){

//Uvjet za trazenje neparnog broja.
if(m[i][j]%2 != 0){

	printf("%d ",m[i][j]);
}
}
	printf("\n");
}

return 0;
}
