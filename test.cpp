#include <iostream>
#include <cstring>

using namespace std;
struct nod {char mat[20],prof[20],nume[20];nod* adr;}*p,*u;

int main()
{
   char x[20],y[20],z[20];
   cin>>x;
   while(strcmp(x,"END"))
   {cin>>y;
    cin>>z;
    if(p==0) {p=new nod;
              strcpy(p->mat,x);
              strcpy(p->prof,y);
              strcpy(p->nume,z);
              p->adr=NULL;
              u=p;}
    else {nod*c=new nod;
              strcpy(c->mat,x);
              strcpy(c->prof,y);
              strcpy(c->nume,z);
              c->adr=NULL;
              u->adr=c;
              u=c;
          }
    cin>>x;
   }
   for(nod *c=p;c->adr!=0;c=c->adr)
      for(nod*d=c->adr;d!=0;d=d->adr)
        if(strcmp(c->mat,d->mat)>0)
        {swap(c->mat,d->mat);
         swap(c->prof,d->prof);
         swap(c->nume,d->nume);}
         else if(strcmp(c->mat,d->mat)==0)
              if(strcmp(c->prof,d->prof)>0)
              {swap(c->mat,d->mat);
               swap(c->prof,d->prof);
               swap(c->nume,d->nume);}
         else if(strcmp(c->prof,d->prof)==0)
               if(strcmp(c->nume,d->nume)>0)
                {swap(c->mat,d->mat);
                 swap(c->prof,d->prof);
                  swap(c->nume,d->nume);}
   nod*d=p;
   cout<<d->mat<<" "<<d->prof<<d->nume<<endl;
   for(nod*c=p->adr;c!=0;c=c->adr)
  { if(strcmp(d->mat,c->mat) || strcmp(d->prof,c->prof) || strcmp(d->nume,c->nume))
   cout<<c->mat<<" "<<c->prof<<" "<<c->nume<<endl;
   d=c;
  }

   return 0;
}
