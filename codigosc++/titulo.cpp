#include <iostream>

using namespace std;

string title(string F){
  for(int j = 0; j < F.size(); j++)
  {
   if(F[j] >= 'A' && F[j] <= 'Z' && (F[j - 1] == ' ' || j == 0))
   {

   }

   else
   {

     if(F[j] >= 'a' && F[j] <= 'z' && j == 0)
     {
       F[j] += ('A' - 'a');
     }

     else
     {
       if(F[j] >= 'a' && F[j] <= 'z' && F[j - 1] == ' ' && (F[j - 1] == ' ' || j == 0))
       {
         F[j] += ('A' - 'a');
       }

       else
       {
         if(F[j] >= 'A' && F[j] <= 'Z')
         {
           F[j] += ('a' - 'A');
         }

         else
         {
           if(F[j] >= 'a' && F[j] <= 'b'&& F[j-1] >= 'A' && F[j-1]<= 'z')
           {

           }
         }
       }
     }
   }
  }

  return F;
}


int main(){
    string F;

    getline(cin, F);

    cout << title(F) << "\n";
}
