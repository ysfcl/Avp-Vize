#include <stdio.h>
#include <stdlib.h>



/*
void topla(int* x,int* y,int* sonuc)
{
    *sonuc=*x+*y;
}
*/

/*
void yerdegistir(int* sayi1,int*sayi2)
{
    int gecici;
    gecici=*sayi2;
    *sayi2=*sayi1;
    *sayi1=gecici;
}
*/

/*
void degistir(int* a,int* b)
{
    int gecici;

    gecici=*b;
    *b=*a;
    *a=gecici;
}
*/



/*
void faktoriyel(int* sayi,int* sonuc)
{
    int sayac=1;
    *sonuc=1;

    while(sayac<=*sayi)
    {
        *sonuc=*sonuc*sayac;
        sayac++;
    }
}
*/

/*
int fkt(int* ptr)
{
    int sayac=1;

    while(sayac<=*ptr)
    {
        sayac*=(*ptr);

        sayac++;
    }

    return ptr;
}
*/


/*
void yazdir(int *dizi_adres,int array_size,int *referans)
{
    printf("Dizinin elemanlari:\n");

    for(dizi_adres=referans;dizi_adres<referans+array_size;dizi_adres++)
    {
        printf("%d\n",*dizi_adres);
    }
}

void ara(int *d_p,int eleman,int aranan)
{
    int sayac=0;
    while(sayac<eleman)
    {
        if(*d_p==aranan)
        {
            printf("Aranan eleman dizinin icerisinde bulundu ve sirasi %d. siradir.",sayac+1);
            break;
        }

        if(sayac==eleman-1)
        {
            printf("Aranan eleman dizinin icerisinde bulunamadi");
        }

        sayac++;
        d_p++;
    }

}
*/










