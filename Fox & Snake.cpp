 #include <iostream>
 using namespace std;

 int main()
 {
     int row,col;
     cin>>row>>col;

     for(int i=1;i<=row;i++)
     {
         if(i%2==1)
         {
             for(int j=1;j<=col;j++)
             {
                 cout<<"#";
             }
         }

         else if(i%4==0)
         {
             cout<<"#";
             for(int j=2;j<=col;j++)
             {
                 cout<<".";;
             }
         }

         else
         {
             for(int j=1;j<col;j++)
             {
                 cout<<".";
             }
             cout<<"#";
         }
         cout<<endl;
     }
 }
