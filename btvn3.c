/* BAI T?P TH?C HÀNH : Viet chuong trinh MENU co ban
 Lua chon 1: Yêu cau nguoi dung nhap vao ten, và ngay thang nam sinh
 Lua chon 2: Yeu cau nguoi dung nhap vao 1 so, và kiem tra x co phai so chan hay so le
 Lua chon 3: Exit
 - Author: vanthanh
 - Date: 9 June
*/

#include<stdio.h>

int main(){
	int choice;
	printf("----------------MENU----------------\n1.Please input your name and day of birth.\n2.Check if a number is even or odd.\n3.Exit\n");
	
	do{
		printf("Enter your choice: ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				{
					char name[100];
					int dd,mm,yy;
					int c;
					
					printf("\nEnter your name: ");
					scanf("%s",&name);
	    			while ((c = getchar()) != '\n' && c != EOF); // xoa bo dem 
	
					printf("Enter your date of birth (dd mm yyyy): ");
					scanf("%d %d %d",&dd,&mm,&yy);
					printf("Your name is %s and your birthday is %d/%d/%d.\n",name,dd,mm,yy);
					break;
				}
			
			case 2:
				{
					int n;
					printf("\nEnter a number: ");
					scanf("%d",&n);
					while( n != 0){
						if(n % 2 == 0){ 
							printf("%d is even number.\n",n);
						}else printf("%d is odd number.\n",n);
						break;
					}
					break;	
				}
			
			case 3: 
				printf("Thanks for using.Goodbye!!!\n");
				break;
			default:
				printf("Invalid choice!!!\n");
				break;
		}
	}while(choice != 3);
}