int main()
{
/*
    int x,y,sonuc;
    int *ptr1,*ptr2;

    printf("Iki tane sayi giriniz:");
    scanf("%d%d",&x,&y);

    ptr1=&x;
    ptr2=&y;

//    topla(ptr1,ptr2,&sonuc);

//    sonuc=*ptr1+*ptr2;

    printf("\n\nYapilan islemin sonucu %d'dir.",sonuc);
*/

/*
    int x,y;
    int *ptr1,*ptr2;

    printf("Iki tane sayi giriniz:");
    scanf("%d%d",&x,&y);

    ptr1=&x;
    ptr2=&y;

    printf("\n\n\nYer degistirmeden onceki sayi1 %d ve sayi2 %d'dir.",*ptr1,*ptr2);

    yerdegistir(ptr1,ptr2);
/*
    gecici=*ptr2;
    *ptr2=*ptr1;
    *ptr1=gecici;


    printf("\n\n\nTakas isleminden sonraki sayi1 %d ve sayi2 %d'dir.",*ptr1,*ptr2);
*/


/*
    int a=4,b=83;
    int *ptr1,*ptr2;
    printf("Cagirmadan once %d ve %d",a,b);

    ptr1=&a;
    ptr2=&b;

    degistir(ptr1,ptr2);

    printf("\n\nCagirdiktan sonra %d ve %d",a,b);
*/

/*
    int a,sonuc=1;

    int *p,*pp;

    printf("Faktoriyelini almak istediginiz sayiyi giriniz:");
    scanf("%d",&a);

    p=&a;
    pp=&sonuc;

    faktoriyel(p,pp);

    printf("%d!=%d'dir.",*p,*pp);
*/

/*
    char dizi[100]="yusuf";
    char *p;

    p=dizi;

    printf("1. karakter %c'dir.",*dizi);
*/

/*
    int arr[]={10,20,30,40,50};
    int *p;

    p=arr;      //p=&arr[0] da yazilabilir, her ikiside dizinin ilk elemanini kasteder.

    printf("%d\n",p+1);
    printf("%d",arr);

    printf("\n%d",*(arr+2));
*/



/*
    int t[100];

    int *p;



    for(int i=0;i<100;i++)
    {
        t[i]=0;
    }

    for(int i=0;i<100;i++)
    {
        printf("%d\n",t[i]);
    }
*/

/*
    for(p=t;p<t+100;p++)
    {
        *p=0;
    }

    for(p=t;p<t+100;p++)
    {
        printf("%d\n",*p);
    }
*/


    /*
    for(int i=0;i<100;i++)
    {
        printf("%d. eleman %d\n",i+1,t[i]);
    }
*/

/*
    int n;

    printf("Lutfen dizinin boyutunu giriniz:");
    scanf("%d",&n);

    int dizi[n];

    int *p;

    p=dizi;

    int sayac=0;

    while(sayac<n)
    {
        printf("Lutfen dizinin elemanlarini giriniz:");
        scanf("%d",p);

        p++;
        sayac++;
    }

    sayac=0;
    p=dizi;

    while(sayac<n)
    {
        printf("Degerler:\n%d\n",*p);

        p++;
        sayac++;
    }
*/


/*
    int eleman;

    printf("Lutfen dizinin eleman sayisini giriniz:");
    scanf("%d",&eleman);

    int ar[eleman];

    int *p1;

    p1=ar;

    int sayac=0;

    while(sayac<eleman)
    {
        printf("Dizinin elemanlarini giriniz:");
        scanf("%d",p1);

        sayac++;
        p1++;
    }

    sayac=0;
    p1=ar;

    while(sayac<eleman)
    {
        printf("Ilk dizinin elemanlari:\n%d\n",*p1);

        sayac++;
        p1++;
    }

    int dizi[eleman];
    int *p2;

    p2=dizi;

    p1=ar;
    sayac=0;

    printf("Dizinin elemanlari yeni diziye kopyalaniyor...\n\n\n");

    while(sayac<eleman)
    {

        *p2=*p1;

        p2++;
        p1++;
        sayac++;
    }

    sayac=0;
    p1=ar;
    p2=dizi;

    while(sayac<eleman)
    {
        printf("Eski dizinin elemanlari:\n%d\n",*p1);

        sayac++;
        p1++;
    }

    p1=ar;
    printf("Eski dizinin adresi: %d\n\n",p1);
    sayac=0;

    while(sayac<eleman)
    {
        printf("Yeni dizinin elemanlari:\n%d\n",*p2);

        sayac++;
        p2++;
    }

    p2=dizi;
    printf("Yeni dizinin adresi: %d",p2);
*/


/*
    int aranan;

    printf("Lutfen aranan degeri giriniz:");
    scanf("%d",&aranan);

    int eleman;

    printf("Lutfen dizinin eleman sayisini giriniz:");
    scanf("%d",&eleman);

    int dizi[eleman];

    int *d_p;

    for(d_p=dizi;d_p<dizi+eleman;d_p++)
    {
        printf("Dizinin elemanlarini giriniz:");
        scanf("%d",d_p);

    }
    yazdir(d_p,eleman,dizi);
*/
/*
    printf("Dizinin elemanlari:\n");

    for(dizi_adres=referans;dizi_adres<referans+array_size;dizi_adres++)
    {
        printf("%d\n",*dizi_adres);
    }
*/
/*
    d_p=dizi;

    ara(d_p,eleman,aranan);
*/
/*
    int sayac=0;
    while(sayac<eleman)
    {
        if(*d_p==aranan)
        {
            printf("Aranan eleman dizinin icerisinde bulundu.");
            break;
        }

        if(sayac==eleman-1)
        {
            printf("Aranan eleman dizinin icerisinde bulunamadi");
        }

        sayac++;
        d_p++;
    }
*/


/*
    int el;

    printf("Dizinin eleman sayisini giriniz:");
    scanf("%d",&el);

    int dizi[el];

    int *ptr;

    ptr=dizi;

    printf("Lutfen %d tane deger giriniz:\n",el);

    while(ptr<dizi+el)
    {
        printf("Lutfen dizinin elemanlarini giriniz:");
        scanf("%d",ptr);

        ptr++;
    }

    ptr=dizi;

    printf("Dizinin elemanlari:\n");

    while(ptr<dizi+el)
    {
        printf("%d\n",*ptr);

        ptr++;
    }

    ptr=dizi;

    int max=*ptr;


    //En buyuk elemani bulma islemi dizi icerisinde temsili bir en buyuk tanimlayip (ki o her zaman ilk elemana esitlenir)
    //dizinin kalan elemanlari ile karsilastirilir ve dongu sonunda en buyuk eleman bulunmus olur.


    while(ptr<dizi+el)
    {
        if(*(ptr)>max)
        {
            max=*ptr;
        }

        ptr++;
    }

    printf("Dizinin en buyuk elemani %d'dir",max);
*/


/*              //soru 216 BITMEDI!!!!
    int eleman;


    do{
    printf("Lutfen dizinin eleman sayisini giriniz:");
    scanf("%d",&eleman);

    }while(eleman<=0);  //Dongunun kalici olarak calismasini istiyorsan dongunun kosul kismina yazacagin ifade false bir ifade olmalidir.


    int dizi[eleman];

    int sayac=0;
    printf("Dizinin elemanlarini giriniz:\n");

    while(sayac<eleman)
    {
        printf("%d. eleman:\n",sayac+1);
        scanf("%d",&dizi);

        sayac++;
    }

    sayac=0;

    printf("Dizinin normal hali:\t");

    while(sayac<eleman)
    {
        printf("%d\t",dizi[sayac]);
    }


    int y_dizi[eleman];

    int *p1,*p2;

    p1=dizi;
    p2=y_dizi;
*/



//PALINDROM SORUSU
/*
    char dizi[100];
    char *p1,*p2;

    int kontrol;


    printf("Lutfen bir metin giriniz:");
    gets(dizi);


    //Bu dongu p2'nin dizi isimli dizinin dolu kisim olarak en sonuna gitmesini saglar.

    for(p2=dizi;*p2;p2++);

    p2--; //Burdaki azaltma islemi dizinin en sonunda bulunan \0 ifadesini isleme almamak icin.


    kontrol=1;
    for(p1=dizi;kontrol && p1<p2;p1++,p2--)
    {
        if(*p1!=*p2)
        {
            kontrol=0;
        }

    }

    if(kontrol==0)
    {
        printf("Girilen %s palindrom degildir.",dizi);
    }
    else
    {
        printf("Girilen %s palindromdur.",dizi);
    }
*/

    //SAYILARLA PALINDROM YAPMA

    //atoi fonksiyonu tam olarak bu soru icin var sanirim.
/*    char sayi[10];

    printf("Lutfen palindromlugunu kontrol etmek istediginiz sayiyi giriniz:");
    gets(sayi);

    int numara=atoi(sayi);

    printf("Girdiginiz sayi %d'dir.\n",numara);


    char *p1,*p2;

    for(p2=sayi;*p2;p2++);
    p2--;


    int kontrol=1;

    for(p1=sayi;p1<p2;p1++,p2--)
    {
        if(*p1!=*p2)
        {
            kontrol=0;
        }
    }

    if(kontrol==0)
    {
        printf("%s palindrom degildir.",sayi);
    }

    else
    {
        printf("%s palindromdur.",sayi);
    }
*/


/*
    char dizi[50];

    char *p1,*p2;

    printf("Lutfen string giriniz:");
    gets(dizi);

    printf("\nGirdiginiz string:%s\n\n",dizi);


    for(p2=dizi;*p2;p2++);
    p2--;


    for(p1=dizi;p2<p1;p2--)
    {
        printf("Tersten yazilmis string:%s",*p2);
    }
*/








































    return 0;
}
