//program by sneha shee
//find the fair value of a flat
void main()
{
	long int floor,SBA,consCost,landCost,floorCost,netCost,premiumRs,premium;
	clrscr();
	printf("\nGet fair value of your flat:--\n");
	printf("\nEnter the number of floors of the building: ");
	scanf("%ld",&floor);
	printf("Enter the cost of super built up area: ");
	scanf("%ld",&SBA);
	printf("Enter the construction cost: ");
	scanf("%ld",&consCost);
	printf("Enter the land cost: ");
	scanf("%ld",&landCost);
	printf("\nSo, we get--\n");
	floorCost=landCost/floor;
	printf("\nPer floor cost of the building is: %ld", floorCost);
	netCost=consCost+floorCost;
	printf("\nNet cost of per floor is: %ld",netCost);
	premiumRs=SBA-netCost;
	printf("\nPrimium cost is (Rs): %ld",premiumRs);
	premium=(100*premiumRs)/netCost;
	printf("\nThe premium value of the flat is %ld %", premium);
	getch();
}