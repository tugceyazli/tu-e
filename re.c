#include <stdio.h>
#include <stdlib.h>





int main() {





    struct noktalar{


        int x,y;


    };


    struct noktalar n1,n2,n3,n4,n5;

	float uzaklik1,uzaklik2,uzaklik3,uzaklik4,uzaklik5,uzaklik6,uzaklik7,uzaklik8,uzaklik9,uzaklik10;

	printf("1. noktanin koordinatlarini giriniz.");
	scanf("%d%d",&n1.x,&n2.y);

	printf("2. noktanin koordinatlarini giriniz.");
	scanf("%d%d",&n2.x,&n2.y);
 
 
	printf("3. noktanin koordinatlarini giriniz.");
	scanf("%d%d",&n3.x,&n3.y);
	
	
	printf("4. noktanin koordinatlarini giriniz.");
	scanf("%d%d",&n4.x,&n4.y);
	
	printf("5. noktanin koordinatlarini giriniz.");
	scanf("%d%d",&n5.x,&n5.y);
	

	
	uzaklik1=sqrt(pow((n1.x-n2.x),2)+pow((n1.y-n2.y),2));
	uzaklik2=sqrt(pow((n2.x-n3.x),2)+pow((n2.y-n3.y),2));
	uzaklik3=sqrt(pow((n3.x-n4.x),2)+pow((n3.y-n4.y),2));
	uzaklik4=sqrt(pow((n4.x-n5.x),2)+pow((n4.y-n5.y),2));
	uzaklik5=sqrt(pow((n1.x-n3.x),2)+pow((n1.y-n3.y),2));
	uzaklik6=sqrt(pow((n1.x-n4.x),2)+pow((n1.y-n4.y),2));
	uzaklik7=sqrt(pow((n1.x-n5.x),2)+pow((n1.y-n5.y),2));
	uzaklik8=sqrt(pow((n2.x-n4.x),2)+pow((n2.y-n4.y),2));
	uzaklik9=sqrt(pow((n2.x-n5.x),2)+pow((n2.y-n5.y),2));
	uzaklik10=sqrt(pow((n3.x-n5.x),2)+pow((n3.y-n5.y),2));


    printf("1. ve 2. nokta arasindaki mesafe %lf'dir.\n",uzaklik1);
    printf("2. ve 3. nokta arasindaki mesafe %lf'dir.\n",uzaklik2);
    printf("3. ve 4. nokta arasindaki mesafe %lf'dir.\n",uzaklik3);
    printf("4. ve 5. nokta arasindaki mesafe %lf'dir.\n",uzaklik4);
    printf("1. ve 3. nokta arasindaki mesafe %lf'dir.\n",uzaklik5);
    printf("1. ve 4. nokta arasindaki mesafe %lf'dir.\n",uzaklik6);
    printf("1. ve 5. nokta arasindaki mesafe %lf'dir.\n",uzaklik7);
    printf("2. ve 4. nokta arasindaki mesafe %lf'dir.\n",uzaklik8);
    printf("2. ve 5. nokta arasindaki mesafe %lf'dir.\n",uzaklik9);
    printf("3. ve 5. nokta arasindaki mesafe %lf'dir.\n",uzaklik10);








    


    return 0;


}
