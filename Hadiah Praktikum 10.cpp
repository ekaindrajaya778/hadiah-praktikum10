#include <iostream.h>
#include <conio.h>

main()
{
char nm [25],nim[8], jwb ;
float nilai1[10],nilai2[10],nilai3[10],NA[10],temp;
int i,j;
isi:
clrscr;
        cout<<"Masukkan Jumlah Data yang ingin anda input : ";
  for (i=1;i<=j;i++)
  {
  cout<<"Data Ke- : "<<i<<endl;
  cout<<"Nama Mahasiswa: "; cin>>nm;
  cout<<"Nim Mahasiswa : "; cin>>nim;
  cout<<"Nilai 1 : ";cin>>nilai1[i];
  cout<<"Nilai 2 : ";cin>>nilai2[i];
  cout<<"Nilai 3 : ";cin>>nilai3[i];

       NA[i] = (nilai1[i]+nilai2[i]+nilai3[i])/3;
       cout<<endl;
  }
//output
cout<<"Nama Mahasiswa " <<nm<<endl;
cout<<"Nim Mahasiswa " <<nim<<endl;
cout<<"Nilai AKhir Mahasiswa " <<NA<<endl ;
cout<<endl;
int min;
min = NA[0];
int maks ;
maks = NA[0];
        for (int i=0;i<j;i++)
   {
        if(NA[i]<min)
      min = NA[i];
      if (NA[i]>maks)
      maks = NA[i];
   }
cout<<"Nilai Akhir Mahasiswa Tertinggi "<< maks<<endl;
cout<<"Niali Akhir Mahasiswea Terendah " << min<<endl;
cout<<endl;
cout<<"========================================================";
for(int a=j-1; a>=1; a--)
        {
for(int b=1;b<=a;b++)
        {
        if(NA[b]>NA[b+1])
      {
        temp = NA[b+1];
         NA[b+1] = NA[b];
         NA[b] =temp;
        }
   }
   }
cout<<endl;
        cout<<"\n\nData Setelah Diurutkan dari Tinggi ke Rendah: "<<endl;
   for(int a=j;a>=1;a--){
   cout<<NA[a]<<" ";}
   cout<<endl;

cout<<"Mau input data lagi [Y/T]: ";
jwb = getche();
if (jwb=='Y'||jwb=='y')
goto isi;
getch();
}




